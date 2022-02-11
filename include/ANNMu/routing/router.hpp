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

#ifndef ANNMu_ROUTING_ROUTER_HPP
#define ANNMu_ROUTING_ROUTER_HPP

#include <regex>
#include <vector>
#include <fstream>

#include <ANNMu/http/requestMethods.hpp>
#include <ANNMu/routing/route.hpp>
#include <web/controllerList.hpp>

using namespace std;


namespace annmu {

    namespace routing {

        class Router {

            private:
                std::vector<annmu::routing::Route> mRoutes;


            public:

                /**
                 * 
                 * @brief The constructor does nothing.
                 * 
                 */

                Router();


                /**
                 * 
                 * @brief The destructor does nothing.
                 * 
                 */

                ~Router();


                /**
                 * 
                 * @brief The method sets the new route into the router.
                 * 
                 * @param methods It's the number of the acceptable request 
                 * methods.
                 * @param pattern It's the pattern for the route.
                 * @param id It's the number of the route's controller.
                 * 
                 */

                void setRoute(
                    annmu::http::method methods, 
                    const char * pattern, 
                    web::controllers::controllerList id
                );


                /**
                 * 
                 * @brief The method returns the ID of the controller.
                 * 
                 * @param method The method of the request.
                 * @param query The query of the request.
                 * 
                 * @return The method returns the ID of the controller. If the 
                 * controller doesn't exist for the given data the method will 
                 * return web::controllers::UNKNOWN.
                 * 
                 */

                web::controllers::controllerList getControllerID(
                    annmu::http::method method, 
                    const char *query
                );


                /**
                 * 
                 * @brief The method prints all the information about this 
                 * object to the ostream from the parameter.
                 * 
                 * @param out It's the ostream where the information about this 
                 * object should be printed out.
                 * 
                 */

                void debug(std::ostream & out);


        };

    }

}

#endif
