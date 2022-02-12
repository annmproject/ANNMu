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

#ifndef ANNMu_URL_MIGRATION_HPP
#define ANNMu_URL_MIGRATION_HPP

#include <stdexcept>
#include <fstream>
#include <string>
#include <cstring>

#include <ANNMu/url/url.hpp>
#include <ANNMu/url/coding.hpp>
#include <ANNMu/log/log.hpp>


using namespace std;


namespace annmu {

    namespace url {

        class Migration {
            
            public:

                /**
                 * 
                 * @brief The static method checks if the new address for the 
                 * client's request exists.
                 * 
                 * @param path It's the path to the migration file.
                 * @param query It's the pointer to the array what contains
                 * client's query
                 * 
                 * @return The static method returns the string what contains 
                 * the new address if the new address exists, otherwise it 
                 * returns empty string.
                 * 
                 */
                
                static std::string newAddress(
                    const char * path, 
                    const char * query
                );


            private:

                /**
                 * 
                 * @brief The private constructor doesn't allow to create object.
                 * 
                 */

                Migration();


        };

    }

}

#endif
