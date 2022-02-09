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

#ifndef ANNMu_FORM_SIMPLE_HPP
#define ANNMu_FORM_SIMPLE_HPP

#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
#include <vector>

#include <ANNMu/http/request.hpp>


using namespace std;


namespace annmu {

    namespace form {

        class Simple {
        
            private:
                std::string mData;
                std::vector<std::size_t> mFormWords;


            public:

                /**
                 * 
                 * @brief The construct parses the data from standard input.
                 * 
                 * @param request It's the shared pointer to the request object.
                 * 
                 */

                Simple(annmu::http::Request * request);


                /**
                 * 
                 * @brief The destructor does nothing.
                 * 
                 */

                ~Simple();


                /**
                 * 
                 * @brief The method checks if the item under the given key 
                 * exists.
                 * 
                 * @param key It's the key of the item.
                 * 
                 * @return The method returns true if the item under the 
                 * given key exists; otherwise it returns false.
                 * 
                 */

                bool existKey(const char * key);


                /**
                 * 
                 * @brief The method returns the value of the item that is 
                 * stored under the given key.
                 * 
                 * @param key It's the key of the item.
                 * 
                 * @return The method returns the value that is stored under 
                 * the given key. If the value doesn't exist, the method will 
                 * return an empty array.
                 * 
                 */

                const char * getValue(const char * key);


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
