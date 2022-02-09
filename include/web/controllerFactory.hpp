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

#ifndef WEB_CONTROLLER_FACTORY_HPP
#define WEB_CONTROLLER_FACTORY_HPP

#include <memory>
#include <mysql_connection.h>

#include <ANNMu/config/config.hpp>
#include <ANNMu/http/request.hpp>
#include <ANNMu/http/response.hpp>
#include <ANNMu/http/client.hpp>
#include <ANNMu/log/log.hpp>
#include <ANNMu/url/url.hpp>
#include <ANNMu/mvc/controller.hpp>

#include <web/controllerList.hpp>
#include <web/homepage/controller.hpp>
#include <web/contact/controller.hpp>


using namespace std;


namespace web {

    namespace controllers {

        class ControllerFactory {

            public:
                
                /**
                 * 
                 * @brief The static method creates the controller object.
                 * 
                 * @param log It's the pointer to the log object.
                 * @param config It's the pointer to the config object.
                 * @param request It's the pointer to the request object.
                 * @param client It's the pointer to the client object.
                 * @param url It's the pointer to the url object.
                 * @param db It's the pointer to the DB object.
                 * @param response It's the pointer to the response object.
                 * @param id, It's the ID of the controller what should be created.
                 * 
                 * @return The static method returns the pointer to the 
                 * controller object.
                 * 
                 */

                static annmu::mvc::Controller * create(
                    annmu::log::Log * log,
                    annmu::config::Config * config,
                    annmu::http::Request * request,
                    annmu::http::Client * client,
                    annmu::url::Url * url,
                    sql::Connection * db,
                    annmu::http::Response * response,
                    web::controllers::controllerList id
                );
        

        private:

            /**
             * 
             * @brief The private constructor doesn't allow to create the object.
             * 
             */

            ControllerFactory();


        };

    }

}

#endif

