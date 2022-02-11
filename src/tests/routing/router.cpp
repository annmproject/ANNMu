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

#include <tests/routing/router.hpp>

namespace tests {

    namespace routing {

        /*
         *
         * Run
         * 
         */

        void Router::run() {

            puts("\n\x1b[36m==== Router class tests ====\x1b[0m");
            puts(Router::test1() ? "\x1b[32mTest  1 passed!\x1b[0m" : "\x1b[31mTest  1 failed!\x1b[0m");
            puts(Router::test2() ? "\x1b[32mTest  2 passed!\x1b[0m" : "\x1b[31mTest  2 failed!\x1b[0m");
            puts(Router::test3() ? "\x1b[32mTest  3 passed!\x1b[0m" : "\x1b[31mTest  3 failed!\x1b[0m");
            puts(Router::test4() ? "\x1b[32mTest  4 passed!\x1b[0m" : "\x1b[31mTest  4 failed!\x1b[0m");
            puts(Router::test5() ? "\x1b[32mTest  5 passed!\x1b[0m" : "\x1b[31mTest  5 failed!\x1b[0m");
            puts(Router::test6() ? "\x1b[32mTest  6 passed!\x1b[0m" : "\x1b[31mTest  6 failed!\x1b[0m");
            puts(Router::test7() ? "\x1b[32mTest  7 passed!\x1b[0m" : "\x1b[31mTest  7 failed!\x1b[0m");
            puts(Router::test8() ? "\x1b[32mTest  8 passed!\x1b[0m" : "\x1b[31mTest  8 failed!\x1b[0m");
            puts(Router::test9() ? "\x1b[32mTest  9 passed!\x1b[0m" : "\x1b[31mTest  9 failed!\x1b[0m");

        }


        /*
         *
         * Test 1
         * 
         */

        bool Router::test1() {

            try {

                annmu::routing::Router router;
                
                return true;

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

        bool Router::test2() {

            try {

                annmu::routing::Router router;

                router.setRoute(annmu::http::METHOD_GET, "^$", web::controllers::TESTS_1);
                
                return true;

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

        bool Router::test3() {

            try {

                annmu::routing::Router router;

                router.setRoute(annmu::http::METHOD_GET, "^$", web::controllers::TESTS_1);
                router.setRoute(annmu::http::METHOD_GET, "^kontakt$", web::controllers::TESTS_2);
                router.setRoute(annmu::http::METHOD_GET_POST, "^formular$", web::controllers::TESTS_3);
                
                return true;

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

        bool Router::test4() {

            try {

                annmu::routing::Router router;

                router.setRoute(annmu::http::METHOD_GET, "^$", web::controllers::TESTS_1);
                
                if(router.getControllerID(annmu::http::METHOD_GET, "") == web::controllers::TESTS_1) {
                    return true;
                }
                else {
                    return false;
                }

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

        bool Router::test5() {

            try {

                annmu::routing::Router router;

                router.setRoute(annmu::http::METHOD_GET, "^$", web::controllers::TESTS_1);
                
                if(router.getControllerID(annmu::http::METHOD_GET, "kontakt") == web::controllers::UNKNOWN) {
                    return true;
                }
                else {
                    return false;
                }

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

        bool Router::test6() {

            try {

                annmu::routing::Router router;

                router.setRoute(annmu::http::METHOD_GET, "^$", web::controllers::TESTS_1);
                
                if(router.getControllerID(annmu::http::METHOD_GET, nullptr) == web::controllers::UNKNOWN) {
                    return true;
                }
                else {
                    return false;
                }

            }
            catch(std::exception &e) {
                return false;
            }

        }


        /*
         *
         * Test 7
         * 
         */

        bool Router::test7() {

            try {

                annmu::routing::Router router;

                router.setRoute(annmu::http::METHOD_POST, "^$", web::controllers::TESTS_1);
                
                if(router.getControllerID(annmu::http::METHOD_GET, "") == web::controllers::UNKNOWN) {
                    return true;
                }
                else {
                    return false;
                }

            }
            catch(std::exception &e) {
                return false;
            }

        }


        /*
         *
         * Test 8
         * 
         */

        bool Router::test8() {

            try {

                annmu::routing::Router router;

                router.setRoute(annmu::http::METHOD_GET, "^test\\/[A-Z]$", web::controllers::TESTS_1);
                
                if(router.getControllerID(annmu::http::METHOD_GET_POST, "test/A") == web::controllers::TESTS_1) {
                    return true;
                }
                else {
                    return false;
                }

            }
            catch(std::exception &e) {
                return false;
            }

        }


        /*
         *
         * Test 9
         * 
         */

        bool Router::test9() {

            try {

                annmu::routing::Router router;

                router.setRoute(annmu::http::METHOD_POST, "^test\\/[A-Z]$", web::controllers::TESTS_1);
                
                if(router.getControllerID(annmu::http::METHOD_GET_POST, "test/B") == web::controllers::TESTS_1) {
                    return true;
                }
                else {
                    return false;
                }

            }
            catch(std::exception &e) {
                return false;
            }

        }


    }

}
