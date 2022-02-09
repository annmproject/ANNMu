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

#include <ANNMu/form/token.hpp>


namespace annmu {

    namespace form {

        /*
         * 
         * Generate token
         * 
         */

        std::string Token::generateToken(const char * prefix, const char * tableName, sql::Connection * db, annmu::log::Log * log) {

            static const char alphanum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
            sql::PreparedStatement * sqlQuery;
            std::string query;
            std::string token;
            token.reserve(63);

            // generate token
            srand(time(NULL));
            
            for(int i = 0; i < 63; i++) {
                token += alphanum[rand() % (sizeof(alphanum) - 1)];
            }

            query  = "INSERT INTO ";
            query += prefix ? prefix : "";
            query += tableName ? tableName : "";
            query += " (token, validity) VALUES (?, NOW() + INTERVAL 1 DAY)";

            try {
                sqlQuery = db->prepareStatement(query);
                sqlQuery->setString(1, token);
                sqlQuery->execute();
                delete sqlQuery;
            }
            catch(std::exception & e) {
                log->add(annmu::log::LOG_ERROR, "This error happend in token generator!");
                log->add(annmu::log::LOG_ERROR, e.what());
            }

            return token;

        }


        /*
         * 
         * Verify token
         * 
         */
        
        bool Token::verifyToken(const char * prefix, const char * tableName, const char * token, sql::Connection * db, annmu::log::Log * log) {
            
            sql::PreparedStatement * sqlQuery;
            sql::ResultSet * sqlResult;
            std::string query;
            bool ret = false;

            // delete old tokens
            query  = "DELETE FROM ";
            query += prefix ? prefix : "";
            query += tableName ? tableName : "";
            query += " WHERE validity < NOW()";

            try {
                sqlQuery = db->prepareStatement(query);
                sqlQuery->execute();
                delete sqlQuery;
            }
            catch(std::exception & e) {
                log->add(annmu::log::LOG_ERROR, "This error happend in token verification!");
                log->add(annmu::log::LOG_ERROR, e.what());
            }

            // verify current token
            query  = "DELETE FROM ";
            query += prefix ? prefix : "";
            query += tableName ? tableName : "";
            query += " WHERE token = ?";

            try {
                sqlQuery = db->prepareStatement(query);
                sqlQuery->setString(1, token ? token : "");
                sqlQuery->execute();
                delete sqlQuery;
            }
            catch(std::exception & e) {
                log->add(annmu::log::LOG_ERROR, "This error happend in token verification!");
                log->add(annmu::log::LOG_ERROR, e.what());
            }

            try {
                sqlQuery = db->prepareStatement("SELECT ROW_COUNT() as delRowCount;");
                sqlResult = sqlQuery->executeQuery();
                sqlResult->next();
                ret = sqlResult->getInt("delRowCount") > 0 ? true : false;
                delete sqlQuery;
                delete sqlResult;
            }
            catch(std::exception & e) {
                log->add(annmu::log::LOG_ERROR, "This error happend in token verification!");
                log->add(annmu::log::LOG_ERROR, e.what());
            }

            return ret;

        }


    }

}
