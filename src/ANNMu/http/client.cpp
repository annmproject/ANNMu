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

#include <ANNMu/http/client.hpp>


namespace annmu {

    namespace http {

        /*
         *
         * Constructor
         * 
         */

        Client::Client(const char * ip, const char * agent, const char * referer, const char * acceptableFormates, const char * acceptableLanguages, const char * cacheTime, const char * cookies) : mIp(ip ? ip : ""), mAgent(agent ? agent : ""),  mReferer(referer ? referer : "") , mAcceptableFormates(acceptableFormates ? acceptableFormates : ""), mAcceptableLanguages(acceptableLanguages ? acceptableLanguages : ""), mCacheTime(cacheTime ? cacheTime : "") {
            
            std::size_t prev = 0, curr, equal;

            if(cookies) {
                this->mCookies = std::string(cookies, strlen(cookies) + 1);
            }

            this->mCookiesWords.reserve(16); // performance improvement

            while(true) {

                curr = this->mCookies.find(';', prev);
                equal = this->mCookies.find('=', prev);

                if(curr != std::string::npos) {
                    this->mCookies[curr] = '\0';
                }
                
                this->mCookies[equal] = '\0';

                this->mCookiesWords.push_back(this->mCookies[prev] == ' ' ? prev + 1 : prev);
                this->mCookiesWords.push_back(equal + 1); 

                prev = curr + 1;

                if(curr == std::string::npos) {
                    break;
                }

            }

        }


        /*
         * 
         * Destructor
         * 
         */

        Client::~Client() {
            // nothing
        }


        /*
         * 
         * Get IP
         * 
         */

        const char * Client::getIp() {
            return this->mIp;
        }


        /*
         * 
         * Get agent
         * 
         */

        const char * Client::getAgent() {
            return this->mAgent;
        }


        /*
         * 
         * Get referer
         * 
         */

        const char * Client::getReferer() {
            return this->mReferer;
        }


        /*
         * 
         * Get acceptable formates
         * 
         */

        const char * Client::getAcceptableFormates() {
            return this->mAcceptableFormates;
        }


        /*
         * 
         * Get acceptable languages
         * 
         */

        const char * Client::getAcceptableLanguages() {
            return this->mAcceptableLanguages;
        }

        
        /*
         *
         * Get cache time
         * 
         */

        std::time_t Client::getCacheTime() {
            
            struct tm time;

            if(strptime(this->mCacheTime, "%a, %d %b %Y %X %Z", &time) != NULL) {
                return timelocal(&time);
            }

            return 0;

        }


        /*
         *
         * Exist cookie
         * 
         */

        bool Client::existCookie(const char * key) {

            for(std::size_t i = 0; i < this->mCookiesWords.size(); i += 2) {
                if(strcmp(key, this->mCookies.c_str() + this->mCookiesWords[i]) == 0) {
                    return true;
                }
            }

            return false;

        }

        
        /*
         *
         * Get cookie
         * 
         */

        const char * Client::getCookie(const char * const key) {

            for(std::size_t i = 0; i < this->mCookiesWords.size(); i += 2) {
                if(strcmp(key, this->mCookies.c_str() + this->mCookiesWords[i]) == 0) {
                    return this->mCookies.c_str() + this->mCookiesWords[i + 1];
                }
            }

            return "";

        }


        /*
         *
         * Debug
         * 
         */

        void Client::debug(std::ostream& out) {

            char strTime[128];
            std::time_t rawTime;

            rawTime = Client::getCacheTime();
            std::strftime(strTime, 127, "%a, %d %b %Y %X GMT", gmtime(&rawTime));

            out << "<script>";
            out << "console.log(\"--- Client ---\");";
            out << "console.log(\"'ip': '" << Client::getIp() << "'\");";
            out << "console.log(\"'agent':'" << Client::getAgent() << "'\");";
            out << "console.log(\"'referer': '" << Client::getReferer() << "'\");";
            out << "console.log(\"'acceptable formates': '" << Client::getAcceptableFormates() << "'\");";
            out << "console.log(\"'acceptable languages': '" << Client::getAcceptableLanguages() << "'\");";
            out << "console.log(\"cache time: " << Client::getCacheTime() << " ("<<  strTime << ")\");";
            out << "console.log(\"data string: " << this->mCookies << "\");";

            out << "console.log(\"cookies:\");";
            for(std::size_t i = 0; i < this->mCookiesWords.size(); i += 2) {
                out << "console.log(\"'" << this->mCookies.c_str() + this->mCookiesWords[i] << "' = '" << this->mCookies.c_str() + this->mCookiesWords[i + 1] << "'\");";
            }

            out << "</script>";    

        }


    }

}
