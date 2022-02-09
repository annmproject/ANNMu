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

#include <tests/http/response.hpp>

namespace tests {

    namespace http {

        /*
         *
         * Run
         * 
         */

        void Response::run() {

            puts("\n\x1b[36m==== HTTP Response class tests ====\x1b[0m");
            puts(Response::test1() ? "\x1b[32mTest  1 passed!\x1b[0m" : "\x1b[31mTest  1 failed!\x1b[0m");
            puts(Response::test2() ? "\x1b[32mTest  2 passed!\x1b[0m" : "\x1b[31mTest  2 failed!\x1b[0m");
            puts(Response::test3() ? "\x1b[32mTest  3 passed!\x1b[0m" : "\x1b[31mTest  3 failed!\x1b[0m");
            puts(Response::test4() ? "\x1b[32mTest  4 passed!\x1b[0m" : "\x1b[31mTest  4 failed!\x1b[0m");
            puts(Response::test5() ? "\x1b[32mTest  5 passed!\x1b[0m" : "\x1b[31mTest  5 failed!\x1b[0m");
            puts(Response::test6() ? "\x1b[32mTest  6 passed!\x1b[0m" : "\x1b[31mTest  6 failed!\x1b[0m");
            puts(Response::test7() ? "\x1b[32mTest  7 passed!\x1b[0m" : "\x1b[31mTest  7 failed!\x1b[0m");
            puts(Response::test8() ? "\x1b[32mTest  8 passed!\x1b[0m" : "\x1b[31mTest  8 failed!\x1b[0m");
            puts(Response::test9() ? "\x1b[32mTest  9 passed!\x1b[0m" : "\x1b[31mTest  9 failed!\x1b[0m");
            puts(Response::test10() ? "\x1b[32mTest 10 passed!\x1b[0m" : "\x1b[31mTest 10 failed!\x1b[0m");
            puts(Response::test11() ? "\x1b[32mTest 11 passed!\x1b[0m" : "\x1b[31mTest 11 failed!\x1b[0m");
            puts(Response::test12() ? "\x1b[32mTest 12 passed!\x1b[0m" : "\x1b[31mTest 12 failed!\x1b[0m");
            puts(Response::test13() ? "\x1b[32mTest 13 passed!\x1b[0m" : "\x1b[31mTest 13 failed!\x1b[0m");
            puts(Response::test14() ? "\x1b[32mTest 14 passed!\x1b[0m" : "\x1b[31mTest 14 failed!\x1b[0m");
            puts(Response::test15() ? "\x1b[32mTest 15 passed!\x1b[0m" : "\x1b[31mTest 15 failed!\x1b[0m");
            puts(Response::test16() ? "\x1b[32mTest 16 passed!\x1b[0m" : "\x1b[31mTest 16 failed!\x1b[0m");
            puts(Response::test17() ? "\x1b[32mTest 17 passed!\x1b[0m" : "\x1b[31mTest 17 failed!\x1b[0m");
            puts(Response::test18() ? "\x1b[32mTest 18 passed!\x1b[0m" : "\x1b[31mTest 18 failed!\x1b[0m");
            puts(Response::test19() ? "\x1b[32mTest 19 passed!\x1b[0m" : "\x1b[31mTest 19 failed!\x1b[0m");
            puts(Response::test20() ? "\x1b[32mTest 20 passed!\x1b[0m" : "\x1b[31mTest 20 failed!\x1b[0m");
            puts(Response::test21() ? "\x1b[32mTest 21 passed!\x1b[0m" : "\x1b[31mTest 21 failed!\x1b[0m");
            puts(Response::test22() ? "\x1b[32mTest 22 passed!\x1b[0m" : "\x1b[31mTest 22 failed!\x1b[0m");
            puts(Response::test23() ? "\x1b[32mTest 23 passed!\x1b[0m" : "\x1b[31mTest 23 failed!\x1b[0m");
            puts(Response::test24() ? "\x1b[32mTest 24 passed!\x1b[0m" : "\x1b[31mTest 24 failed!\x1b[0m");

        }


        /*
         *
         * Test 1
         * 
         */

