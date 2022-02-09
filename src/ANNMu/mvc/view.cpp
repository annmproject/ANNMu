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

#include <ANNMu/mvc/view.hpp>


namespace annmu {

    namespace mvc {

        /*
         *
         * Constructor
         * 
         */

        View::View(annmu::log::Log * log, const char * tplPath) {
            this->mLog = log;
            this->mTplPath = tplPath;
        }


        /*
         *
         * Set
         * 
         */

        void View::set(const char * key, const char * value) {

            std::map<std::string, std::string>::iterator it;

            it = this->mVars.find(key);

            if(it != this->mVars.end()) {
                it->second = value;
            }
            else {
                this->mVars.insert(std::make_pair(key, value));
            }

        }


        /*
         *
         * Print
         * 
         */

        std::string View::print() {

            std::map<std::string, std::string>::iterator it;
            std::ifstream file(this->mTplPath);
            std::size_t startTag, endTag, foundLast = 0;
            std::string tag;

            /// check open file
            if(!file.is_open()) {
                this->mLog->add(annmu::log::LOG_ERROR, "Template can't be opened.");
                this->mLog->add(annmu::log::LOG_ERROR, this->mTplPath.c_str());
                return std::string();
            }
            
            // load file
            std::string content(
                (std::istreambuf_iterator<char>(file)), 
                std::istreambuf_iterator<char>()
            );

            // close file
            file.close();

            // parse file
            while((startTag = content.find("{{", foundLast)) != std::string::npos) {
                
                if((endTag = content.find("}}", startTag)) != string::npos) {

                    tag = content.substr(startTag + 2, endTag - startTag - 2);

                    if((it = this->mVars.find(tag)) == this->mVars.end()) {
                        this->mLog->add(annmu::log::LOG_ERROR, "Undefined tag in template!");
                        this->mLog->add(annmu::log::LOG_ERROR, this->mTplPath.c_str());
                        this->mLog->add(annmu::log::LOG_ERROR, tag.c_str());
                        foundLast = endTag + 2;
                        continue;
                    }

                    content.replace(startTag, tag.size() + 4, it->second);

                    foundLast = startTag + it->second.size();

                }
                else {
                    this->mLog->add(annmu::log::LOG_ERROR, "Missing end tag!");
                    this->mLog->add(annmu::log::LOG_ERROR, this->mTplPath.c_str());
                    break;
                }

            }

            // return content
            return content;

        }


    }

}
