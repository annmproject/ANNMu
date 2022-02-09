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

#ifndef ANNMu_FORM_TOKEN_HPP
#define ANNMu_FORM_TOKEN_HPP

#include <string>
#include <ctime>

#include <mysql_connection.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

#include <ANNMu/log/log.hpp>


using namespace std;


namespace annmu {

    namespace form {

        class Token {

            public:

                /**
                 * 
                 * @brief The static method generates token for form.
                 * 
                 * @param prefix It's the pointer to the array that contains the
                 * prefix of the table what contains all tokens.
                 * @param tableName It's the pointer to the array that contains
                 * name of the table what contains all tokens.
                 * @param db It's the pointer to the DB connection.
                 * @param log It's the pointer to the Log object.
                 * 
                 * @return The method returns unique token for form. In case of
                 * some problem in communication with database it will return
                 * empty string.
                 * 
                 */

                static std::string generateToken(
                    const char * prefix,
                    const char * tableName,
                    sql::Connection * db,
                    annmu::log::Log * log
                );

                
                /**
                 * 
                 * @brief The static method verifies form token.
                 * 
                 * @param prefix It's the pointer to the array that contains the
                 * prefix of the table what contains all tokens.
                 * @param tableName It's the pointer to the array that contains
                 * name of the table what contains all tokens.
                 * @param token It's the pointer to the array that contains 
                 * the form token.
                 * @param db It's the pointer to the DB connection.
                 * @param log It's the pointer to the Log object.
                 * 
                 * @return The method returns true if the token is valid;
                 * otherwise the method returns false
                 * 
                 */

                static bool verifyToken(
                    const char * prefix,
                    const char * tableName,
                    const char * token,
                    sql::Connection * db,
                    annmu::log::Log * log
                );


        };


    }

}

#endif