        bool Response::test1() {

            try {

                annmu::http::Response response;

                if(!response.existsHeader("key")) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 2
         * 
         */

        bool Response::test2() {

            try {

                annmu::http::Response response;

                response.setHeader("key", "value");

                if(!response.existsHeader("keyv")) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 3
         * 
         */

        bool Response::test3() {

            try {

                annmu::http::Response response;

                response.setHeader("key1", "value1");

                if(!response.existsHeader("key2")) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 4
         * 
         */

        bool Response::test4() {

            try {

                annmu::http::Response response;

                response.setHeader("key", "value");

                if(response.existsHeader("key")) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 5
         * 
         */

        bool Response::test5() {

            try {

                annmu::http::Response response;

                response.setHeader("key", "value");
                response.setHeader("key1", "value1");

                if(response.existsHeader("key")) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 6
         * 
         */

        bool Response::test6() {

            try {

                annmu::http::Response response;

                response.setHeader("key", "value");
                response.setHeader("key1", "value1");

                if(response.existsHeader("key1")) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 7
         * 
         */

        bool Response::test7() {

            try {

                annmu::http::Response response;

                response.setHeader("key", "value");

                if(strcmp(response.getHeader("key1"), "") == 0) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 8
         * 
         */

        bool Response::test8() {

            try {

                annmu::http::Response response;

                response.setHeader("key", "value");
                response.setHeader("key1", "value1");

                if(strcmp(response.getHeader("key2"), "") == 0) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 9
         * 
         */

        bool Response::test9() {

            try {

                annmu::http::Response response;

                if(strcmp(response.getHeader("key"), "") == 0) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 10
         * 
         */

        bool Response::test10() {

            try {

                annmu::http::Response response;

                response.setHeader("key", "value");

                if(strcmp(response.getHeader("key"), "value") == 0) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 11
         * 
         */

        bool Response::test11() {

            try {

                annmu::http::Response response;

                response.setHeader("key", "value");
                response.setHeader("key1", "value1");

                if(strcmp(response.getHeader("key"), "value") == 0) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 12
         * 
         */

        bool Response::test12() {

            try {

                annmu::http::Response response;

                response.setHeader("key", "value");
                response.setHeader("key1", "value1");

                if(strcmp(response.getHeader("key1"), "value1") == 0) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 13
         * 
         */

        bool Response::test13() {

            try {

                annmu::http::Response response;

                if(response.getNumerOfHeaders() == 0) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 14
         * 
         */

        bool Response::test14() {

            try {

                annmu::http::Response response;

                response.setHeader("key", "value");

                if(response.getNumerOfHeaders() == 1) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 15
         * 
         */

        bool Response::test15() {

            try {

                annmu::http::Response response;

                response.setHeader("key", "value");
                response.setHeader("key1", "value1");

                if(response.getNumerOfHeaders() == 2) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 16
         * 
         */

        bool Response::test16() {

            try {

                annmu::http::Response response;

                if(response.existsCookie("key") == 0) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 17
         * 
         */

        bool Response::test17() {

            try {

                annmu::http::Response response;

                response.setCookie("key", "value", 3600, "/", "localhost", 0, 0);

                if(response.existsCookie("key") == true) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 18
         * 
         */

        bool Response::test18() {

            try {

                annmu::http::Response response;

                response.setCookie("key", "value", 3600, "/", "localhost", 0, 0);
                response.setCookie("key1", "value1", 3600, "/", "localhost", 0, 0);

                if(response.existsCookie("key1") == true) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 19
         * 
         */

        bool Response::test19() {

            try {

                annmu::http::Response response;

                if(response.existsCookie("key") == false) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 20
         * 
         */

        bool Response::test20() {

            try {

                annmu::http::Response response;

                response.setCookie("key", "value", 3600, "/", "localhost", 0, 0);

                if(response.existsCookie("key1") == false) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 21
         * 
         */

        bool Response::test21() {

            try {

                annmu::http::Response response;

                response.setCookie("key2", "value", 3600, "/", "localhost", 0, 0);
                response.setCookie("key1", "value", 3600, "/", "localhost", 0, 0);

                if(response.existsCookie("key") == false) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 22
         * 
         */

        bool Response::test22() {

            try {

                annmu::http::Response response;

                if(strcmp(response.getCookiesData(), "") == 0) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }
        

        /*
         *
         * Test 23
         * 
         */

        bool Response::test23() {

            try {

                annmu::http::Response response;

                response.setCookie("key", "value", 3600, "/", "localhost", 0, 0);

                if(strcmp(response.getCookiesData(), "key=value; Max-Age=3600; Domain=localhost; Path=%2F\r\n") == 0) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


        /*
         *
         * Test 24
         * 
         */

        bool Response::test24() {

            try {

                annmu::http::Response response;

                response.setCookie("key", "value", 3600, "/", "localhost", 0, 0);
                response.setCookie("key1", "value", 3600, "/", "localhost", 1, 1);

                if(strcmp(response.getCookiesData(), "key=value; Max-Age=3600; Domain=localhost; Path=%2F\r\nkey1=value; Max-Age=3600; Domain=localhost; Path=%2F; Secure; HttpOnly\r\n") == 0) {
                    return true;
                }

                return false;

            }
            catch(std::exception & e) {
                return false;
            }

        }


    }

}
