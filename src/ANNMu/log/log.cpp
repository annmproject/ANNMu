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

#include <ANNMu/log/log.hpp>


namespace annmu {

    namespace log {
        
        /*
         *
         * Constructor
         * 
         */

        Log::Log(const char * path) : mPath(path ? path : "") {

            FILE *file;
            
            if((file = fopen(this->mPath, "a")) == NULL) {
                this->mIsWriteable = false;
                return;
            }

            this->mIsWriteable = true;

            fclose(file);

        }


        /*
         *
         * Destructor
         * 
         */

        Log::~Log() {
            // nothing
        }


        /*
         *
         * Is writeable
         * 
         */

        bool Log::isWriteable() {
            return this->mIsWriteable;
        }


        /*
         *
         * Add
         * 
         */

        void Log::add(annmu::log::logStatus status, const char * message) {

            char currentTime[128];
            std::time_t rawTime;
            FILE * file;

            if(!message) {
                return;
            }

            if(strlen(message) == 0) {
                return;
            }

            if((file = fopen(this->mPath, "a")) != NULL) {

                std::time(&rawTime);
                std::strftime(currentTime, 127, "%a, %d %b %Y %X GMT", std::gmtime(&rawTime));

                switch(status) {

                    case annmu::log::LOG_WARNING:
                        fprintf(file, "[WARNING] %s - %s\r\n", currentTime, message);
                        break;
                    
                    case annmu::log::LOG_ERROR:
                        fprintf(file, "[ERROR]   %s - %s\r\n", currentTime, message);
                        break;

                    default:
                        fprintf(file, "[MESSAGE] %s - %s\r\n", currentTime, message);
                        break;

                }

                fflush(file);
                fclose(file);

            }

        }
        

        /*
         *
         * Debug
         * 
         */

        void Log::debug(std::ostream& out) {
            out << "<script>";
            out << "console.log(\"--- Log ---\");";
            out << "console.log(\"'log path': '" << this->mPath << "'\");";
            out << "console.log(\"'is log writeable': " << this->mIsWriteable << " (0 - False; 1 - True)\");";
            out << "</script>";
        }


    }

}
