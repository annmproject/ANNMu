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

#include <ANNMu/http/response.hpp>

namespace annmu {

    namespace http {

        /*
         *
         * Constructor
         *
         */

        Response::Response() {
            this->mHeadersWords.reserve(4);
            this->mHeaders.reserve(128);
        }
        

        /*
         *
         * Destructor
         *
         */

        Response::~Response() {
            // nothing
        }


        /*
         *
         * Set Header
         *
         */

        void Response::setHeader(const char * key, const char * value) {
            this->mHeadersWords.push_back(this->mHeaders.size());
            this->mHeaders += key;
            this->mHeaders += '\0';
            this->mHeadersWords.push_back(this->mHeaders.size());
            this->mHeaders += value;
            this->mHeaders += '\0';
        }


        /*
         *
         * Exist Header
         *
         */

        bool Response::existsHeader(const char * key) {
            
            for(std::size_t i = 0; i < this->mHeadersWords.size(); i += 2) {
                if(strcmp(key, this->mHeaders.c_str() + this->mHeadersWords[i]) == 0) {
                    return true;
                }
            }

            return false;

        }


        /*
         *
         * Get Header
         *
         */

        const char * Response::getHeader(const char * key) {
            
            for(std::size_t i = 0; i < this->mHeadersWords.size(); i += 2) {
                if(strcmp(key, this->mHeaders.c_str() + this->mHeadersWords[i]) == 0) {
                    return this->mHeaders.c_str() + this->mHeadersWords[i + 1];
                }
            }

            return "";

        }


        /*
         *
         * Get number of headers
         *
         */

        std::size_t Response::getNumerOfHeaders() {
            return this->mHeadersWords.size() / 2;
        }


        /*
         *
         * Set cookie
         * 
         */

        void Response::setCookie(const char * name, const char * value, std::size_t expire, const char * path, const char * domain, bool secure, bool httpOnly) {

            if(!name || !value || !path ||!domain) {
                return;
            }

            std::string cookie;

            this->mCookies += annmu::url::Coding::encode(name);
            this->mCookies += "=";
            this->mCookies += annmu::url::Coding::encode(value);
            this->mCookies += "; Max-Age=";
            this->mCookies += std::to_string(expire);
            this->mCookies += "; Domain=";
            this->mCookies += annmu::url::Coding::encode(domain);
            this->mCookies += "; Path=";
            this->mCookies += annmu::url::Coding::encode(path);

            if(secure) {
                this->mCookies += "; Secure";
            }

            if(httpOnly) {
                this->mCookies += "; HttpOnly";
            }

            this->mCookies += "\r\n";

        }


        /*
         *
         * Exist cookie
         * 
         */

        bool Response::existsCookie(const char * name) {
            
            std::size_t pos;

            if((pos = this->mCookies.find(annmu::url::Coding::encode(name) + "=")) != std::string::npos) {
                if(pos == 0) {
                    return true;
                }
                if(pos > 0) {
                    if(this->mCookies[pos - 1] == '\n') {
                        return true;
                    }
                }
            }

            return false;

        }


        /*
         *
         * Get cookie data
         * 
         */
        
        const char * Response::getCookiesData() {

            if(this->mCookies.size() == 0) {
                return "";
            } 

            return this->mCookies.c_str();
            
        }


        /*
         *
         * Print
         *
         */

        void Response::print(std::ostream & out) {

            if(this->mHeadersWords.size() == 0) {
                Response::printDefault(out);
            }
            else {

                for(std::size_t i = 0; i < this->mHeadersWords.size(); i += 2) {
                    out << this->mHeaders.c_str() + this->mHeadersWords[i] << ": " << this->mHeaders.c_str() + this->mHeadersWords[i + 1] << "\n";
                }

                out << this->mCookies;

                out << "\n";

            }

        }


        /*
         *
         * Print default
         *
         */

        void Response::printDefault(std::ostream & out) {
            
            char currentTime[128];
            std::time_t rawTime;

            rawTime = time(NULL);
            strftime(currentTime, 127, "%a, %d %b %Y %X GMT", gmtime(&rawTime));
            
            out << "Status: 200 OK\n";
            out << "Content-Type: text/html; charset=utf-8\n";
            out << "Strict-Transport-Security: max-age=31536000; includeSubDomains\n";
            out << "Expect-CT: max-age=86400, enforce\n";
            out << "X-Frame-Options: deny\n";
            out << "X-Content-Type-Options: nosniff\n";
            out << "Cache-Control: no-cache, must-revalidate\n";
            out << "Last-Modified: " << currentTime << "\n";
            out << "Vary: User-Agent\n";
            out << "X-XSS-Protection: 1; mode=block\n";
            out << "Content-Security-Policy: script-src 'self' 'unsafe-inline';\n";
            out << "X-Permitted-Cross-Domain-Policies: none\n";
            out << "Feature-Policy: vibrate 'none'; geolocation 'none'\n";
            out << "X-Powered-By: ANNMu\n";
            out << this->mCookies;
            out << "\n";

        }


        /*
         *
         * Debug
         *
         */

        void Response::debug(std::ostream & out) {

            out << "<script>";
            out << "console.log(\"--- Response ---\");";

            if(Response::getNumerOfHeaders() == 0) {
                out << "console.log(\"The number of custom headers is 0. There will be printed the default header settings. See response->printDefault().\");";
            }

            out << "console.log(\"data string: " << this->mHeaders << "\");";
            out << "console.log(\"cookie string: " << this->mCookies << "\");";

            for(std::size_t i = 0; i < this->mHeadersWords.size(); i += 2) {
                out << "console.log(\"'" << this->mHeaders.c_str() + this->mHeadersWords[i] << "' = '" << this->mHeaders.c_str() + this->mHeadersWords[i + 1] << "'\");";
            }

            out << "</script>";

        }


    }

}
