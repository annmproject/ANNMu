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

#ifndef ANNMu_MVC_VIEW_HPP
#define ANNMu_MVC_VIEW_HPP

#include <string>
#include <map>

#include <ANNMu/log/log.hpp>


using namespace std;


namespace annmu {

    namespace mvc {

        class View {

            protected:
                annmu::log::Log * mLog;
                std::map<std::string, std::string> mVars;
                std::string mTplPath;


            public:

                /**
                 * 
                 * @brief The constructor processes all of the data into the 
                 * appropriate class variables.
                 * 
                 * @param log It's the pointer to the log object.
                 * @param tplPath It's the path to the template file.
                 * 
                 */
                
                View(annmu::log::Log * log, const char * tplPath);

                
                /**
                 * 
                 * @brief The method sets the value under the given key.
                 * 
                 * @param key It's the key of the value.
                 * @param value It's the value.
                 * 
                 */

                void set(const char * key, const char * value);


                /**
                 * 
                 * @brief The method returns the string which should be printed 
                 * to the standard output.
                 * 
                 * @return The method returns the string which should be printed 
                 * to the standard output.
                 * 
                 */

                std::string print();


        };

    }

}

#endif
