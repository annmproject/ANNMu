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

#include <ANNMu/url/migration.hpp>


namespace annmu {

    namespace url {
        
        /*
         *
         * New address
         * 
         */

        std::string Migration::newAddress(const char * path, annmu::log::Log * log, annmu::url::Url * url) {
            
            std::ifstream file(path, std::ifstream::in);
            std::string query = annmu::url::Coding::decode(url->getQuery());
            std::string line;
            std::size_t pos;

            if(!file.is_open()) {
                log->add(annmu::log::LOG_WARNING, "The migration function cannot open migration configuration file!");
                return std::string();
            }

            while(std::getline(file, line)) {
                
                if(line[0] == '\n' || line[0] == '#') {
                    continue;
                }

                if((pos = line.find(" = ")) == std::string::npos) {
                    continue;
                }

                if(line.substr(0, pos).compare(query) == 0) {
                    return line.substr(pos + 3, line.size());
                }

            }

            return std::string();

        }

        
    }

}
