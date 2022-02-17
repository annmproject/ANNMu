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

#include <ANNMu/url/url.hpp>


namespace annmu {

    namespace url {

        /*
         *
         * Constructor
         * 
         */

        Url::Url(const char * protocol, const char * domain, const char * scriptPath, const char * query) : mDomain(domain ? domain : ""), mQuery(query ? query : "") {
            
            std::size_t prev = 0, curr;
            std::string path = std::string(scriptPath ? scriptPath : "");

            this->mData.reserve(128);
            this->mParameters.reserve(4);

            // base url
            this->mBase = this->mData.size();
            if(protocol && strcmp(protocol, "on") == 0) {
                this->mData += "https://"; 
            }
            else {
                this->mData += "http://"; 
            }
            this->mData += this->mDomain; 
            this->mData += path.substr(0, path.find_last_of("/")); 
            this->mData += '\0';

            // parameters
            prev = this->mData.size();
            this->mData += this->mQuery;
            this->mData += '\0';
            while((curr = this->mData.find('/', prev)) != std::string::npos) {
                this->mParameters.push_back(prev);
                this->mData[curr] = '\0';
                prev = curr + 1;
            }
            this->mParameters.push_back(prev);


        }


        /*
         *
         * Get domain
         * 
         */

        const char * Url::getDomain() {
            return this->mDomain;
        }


        /*
         *
         * Get base
         * 
         */

        const char * Url::getBase() {
            return this->mData.c_str() + this->mBase;
        }


        /*
         *
         * Get query
         * 
         */

        const char * Url::getQuery() {
            return this->mQuery;
        }


        /*
         *
         * Get number of parameters
         *
         */

        std::size_t Url::getNumberOfParameters() {
            return this->mParameters.size();
        }


        /*
         *
         * Get parameter at
         * 
         */

        const char * Url::getParameterAt(std::size_t index) {
            if(index < this->mParameters.size()) {
                return this->mData.c_str() + this->mParameters[index];
            }
            else {
                return "";
            }
        }


        /*
         *
         * Debug
         * 
         */

        void Url::debug(std::ostream & out) {

            out << "<script>";
            out << "console.log(\"--- Url ---\");";
            out << "console.log(\"data string: '" <<this->mData << "'\");";
            out << "console.log(\"domain: '" << Url::getDomain() << "'\");";
            out << "console.log(\"base url: '" << Url::getBase() << "'\");";
            out << "console.log(\"query: '" << Url::getQuery() << "'\");";
            out << "console.log(\"number of parameters: " << Url::getNumberOfParameters() << "\");";

            out << "console.log(\"parameters:\");";
            for(std::size_t i = 0; i < this->mParameters.size(); i++) {
                out << "console.log(\"[" << i << "] = '" << this->mData.c_str() + this->mParameters[i] << "'\");";
            }

            out << "</script>";    

        }


    }

}
