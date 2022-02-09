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

#ifndef ANNMu_LOG_LOG_HPP
#define ANNMu_LOG_LOG_HPP

#include <fstream>
#include <cstdio>
#include <ctime>

#include <ANNMu/log/statuses.hpp>


using namespace std;


namespace annmu {

    namespace log {

        class Log {

            private:

                bool mIsWriteable;
                const char * mPath;


            public:

                /**
                 * 
                 * @brief The constructor stores the path into the class 
                 * variable and checks if it's possible to write
                 * into the log file.
                 * 
                 * @param path It's the path to the configuration file.
                 * 
                 */

                Log(const char * path);


                /**
                 * 
                 * @brief The destructor does nothing.
                 * 
                 */

                ~Log();


                /**
                 * 
                 * @brief The method checks if the log file is writeable.
                 * 
                 * @return The method returns true if the log file is writeable;
                 * otherwise It returns false.
                 * 
                 */

                bool isWriteable();


                /**
                 * 
                 * @brief The method writes the message to the log file.
                 * 
                 * @param status It's the type of the message.
                 * @param message It's the message which should be written to 
                 * the log file.
                 * 
                 */

                void add(annmu::log::logStatus status, const char * message);


                /**
                 * 
                 * @brief The method prints all the information about this 
                 * object to the ostream from the parameter.
                 * 
                 * @param out It's ostream where the information about this 
                 * object should be printed out.
                 * 
                 */

                void debug(std::ostream & out);


        };

    }

}

#endif
