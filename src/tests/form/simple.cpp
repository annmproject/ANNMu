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

#include <tests/form/simple.hpp>

namespace tests {

    namespace form {

        /*
         *
         * Run
         * 
         */

        void Simple::run() {

            puts("\n\x1b[36m==== Simple form class tests ====\x1b[0m");
            puts(Simple::test1() ? "\x1b[32mTest  1 passed!\x1b[0m" : "\x1b[31mTest  1 failed!\x1b[0m");
            puts(Simple::test2() ? "\x1b[32mTest  2 passed!\x1b[0m" : "\x1b[31mTest  2 failed!\x1b[0m");
            puts(Simple::test3() ? "\x1b[32mTest  3 passed!\x1b[0m" : "\x1b[31mTest  3 failed!\x1b[0m");
            puts(Simple::test4() ? "\x1b[32mTest  4 passed!\x1b[0m" : "\x1b[31mTest  4 failed!\x1b[0m");
            puts(Simple::test5() ? "\x1b[32mTest  5 passed!\x1b[0m" : "\x1b[31mTest  5 failed!\x1b[0m");
            puts(Simple::test6() ? "\x1b[32mTest  6 passed!\x1b[0m" : "\x1b[31mTest  6 failed!\x1b[0m");
            puts(Simple::test7() ? "\x1b[32mTest  7 passed!\x1b[0m" : "\x1b[31mTest  7 failed!\x1b[0m");
            puts(Simple::test8() ? "\x1b[32mTest  8 passed!\x1b[0m" : "\x1b[31mTest  8 failed!\x1b[0m");
            puts(Simple::test9() ? "\x1b[32mTest  9 passed!\x1b[0m" : "\x1b[31mTest  9 failed!\x1b[0m");
            puts(Simple::test10() ? "\x1b[32mTest 10 passed!\x1b[0m" : "\x1b[31mTest 10 failed!\x1b[0m");
            puts(Simple::test11() ? "\x1b[32mTest 11 passed!\x1b[0m" : "\x1b[31mTest 11 failed!\x1b[0m");
            puts(Simple::test12() ? "\x1b[32mTest 12 passed!\x1b[0m" : "\x1b[31mTest 12 failed!\x1b[0m");
            puts(Simple::test13() ? "\x1b[32mTest 13 passed!\x1b[0m" : "\x1b[31mTest 13 failed!\x1b[0m");

        }


        /*
         *
         * Test 1
         * 
         */

        bool Simple::test1() {

            try {

                std::cin.clear();

                annmu::http::Request request("POST", "off", NULL, "application/x-www-form-urlencoded", "0");
                annmu::form::Simple form(&request);
                
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

        bool Simple::test2() {

            try {
                
                istringstream input("key=value");

                std::cin.clear();
                cin.rdbuf(input.rdbuf());

                annmu::http::Request request("POST", "off", NULL, "application/x-www-form-urlencoded", "10");
                annmu::form::Simple form(&request);

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

        bool Simple::test3() {

            try {
                
                istringstream input("key=value&key1=value1");

                std::cin.clear();
                cin.rdbuf(input.rdbuf());

                annmu::http::Request request("POST", "off", NULL, "application/x-www-form-urlencoded", "22");
                annmu::form::Simple form(&request);

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

        bool Simple::test4() {

            try {
                
                istringstream input("key=value");

                std::cin.clear();
                cin.rdbuf(input.rdbuf());

                annmu::http::Request request("POST", "off", NULL, "application/x-www-form-urlencoded", "10");
                annmu::form::Simple form(&request);

                if(form.existKey("key")) {
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

        bool Simple::test5() {

            try {
                
                istringstream input("key=value&key1=value1");

                std::cin.clear();
                cin.rdbuf(input.rdbuf());

                annmu::http::Request request("POST", "off", NULL, "application/x-www-form-urlencoded", "22");
                annmu::form::Simple form(&request);

                if(form.existKey("key")) {
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

        bool Simple::test6() {

            try {
                
                istringstream input("key=value&key1=value1");

                std::cin.clear();
                cin.rdbuf(input.rdbuf());

                annmu::http::Request request("POST", "off", NULL, "application/x-www-form-urlencoded", "22");
                annmu::form::Simple form(&request);

                if(form.existKey("key1")) {
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

        bool Simple::test7() {

            try {
                
                istringstream input("key1=value1");

                std::cin.clear();
                cin.rdbuf(input.rdbuf());

                annmu::http::Request request("POST", "off", NULL, "application/x-www-form-urlencoded", "13");
                annmu::form::Simple form(&request);

                if(!form.existKey("key")) {
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

        bool Simple::test8() {

            try {
                
                istringstream input("key2=value2&key1=value1");

                std::cin.clear();
                cin.rdbuf(input.rdbuf());

                annmu::http::Request request("POST", "off", NULL, "application/x-www-form-urlencoded", "25");
                annmu::form::Simple form(&request);

                if(!form.existKey("key")) {
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

        bool Simple::test9() {

            try {
                
                istringstream input("key=value");

                std::cin.clear();
                cin.rdbuf(input.rdbuf());

                annmu::http::Request request("POST", "off", NULL, "application/x-www-form-urlencoded", "11");
                annmu::form::Simple form(&request);

                if(strcmp(form.getValue("key"), "value") == 0) {
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
         * Test 10
         * 
         */

        bool Simple::test10() {

            try {
                
                istringstream input("key=value&key1=value1");

                std::cin.clear();
                cin.rdbuf(input.rdbuf());

                annmu::http::Request request("POST", "off", NULL, "application/x-www-form-urlencoded", "22");
                annmu::form::Simple form(&request);

                if(strcmp(form.getValue("key"), "value") == 0) {
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
         * Test 11
         * 
         */

        bool Simple::test11() {

            try {
                
                istringstream input("key=value&key1=value1");

                std::cin.clear();
                cin.rdbuf(input.rdbuf());

                annmu::http::Request request("POST", "off", NULL, "application/x-www-form-urlencoded", "23");
                annmu::form::Simple form(&request);

                if(strcmp(form.getValue("key1"), "value1") == 0) {
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
         * Test 12
         * 
         */

        bool Simple::test12() {

            try {
                
                istringstream input("key=value");

                std::cin.clear();
                cin.rdbuf(input.rdbuf());

                annmu::http::Request request("POST", "off", NULL, "application/x-www-form-urlencoded", "11");
                annmu::form::Simple form(&request);

                if(strcmp(form.getValue("key1"), "") == 0) {
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
         * Test 13
         * 
         */

        bool Simple::test13() {

            try {
                
                istringstream input("key=value&key1=value1");

                std::cin.clear();
                cin.rdbuf(input.rdbuf());

                annmu::http::Request request("POST", "off", NULL, "application/x-www-form-urlencoded", "23");
                annmu::form::Simple form(&request);

                if(strcmp(form.getValue("key2"), "") == 0) {
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
