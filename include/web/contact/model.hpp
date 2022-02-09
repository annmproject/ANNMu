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

#ifndef WEB_CONTACT_MODEL_HPP
#define WEB_CONTACT_MODEL_HPP

#include <string>

#include <mysql_connection.h>

#include <ANNMu/config/config.hpp>
#include <ANNMu/log/log.hpp>
#include <ANNMu/http/request.hpp>
#include <ANNMu/http/response.hpp>
#include <ANNMu/url/url.hpp>
#include <ANNMu/mvc/model.hpp>
#include <ANNMu/form/token.hpp>

#include <web/contact/data.hpp>


using namespace std;
using namespace sql;


namespace web {

    namespace contact {

        class Model : public annmu::mvc::Model {

            public:

                /**
                 * 
                 * @brief Constructor handles all given data into suitable 
                 * class variables.
                 * 
                 * @param config It's shared pointer to the config object.
                 * @param log It's shared pointer to the log object.
                 * @param request It's shared pointer to the request object.
                 * @param response It's shared pointer to the response object.
                 * @param url It's shared pointer to the url object.
                 * @param db It's shared pointer to the DB object.
                 * @param parameters It's map<string,string> what 
                 * contains parameters.
                 * 
                 */
                
                Model(
                    annmu::log::Log       * log,
                    annmu::config::Config * config,
                    annmu::http::Request  * request,
                    annmu::http::Client   * client,
                    annmu::url::Url       * url,
                    sql::Connection       * db
                ) 
                : 
                annmu::mvc::Model(
                    log, 
                    config, 
                    request, 
                    client, 
                    url, 
                    db
                ) 
                {}


                /**
                 * 
                 * @brief The method gets the data for the homepage.
                 * 
                 * @return The method returns the data stored in the structure.
                 * 
                 */

                web::contact::Data get();


        };

    }

}

#endif
