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

#include <ANNMu/routing/router.hpp>


namespace annmu {

    namespace routing {

        /*
         *
         * Constructor
         * 
         */

        Router::Router() {
            // nothing
        }


        /*
         *
         * Destructor
         * 
         */

        Router::~Router() {
            // nothing
        }


        /*
         *
         * Set router
         * 
         */

        void Router::setRoute(annmu::http::method methods, const char * pattern, web::controllers::controllerList id) {

            if(pattern == NULL) {
                return;
            }

            annmu::routing::Route route;

            route.methods = methods;
            route.pattern = pattern;
            route.regex = std::regex(pattern);
            route.controllerID = id;
            
            this->mRoutes.push_back(route);

        }


        /*
         *
         * Get controller ID
         * 
         */

        web::controllers::controllerList Router::getControllerID(annmu::http::method method, const char *query) {
            
            if(query == NULL) {
                return web::controllers::UNKNOWN;
            }

            for(std::size_t i = 0; i < this->mRoutes.size(); i++) {
                if((this->mRoutes[i].methods & method) > 0) {
                    if(std::regex_match(query, this->mRoutes[i].regex)) {
                        return this->mRoutes[i].controllerID;
                    }
                }
            }

            return web::controllers::UNKNOWN;

        }


        /*
         *
         * Debug
         * 
         */

        void Router::debug(std::ostream & out) {

            out << "<script>";
            out << "console.log(\"--- Router ---\");";

            for(size_t i = 0; i < this->mRoutes.size(); i++) {
                out << "console.log(\"id: " << this->mRoutes[i].controllerID << "; methods: " << this->mRoutes[i].methods << "; pattern: " << this->mRoutes[i].pattern << "\");";
            }

            out << "</script>";  

        }

    }

}
