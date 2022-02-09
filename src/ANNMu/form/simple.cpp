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

#include <ANNMu/form/simple.hpp>


namespace annmu {

    namespace form {

        /*
         *
         * Constructor
         * 
         */

        Simple::Simple(annmu::http::Request * request) {
            
            std::size_t prev = 0, curr, equal;
            std::string line;

            // check request validity
            if(request->getMethod() != annmu::http::METHOD_POST) {
                return;
            }

            if(request->isContentSimpleForm() == false) {
                return;
            }

            if(request->getContentLength() == 0) {
                return;
            }

            // read data
            this->mData.reserve(request->getContentLength() + 1);

            while(std::getline(std::cin, line)) {
                this->mData += line;
            }

            // parse
            this->mFormWords.reserve(16); 

            while(true) {

                curr = this->mData.find('&', prev);
                equal = this->mData.find('=', prev);

                if(curr != std::string::npos) {
                    this->mData[curr] = '\0';
                }
                
                this->mData[equal] = '\0';

                this->mFormWords.push_back(prev);
                this->mFormWords.push_back(equal + 1); 

                prev = curr + 1;

                if(curr == std::string::npos) {
                    this->mData += '\0';
                    break;
                }

            }

        }

        
        /*
         *
         * Destructor
         * 
         */

        Simple::~Simple() {
            // nothing
        }


        /*
         *
         * Exist key
         * 
         */

        bool Simple::existKey(const char * key) {

            for(std::size_t i = 0; i < this->mFormWords.size(); i += 2) {
                if(strcmp(key, this->mData.c_str() + this->mFormWords[i]) == 0) {
                    return true;
                }
            }

            return false;

        }


        /*
         *
         * Get value
         * 
         */

        const char * Simple::getValue(const char * key) {

            for(std::size_t i = 0; i < this->mFormWords.size(); i += 2) {
                if(strcmp(key, this->mData.c_str() + this->mFormWords[i]) == 0) {
                    return this->mData.c_str() + this->mFormWords[i + 1];
                }
            }

            return "";

        }


        /*
         *
         * Debug
         * 
         */

        void Simple::debug(std::ostream & out) {      
            out << "<script>";  
            out << "console.log(\"--- Simple form ---\");";
            out << "console.log(\"data string: " << this->mData << "\");";
            for(std::size_t i = 0; i < this->mFormWords.size(); i += 2) {
                
                out << "console.log(\"'" << this->mData.c_str() + this->mFormWords[i] << "' = '" << this->mData.c_str() + this->mFormWords[i + 1] << "'\");";
            }
            out << "</script>";  
        }


    }

}
