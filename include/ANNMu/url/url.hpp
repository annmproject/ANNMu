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

#ifndef ANNMu_URL_URL_HPP
#define ANNMu_URL_URL_HPP

#include <fstream>
#include <string>
#include <vector>

using namespace std;


namespace annmu {

    namespace url {

        class Url {
            
            private:
                const char * mDomain;
                const char * mQuery;
                std::string mData;
                std::size_t mBase;
                std::vector<std::size_t> mParameters;


            public:

                /**
                 * 
                 * @brief The constructor processes all of the data into the 
                 * appropriate class variables.
                 * 
                 * @param protocol It's the pointer to the array that contains 
                 * the HTTPS status.
                 * @param domain It's the pointer to the array that contains 
                 * the domain name.
                 * @param scriptPath It's the pointer to the array that contains 
                 * the script path.
                 * @param query It's the pointer to the array that contains 
                 * the client's query.
                 * 
                 */

                Url(
                    const char * protocol, 
                    const char * domain, 
                    const char * scriptPath,
                    const char * query
                );


                /**
                 * 
                 * @brief The method returns the pointer to the array that 
                 * contains the domain name.
                 * 
                 * @return The method returns the pointer to the array that 
                 * contains the domain name.
                 * 
                 */

                const char * getDomain();


                /**
                 * 
                 * @brief The method returns the pointer to the array that 
                 * contains the base url.
                 * 
                 * @return The method returns the pointer to the array that 
                 * contains the base url.
                 * 
                 */

                const char * getBase();


                /**
                 * 
                 * @brief The method returns the pointer to the array that 
                 * contains the query.
                 * 
                 * @return The method returns the pointer to the array that 
                 * contains the query. If the query is not specified the method 
                 * will return the pointer to the empty array.
                 * 
                 */

                const char * getQuery();


                /**
                 * 
                 * @brief The method returns the number of the parameters in 
                 * the query.
                 * 
                 * @return The method returns the number of the parameters in 
                 * the query.
                 * 
                 */

                std::size_t getNumberOfParameters();


                /**
                 * 
                 * @brief The method returns the pointer to the array that 
                 * contains the parameter at the given index.
                 * 
                 * @param index It's the index of the parameter.
                 * 
                 * @return The method returns the pointer to the array that 
                 * contains the parameter at the given index. If the index is 
                 * out of the range the method will return the pointer to the 
                 * empty array.
                 * 
                 */

                const char * getParameterAt(std::size_t index);


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
