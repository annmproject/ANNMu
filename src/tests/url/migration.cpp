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

#include <tests/url/migration.hpp>

namespace tests {

    namespace url {

        /*
         *
         * Run
         * 
         */

        void Migration::run() {

            puts("\n\x1b[36m==== Migration class tests ====\x1b[0m");
            puts(Migration::test1() ? "\x1b[32mTest  1 passed!\x1b[0m" : "\x1b[31mTest  1 failed!\x1b[0m");
            puts(Migration::test2() ? "\x1b[32mTest  2 passed!\x1b[0m" : "\x1b[31mTest  2 failed!\x1b[0m");
            puts(Migration::test3() ? "\x1b[32mTest  3 passed!\x1b[0m" : "\x1b[31mTest  3 failed!\x1b[0m");
            puts(Migration::test4() ? "\x1b[32mTest  4 passed!\x1b[0m" : "\x1b[31mTest  4 failed!\x1b[0m");
            puts(Migration::test5() ? "\x1b[32mTest  5 passed!\x1b[0m" : "\x1b[31mTest  5 failed!\x1b[0m");
            puts(Migration::test6() ? "\x1b[32mTest  6 passed!\x1b[0m" : "\x1b[31mTest  6 failed!\x1b[0m");
            puts(Migration::test7() ? "\x1b[32mTest  7 passed!\x1b[0m" : "\x1b[31mTest  7 failed!\x1b[0m");
            puts(Migration::test8() ? "\x1b[32mTest  8 passed!\x1b[0m" : "\x1b[31mTest  8 failed!\x1b[0m");
            puts(Migration::test9() ? "\x1b[32mTest  9 passed!\x1b[0m" : "\x1b[31mTest  9 failed!\x1b[0m");
            puts(Migration::test10() ? "\x1b[32mTest 10 passed!\x1b[0m" : "\x1b[31mTest 10 failed!\x1b[0m");

        }


        /*
         *
         * Test 1
         * 
         */

        bool Migration::test1() {
            
            try {

               std::string url = annmu::url::Migration::newAddress("./urlMigration/test1.conf", "");

                return true;

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

        bool Migration::test2() {
            
            try {

               std::string url = annmu::url::Migration::newAddress("./urlMigration/test2a.conf", "");

                return false;
                
            }
            catch(std::exception & e) {
                return true;
            }

        }


        /*
         *
         * Test 3
         * 
         */

        bool Migration::test3() {
            
            try {

               std::string url = annmu::url::Migration::newAddress("./urlMigration/test3.conf", "old/path");

                if(url.compare("new/path") == 0) {
                    return true;
                }
                else {
                    return false;
                }

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

        bool Migration::test4() {
            
            try {

               std::string url = annmu::url::Migration::newAddress("./urlMigration/test4.conf", "old/path");

                if(url.compare("") == 0) {
                    return true;
                }
                else {
                    return false;
                }

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

        bool Migration::test5() {
            
            try {

               std::string url = annmu::url::Migration::newAddress("./urlMigration/test5.conf", "old/path");

                if(url.compare("new/path") == 0) {
                    return true;
                }
                else {
                    return false;
                }

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

        bool Migration::test6() {
            
            try {

               std::string url = annmu::url::Migration::newAddress("./urlMigration/test6.conf", "old/path/1");

                if(url.compare("new/path/1") == 0) {
                    return true;
                }
                else {
                    return false;
                }

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

        bool Migration::test7() {
            
            try {

               std::string url = annmu::url::Migration::newAddress("./urlMigration/test7.conf", "old/path");

                if(url.compare("new/path") == 0) {
                    return true;
                }
                else {
                    return false;
                }

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

        bool Migration::test8() {
            
            try {

               std::string url = annmu::url::Migration::newAddress("./urlMigration/test8.conf", "old/path/1");

                if(url.compare("new/path/1") == 0) {
                    return true;
                }
                else {
                    return false;
                }

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

        bool Migration::test9() {
            
            try {

               std::string url = annmu::url::Migration::newAddress("./urlMigration/test9.conf", "old/path");

                if(url.compare("") == 0) {
                    return true;
                }
                else {
                    return false;
                }

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

        bool Migration::test10() {
            
            try {

               std::string url = annmu::url::Migration::newAddress("./urlMigration/test10.conf", "old/path");

                if(url.compare("") == 0) {
                    return true;
                }
                else {
                    return false;
                }

            }
            catch(std::exception & e) {
                return false;
            }

        }


    }

}
