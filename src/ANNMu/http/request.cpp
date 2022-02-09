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

#include <ANNMu/http/request.hpp>


namespace annmu {

    namespace http {

        /*
         *
         * Constructor
         * 
         */

        Request::Request(const char * requestMethod, const char * httpsStatus, const char * requestedWith, const char * contentType, const char * const contentLength) : mRequestMethod(requestMethod ? requestMethod : ""), mHttpsStatus(httpsStatus ? httpsStatus : ""), mRequestedWith(requestedWith ? requestedWith : ""), mContentType(contentType ? contentType : ""), mContentLength(contentLength ? contentLength : "") {
            // nothing
        }


        /*
         * 
         * Destructor
         * 
         */

        Request::~Request() {
            // nothing
        }


        /*
         *
         * Get method
         * 
         */

        annmu::http::method Request::getMethod() {

            if(strcmp(this->mRequestMethod, "GET") == 0) {
                return annmu::http::METHOD_GET;
            }
            else if(strcmp(this->mRequestMethod, "POST") == 0) {
                return annmu::http::METHOD_POST;
            }
            
            return annmu::http::METHOD_UNKNOWN;

        }


        /*
         *
         * Is https
         * 
         */

        bool Request::isHttps() {

            if(strcmp(this->mHttpsStatus, "on") == 0) {
                return true;
            }
            
            return false;

        }


        /*
         *
         * Is Ajax
         * 
         */

        bool Request::isAjax() {

            if(strcmp(this->mRequestedWith, "XMLHttpRequest") == 0 || strcmp(this->mRequestedWith, "xmlhttprequest") == 0) {
                return true;
            }
            
            return false;

        }


        /*
         *
         * Get content type
         * 
         */

        const char * Request::getContentType() {
            return this->mContentType;
        }


        /*
         *
         * Is content simple form
         * 
         */
        
        bool Request::isContentSimpleForm() {
            
            if(strcmp(this->mContentType, "application/x-www-form-urlencoded") == 0) {
                return true;
            }

            return false;

        }


        /*
         *
         * Is content multipart form
         * 
         */

        bool Request::isContentMultipartForm() {
            
            if(strstr(this->mContentType, "multipart") != NULL) {
                return true;
            }

            return false;

        }


        /*
         *
         * Is content JSON
         * 
         */

        bool Request::isContentJson() {
            
            if(strstr(this->mContentType, "json") != NULL) {
                return true;
            }

            return false;

        }


        /*
         *
         * Get content length
         * 
         */

        std::size_t Request::getContentLength() {

            if(strlen(this->mContentLength) > 0) {
                return (std::size_t) std::stoull(this->mContentLength);
            }
            
            return 0;

        }


        /*
         *
         * Debug
         * 
         */

        void Request::debug(std::ostream &out) { 
            out << "<script>";
            out << "console.log(\"--- Request ---\");\n";  
            out << "console.log(\"method: " << Request::getMethod() << " (0 - UNKNOWN; 1 - GET; 2 - POST)\");";
            out << "console.log(\"is https: " << Request::isHttps() << " (0 - False; 1 - True)\");";
            out << "console.log(\"is ajax: " << Request::isAjax() << " (0 - False; 1 - True)\");";
            out << "console.log(\"content type: " <<  Request::getContentType() << "\");";
            out << "console.log(\"content length: " <<  Request::getContentLength() << "\");";
            out << "console.log(\"is content simple form: " << Request::isContentSimpleForm() << " (0 - False; 1 - True)\");";
            out << "console.log(\"is content multipart form: " << Request::isContentMultipartForm() << " (0 - False; 1 - True)\");";
            out << "console.log(\"is content json: " << Request::isContentJson() << " (0 - False; 1 - True)\");";
            out << "</script>";
        }
        

    }   

}
