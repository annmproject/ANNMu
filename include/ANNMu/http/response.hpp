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

#ifndef ANNMu_HTTP_RESPONSE_HPP
#define ANNMu_HTTP_RESPONSE_HPP

#include <ctime>
#include <string>
#include <vector>
#include <fstream>

#include <ANNMu/url/coding.hpp>


using namespace std;


namespace annmu {

    namespace http {

        class Response {

            private:
                std::string mHeaders;
                std::vector<std::size_t> mHeadersWords;
                std::string mCookies;


            public:

                /**
                 * 
                 * @brief The destructor does nothing.
                 * 
                 */

                Response();


                /**
                 * 
                 * @brief The destructor does nothing.
                 * 
                 */

                ~Response();


                /**
                 * 
                 * @brief The method sets the header under the given key.
                 * 
                 * @param key It's the key of the header.
                 * @param value It's the value of the header.
                 * 
                 */

                void setHeader(const char * key, const char * value);
                

                /**
                 * 
                 * @brief The method checks if the header under the given key 
                 * exists.
                 * 
                 * @param key It's the key of the header.
                 * 
                 * @return The method returns true if the header under the given 
                 * key exists; otherwise it returns false.
                 * 
                 */

                bool existsHeader(const char * key);


                /**
                 * 
                 * @brief The method returns the pointer to the array that 
                 * contains the value of the header that is stored under the 
                 * given key.
                 * 
                 * @param key It's the key of the header.
                 * 
                 * @return The method returns the pointer to the array that 
                 * contains the value that is stored under the given key. If the 
                 * value doesn't exist, the method will return the pointer to the 
                 * empty array.
                 * 
                 */

                const char * getHeader(const char * key);


                /**
                 * 
                 * @brief The method returns the number of the headers.
                 * 
                 * @return The method returns the number of the headers.
                 * 
                 */

                std::size_t getNumerOfHeaders();


                /**
                 * 
                 * @brief The method sets the cookie under the given key.
                 * 
                 * @note In case of any NULL pointer as parameter the method will
                 * fail.
                 * @param name It's the name of the cookie.
                 * @param value It's the value of the cookie.
                 * @param expire It's the time the cookie expires.
                 * @param path It's the path on the server in which the cookie 
                 * will be available on.
                 * @param domain It's The domain that the cookie is available to.
                 * @param secure It ndicates that the cookie should only be 
                 * transmitted over a secure HTTPS connection from the client.
                 * @param httpOnly When true the cookie will be made accessible 
                 * only through the HTTP protocol.
                 * 
                 */

                void setCookie(
                    const char * name, 
                    const char * value,
                    std::size_t  expire,
                    const char * path,
                    const char * domain,
                    bool         secure,
                    bool         httpOnly
                );


                /**
                 * 
                 * @brief The method checks if the cookie under the given key 
                 * exists.
                 * 
                 * @param name It's the name of the cookie.
                 * 
                 * @return The method returns true if the cookie under the given 
                 * key exists; otherwise it returns false.
                 * 
                 */

                bool existsCookie(const char * name);


                /**
                 * 
                 * @brief The method returns the pointer to the array what contains 
                 * cookies data.
                 * 
                 * @return The method returns the pointer to the array what contains 
                 * cookies data.
                 * 
                 */

                const char * getCookiesData();


                /**
                 * 
                 * @brief The method prints the header settings to the ostream.
                 * 
                 * @param out It's the ostream where the header settings 
                 * should be printed out.
                 * 
                 */

                void print(std::ostream & out);
                

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


            private:

                /**
                 * 
                 * @brief The method prints the default header settings to the 
                 * ostream.
                 * 
                 * @param out It's the ostream where the information about this 
                 * object should be printed out.
                 * 
                 */

                void printDefault(std::ostream & out);


        };

    }

}

#endif
