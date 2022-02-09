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

#include <ANNMu/config/config.hpp>

namespace annmu {

    namespace config {
        
        /*
         *
         * Constructor
         * 
         */

        Config::Config(const char * path) {

            std::ifstream file(path, std::ifstream::in);
            std::string line;
            std::size_t pos;

            if(!file.is_open()) {
                this->mIsConfigurationReadable = false;
                return;
            }

            this->mConfiguration.reserve(192); // performance improvement
            this->mConfigurationWords.reserve(16); // performance improvement
            this->mIsConfigurationReadable = true;

            while(std::getline(file, line)) {
                
                if(line[0] == '\n' || line[0] == '#') {
                    continue;
                }

                if((pos = line.find(" = ")) == std::string::npos) {
                    continue;
                }

                this->mConfigurationWords.push_back(this->mConfiguration.size());
                this->mConfiguration += line.substr(0, pos);
                this->mConfiguration += '\0';
                this->mConfigurationWords.push_back(this->mConfiguration.size());
                this->mConfiguration += line.substr(pos + 3, line.size());
                this->mConfiguration += '\0';

            }

        }


        /*
         *
         * Is readable
         * 
         */

        bool Config::isReadable() {
            return this->mIsConfigurationReadable;
        }


        /*
         *
         * Destructor
         * 
         */

        Config::~Config() {
            // nothing
        }


        /*
         *
         * Exist setting
         * 
         */

        bool Config::existSetting(const char * key) {

            for(std::size_t i = 0; i < this->mConfigurationWords.size(); i += 2) {
                if(strcmp(key, this->mConfiguration.c_str() + this->mConfigurationWords[i]) == 0) {
                    return true;
                }
            }

            return false;

        }

        
        /*
         *
         * Get setting
         * 
         */

        const char * Config::getSetting(const char * key) {

            for(std::size_t i = 0; i < this->mConfigurationWords.size(); i += 2) {
                if(strcmp(key, this->mConfiguration.c_str() + this->mConfigurationWords[i]) == 0) {
                    return this->mConfiguration.c_str() + this->mConfigurationWords[i + 1];
                }
            }

            return "";

        }


        /*
         *
         * Debug
         * 
         */

        void Config::debug(std::ostream& out) {

            out << "<script>";
            out << "console.log(\"--- Config ---\");";
            out << "console.log(\"cookie string: " << this->mConfiguration << "\");";
            out << "console.log(\"is configuration readable: " << Config::isReadable() << " (0 - False; 1 - True)\");";

            for(std::size_t i = 0; i < this->mConfigurationWords.size(); i += 2) {
                out << "console.log(\"'" << this->mConfiguration.c_str() + this->mConfigurationWords[i] << "' = '" << this->mConfiguration.c_str() + this->mConfigurationWords[i + 1] << "'\");";
            }

            out << "</script>";
            
        }


    }

}
