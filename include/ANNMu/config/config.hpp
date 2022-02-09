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

#ifndef ANNMu_CONFIG_CONFIG_HPP
#define ANNMu_CONFIG_CONFIG_HPP

#include <fstream>
#include <cstring>
#include <string>
#include <vector>


using namespace std;


namespace annmu {

    namespace config {

        class Config {

            private:

                std::string mConfiguration;
                std::vector<std::size_t> mConfigurationWords;
                bool mIsConfigurationReadable;


            public:

                /**
                 * 
                 * @brief The constructor processes all of the data from file
                 * into the appropriate class variable.
                 * 
                 * @param path It's the path to the configuration file.
                 * 
                 */

                Config(const char * path);


                /**
                 * 
                 * @brief The destructor does nothing.
                 * 
                 */

                ~Config();


                /**
                 * 
                 * @brief The method checks if the configuration file is readable.
                 * 
                 * @return The method returns true if the configuration is 
                 * readable; otherwise it returns false.
                 * 
                 */
                
                bool isReadable();


                /**
                 * 
                 * @brief The method checks if the configuration under the given 
                 * key exists.
                 * 
                 * @param key It's the key of the parameter.
                 * 
                 * @return The method returns true if the configuration under the 
                 * given key exists; otherwise it returns false.
                 * 
                 */

                bool existSetting(const char * key);


                /**
                 * 
                 * @brief The method returns the pointer to the array that 
                 * contains the value of the parameter that is stored under the 
                 * given key.
                 * 
                 * @param key It's the key of the parameter.
                 * 
                 * @return The method returns the pointer to the array that 
                 * contains the value of the parameter that is stored under the 
                 * given key. If the value doesn't exist the method will return 
                 * the pointer to the empty array.
                 * 
                 */

                const char * getSetting(const char * key);


                /**
                 * 
                 * @brief The method prints all the information about this 
                 * object to the ostream from the parameter.
                 * 
                 * @param out It's the ostream where the information about this 
                 * object should be printed out.
                 * 
                 */

                void debug(std::ostream & out);


        };

    }

}

#endif
