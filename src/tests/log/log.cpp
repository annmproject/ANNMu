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

#include <tests/log/log.hpp>

namespace tests {

    namespace log {

        /*
         *
         * Run
         * 
         */

        void Log::run() {

            puts("\n\x1b[36m==== Log class tests ====\x1b[0m");
            puts(Log::test1() ? "\x1b[32mTest  1 passed!\x1b[0m" : "\x1b[31mTest  1 failed!\x1b[0m");
            puts(Log::test2() ? "\x1b[32mTest  2 passed!\x1b[0m" : "\x1b[31mTest  2 failed!\x1b[0m");
            puts(Log::test3() ? "\x1b[32mTest  3 passed!\x1b[0m" : "\x1b[31mTest  3 failed!\x1b[0m");
            puts(Log::test4() ? "\x1b[32mTest  4 passed!\x1b[0m" : "\x1b[31mTest  4 failed!\x1b[0m");
            puts(Log::test5() ? "\x1b[32mTest  5 passed!\x1b[0m" : "\x1b[31mTest  5 failed!\x1b[0m");
            puts(Log::test6() ? "\x1b[32mTest  6 passed!\x1b[0m" : "\x1b[31mTest  6 failed!\x1b[0m");

        }


        /*
         *
         * Test 1
         * 
         */

        bool Log::test1() {
            
            try {

                std::stringstream buffer;
                std::ifstream file("./log/test1.log");
                char path[] = "./log/test1.log";

                annmu::log::Log log = annmu::log::Log(path);

                log.add(annmu::log::LOG_ERROR, NULL);

                buffer << file.rdbuf();

                if(buffer.str().empty()) {
                    return true;
                }

                return false;

            }
            catch(std::exception &e) {
                return false;
            }

        }


        /*
         *
         * Test 2
         * 
         */

        bool Log::test2() {
            
            try {

                std::stringstream buffer;
                std::ifstream file("./log/test2.log");
                char path[] = "./log/test2.log";

                annmu::log::Log log = annmu::log::Log(path);

                log.add(annmu::log::LOG_ERROR, "");

                buffer << file.rdbuf();

                if(buffer.str().empty()) {
                    return true;
                }

                return false;

            }
            catch(std::exception &e) {
                return false;
            }

        }


        /*
         *
         * Test 3
         * 
         */

        bool Log::test3() {
            
            try {
                
                FILE *f;
                char path[] = "./log/test3.log";
                char message[] = "This is my test error message!";

                // clear the file before test
                if((f = fopen(path, "r")) != NULL) {
                    fclose(f);
                    if((f = fopen(path, "w")) != NULL) {
                        fclose(f);
                    }
                }

                annmu::log::Log log = annmu::log::Log(path);

                log.add(annmu::log::LOG_ERROR, message);

                std::stringstream buffer;
                std::ifstream file(path);

                buffer << file.rdbuf();

                if(buffer.str().find(message) != std::string::npos && buffer.str().find("[ERROR]") != std::string::npos) {
                    return true;
                }

                return false;

            }
            catch(std::exception &e) {
                return false;
            }

        }


        /*
         *
         * Test 4
         * 
         */

        bool Log::test4() {
            
            try {
                
                FILE *f;
                char path[] = "./log/test4.log";
                char message[] = "This is my test warning message!";

                // clear the file before test
                if((f = fopen(path, "r")) != NULL) {
                    fclose(f);
                    if((f = fopen(path, "w")) != NULL) {
                        fclose(f);
                    }
                }

                annmu::log::Log log = annmu::log::Log(path);

                log.add(annmu::log::LOG_WARNING, message);

                std::stringstream buffer;
                std::ifstream file(path);

                buffer << file.rdbuf();

                if(buffer.str().find(message) != std::string::npos && buffer.str().find("[WARNING]") != std::string::npos) {
                    return true;
                }

                return false;

            }
            catch(std::exception &e) {
                return false;
            }

        }


        /*
         *
         * Test 5
         * 
         */

        bool Log::test5() {
            
            try {
                
                FILE *f;
                char path[] = "./log/test5.log";
                char message[] = "This is my test message!";

                // clear the file before test
                if((f = fopen(path, "r")) != NULL) {
                    fclose(f);
                    if((f = fopen(path, "w")) != NULL) {
                        fclose(f);
                    }
                }

                annmu::log::Log log = annmu::log::Log(path);

                log.add(annmu::log::LOG_MESSAGE, message);

                std::stringstream buffer;
                std::ifstream file(path);

                buffer << file.rdbuf();

                if(buffer.str().find(message) != std::string::npos && buffer.str().find("[MESSAGE]") != std::string::npos) {
                    return true;
                }

                return false;

            }
            catch(std::exception &e) {
                return false;
            }

        }


        /*
         *
         * Test 6
         * 
         */

        bool Log::test6() {
            
            try {
                
                annmu::log::Log log = annmu::log::Log("./log/test6.log");

                if(log.isWriteable()) {
                    return true;
                }

                return false;

            }
            catch(std::exception &e) {
                return false;
            }

        }


    }

}
