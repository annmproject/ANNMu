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

#ifndef ANNMu_HTTP_REQUEST_HPP
#define ANNMu_HTTP_REQUEST_HPP

#include <fstream>

#include <ANNMu/http/requestMethods.hpp>


using namespace std;
using namespace annmu;


namespace annmu {

    namespace http {

        class Request {

            private:
                const char * mRequestMethod;
                const char * mHttpsStatus;
                const char * mRequestedWith;
                const char * mContentType;
                const char * mContentLength;

            
            public:

                /**
                 * 
                 * @brief The constructor processes all of the data into the 
                 * appropriate class variables.
                 * 
                 * @param method It's the pointer to the array that contains 
                 * the request method.
                 * @param httpsStatus It's the pointer to the array that contains 
                 * the HTTPS status.
                 * @param requestedWith It's the pointer to the array that contains 
                 * X-Requested-With header.
                 * @param contentType It's the pointer to the array. It contains 
                 * the content type of the data that was sent by the client.
                 * @param contentLength It's the pointer to the array. It contains 
                 * the length of the data that was sent by the client.
                 * 
                 */

                Request(
                    const char * method,
                    const char * https,
                    const char * requestedWith,
                    const char * contentType,
                    const char * contentLength
                );

                
                /**
                 * 
                 * @brief The destructor does nothing
                 * 
                 */

                ~Request();


                /**
                 * 
                 * @brief The method returns the HTTP request method.
                 * 
                 * @return The method returns the HTTP request method.
                 * 
                 */

                annmu::http::method getMethod();
                

                /**
                 * 
                 * @brief Was the request sent via the HTTPS channel?
                 * 
                 * @return The method returns true if the request uses 
                 * the HTTPS protocol; otherwise it returns false.
                 * 
                 */

                bool isHttps();


                /**
                 * 
                 * @brief Was the request sent via AJAX?
                 * 
                 * @note The method is case sensitive to "XMLHttpRequest".
                 * 
                 * @return The method returns true if the request uses 
                 * Ajax; otherwise it returns false.
                 * 
                 */

                bool isAjax();

            
                /**
                 *
                 * @brief The method returns the pointer to the array that 
                 * contains the content type.
                 * 
                 * @return The method returns the pointer to the array that 
                 * contains the content type. If the content type is unknown, 
                 * the method will return the pointer to the empty array.
                 * 
                 */

                const char * getContentType();


                /**
                 *
                 * @brief The method returns the content length.
                 * 
                 * @return The method returns the content length. If the content 
                 * length is unknown, the method will return 0.
                 * 
                 */

                std::size_t getContentLength();


                /**
                 *
                 * @brief The method returns true if the requests contains
                 * simple form data.
                 * 
                 * @note The request contains simple form data if the content 
                 * type is equal to "application/x-www-form-urlencoded".
                 * 
                 * @return The method returns true if the requests contains
                 * simple form data; otherwise false.
                 * 
                 */
                
                bool isContentSimpleForm();


                /**
                 *
                 * @brief The method returns true if the request contains
                 * multipart form data.
                 * 
                 * @note The request contains multipart form data if the content 
                 * type contains substring "multipart".
                 * 
                 * @return The method returns true if the request contains
                 * multipart form data.
                 * 
                 */

                bool isContentMultipartForm();


                /**
                 *
                 * @brief The method returns true if the request contains
                 * json data.
                 * 
                 * @note The request contains multipart form data if the content 
                 * type contains substring "json".
                 * 
                 * @return The method returns true if the request contains
                 * json data.
                 * 
                 */

                bool isContentJson();


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
