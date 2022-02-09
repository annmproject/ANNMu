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

#ifndef WEB_ROUTER_FACTORY_HPP
#define WEB_ROUTER_FACTORY_HPP

#include <ANNMu/http/requestMethods.hpp>
#include <ANNMu/routing/router.hpp>


using namespace std;
using namespace annmu;


namespace web {

    namespace routing {

        class RouterFactory {

            public:
                
                /**
                 * 
                 * @brief The static method creates the router object.
                 * 
                 * @return The static method returns the router object.
                 * 
                 */

                static annmu::routing::Router create();
        

        private:

            /**
             * 
             * @brief The private constructor doesn't allow to create the object.
             * 
             */

            RouterFactory();


        };

    }

}

#endif


