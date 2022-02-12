/*
 * 
 * This file is part of the ANNMu project.
 * 
 * Copyright (c) 2021-2022 Adam Novak <annmproject@protonmail.com>
 *
 * This project is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This project is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this project. If not, see https://www.gnu.org/licenses/.
 *
 * You can be released from the requirements of the license by obtaining
 * a commercial license. Getting such a license is mandatory as soon as you
 * develop commercial activities involving the ANNMu source code without
 * disclosing the source code of your own applications.
 *
 */

#include <iostream>
#include <string>
#include <chrono>

#include <ANNMu/log/log.hpp>
#include <ANNMu/config/config.hpp>
#include <ANNMu/http/request.hpp>
#include <ANNMu/http/client.hpp>
#include <ANNMu/url/url.hpp>
#include <ANNMu/url/migration.hpp>
#include <ANNMu/http/response.hpp>
#include <ANNMu/http/responseStatuses.hpp>
#include <ANNMu/routing/router.hpp>
#include <ANNMu/mvc/controller.hpp>

#include <web/controllerList.hpp> 
#include <web/controllerFactory.hpp> 
#include <web/routerFactory.hpp> 

#include <mysql_connection.h>
#include <cppconn/driver.h>


//https://github.com/laravel/laravel/blob/9.x/lang/en/pagination.php
//https://stackoverflow.com/questions/2262386/generate-sha256-with-openssl-and-c

int main(void) {

    /*
     *
     * Stopwatch
     * 
     */

    std::chrono::steady_clock::time_point begin = std::chrono::high_resolution_clock::now();


    /*
     *
     * Log
     * 
     */

    // create object
    annmu::log::Log log(
        "web.log"
    );


    /*
     *
     * Configuration
     * 
     */

    // create object
    annmu::config::Config config(
        "web.config"
    );

    // check configiguration file
    if(!config.isReadable()) {
        log.add(annmu::log::LOG_ERROR, "Configuration is not readable!");
        std::cout << "Status:" << annmu::http::STATUS_500_INTERNAL_SERVER_ERROR << "\n\n";
    }


    /*
     *
     * HTTP request
     * 
     */

    // create object
    annmu::http::Request request(
        getenv("REQUEST_METHOD"), 
        getenv("HTTPS"), 
        getenv("HTTP_X_REQUESTED_WITH"), 
        getenv("CONTENT_TYPE"), 
        getenv("CONTENT_LENGTH")
    );

    // is request method valid
    if(request.getMethod() == annmu::http::METHOD_UNKNOWN) {
        std::cout << "Status:" << annmu::http::STATUS_400_BAD_REQUEST << "\n\n";
        return 0;
    }

    
    /*
     *
     * Client
     * 
     */

    // create object
    annmu::http::Client client(
        getenv("REMOTE_ADDR"), 
        getenv("HTTP_USER_AGENT"), 
        getenv("HTTP_REFERER"), 
        getenv("HTTP_ACCEPT"), 
        getenv("HTTP_ACCEPT_LANGUAGE"), 
        getenv("HTTP_IF_MODIFIED_SINCE"), 
        getenv("HTTP_COOKIE")
    );

    
    /*
     *
     * Url
     * 
     */

    // create object
    annmu::url::Url url(
        getenv("HTTPS"), 
        getenv("SERVER_NAME"), 
        getenv("SCRIPT_NAME"), 
        getenv("QUERY_STRING")
    );

    // url migration
    if(strcmp(config.getSetting("urlMigration"), "1") == 0) {
        try {
            std::string newUrl = annmu::url::Migration::newAddress("url.config", url.getQuery());
            if(!newUrl.empty()) {
                std::cout << "Status: " << annmu::http::STATUS_301_MOVED_PERMANENTLY << "\n";
                std::cout << "Location: " << url.getBase() << "/" << newUrl << "\n\n";
                return 0;
            }
        }
        catch(std::exception & e) {
            log.add(annmu::log::LOG_WARNING, e.what());
        }
    }


    /*
     *
     * Router
     * 
     */

    // create object
    annmu::routing::Router router = web::routing::RouterFactory::create();
    
    // get controller ID
    web::controllers::controllerList id = router.getControllerID(request.getMethod(), url.getQuery());

    // check if controller exists
    if(id == web::controllers::UNKNOWN) {
        log.add(annmu::log::LOG_ERROR, "Route for query wasn't found (404)!");
        log.add(annmu::log::LOG_ERROR, url.getQuery());
        std::cout << "Status: " << annmu::http::STATUS_404_NOT_FOUND << "\n\n";
        return 0;
    }


    /*
     *
     * MySQL
     * 
     */
    
    
    // pointer to DB connection
    sql::Connection * db = nullptr;
    
    // try to connect
    try {
        db = get_driver_instance()->connect(
            config.getSetting("dbAddr"), 
            config.getSetting("dbUser"), 
            config.getSetting("dbPass")
        );
        db->setSchema(config.getSetting("dbName"));
    } 
    catch(exception &e) {
        log.add(annmu::log::LOG_ERROR, e.what());
        std::cout << "Status:" << annmu::http::STATUS_500_INTERNAL_SERVER_ERROR << "\n\n";
        return 0;
    }


    /*
     *
     * HTTP response
     * 
     */

    // create object
    annmu::http::Response response;


    /*
     *
     * Controller
     * 
     */

    // create pointer
    annmu::mvc::Controller * controller = web::controllers::ControllerFactory::create(&log, &config, &request, &client, &url, db, &response, id);

    // check if controller exists
    if(!controller) {
        log.add(annmu::log::LOG_ERROR, "Controller for given ID doesn't exist!");
        std::cout << "Status: " << annmu::http::STATUS_404_NOT_FOUND << "\n\n";
        return 0;
    }


    /*
     *
     * Controller run
     * 
     */

    controller->run();


    /*
     *
     * Print header
     * 
     */

    response.print(cout);

    if(response.getNumerOfHeaders() == 0 || strcmp(response.getHeader("Status"), annmu::http::STATUS_200_OK) == 0) {
        std::cout << controller->print();
    }


    // navic
    annmu::form::Simple form(&request);
    form.debug(cout);


    /*
     *
     * Debug
     * 
     */

    if(strcmp(config.getSetting("developmentMode"), "1") == 0) {
        config.debug(cout);
        log.debug(cout);
        request.debug(cout);
        client.debug(cout);
        response.debug(cout);
        url.debug(cout);
        router.debug(cout);
        std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
        std::cout << "<!-- Time taken: " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "µs -->" << std::endl;
    } 


    /*
     *
     * Free memory
     * 
     */

    delete db;
    delete controller;

    
    /*
     *
     * Return
     * 
     */

    return 0;


}
