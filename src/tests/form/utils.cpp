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

#include <tests/form/utils.hpp>


namespace tests {

    namespace form {

        /*
         *
         * Run
         * 
         */

        void Utils::run() {

            puts("\n\x1b[36m==== Form utils class tests ====\x1b[0m");
            puts(Utils::test1() ? "\x1b[32mTest  1 passed!\x1b[0m" : "\x1b[31mTest  1 failed!\x1b[0m");
            puts(Utils::test2() ? "\x1b[32mTest  2 passed!\x1b[0m" : "\x1b[31mTest  2 failed!\x1b[0m");
            puts(Utils::test3() ? "\x1b[32mTest  3 passed!\x1b[0m" : "\x1b[31mTest  3 failed!\x1b[0m");
            puts(Utils::test4() ? "\x1b[32mTest  4 passed!\x1b[0m" : "\x1b[31mTest  4 failed!\x1b[0m");
            puts(Utils::test5() ? "\x1b[32mTest  5 passed!\x1b[0m" : "\x1b[31mTest  5 failed!\x1b[0m");
            puts(Utils::test6() ? "\x1b[32mTest  6 passed!\x1b[0m" : "\x1b[31mTest  6 failed!\x1b[0m");
            puts(Utils::test7() ? "\x1b[32mTest  7 passed!\x1b[0m" : "\x1b[31mTest  7 failed!\x1b[0m");
            puts(Utils::test8() ? "\x1b[32mTest  8 passed!\x1b[0m" : "\x1b[31mTest  8 failed!\x1b[0m");
            puts(Utils::test9() ? "\x1b[32mTest  9 passed!\x1b[0m" : "\x1b[31mTest  9 failed!\x1b[0m");
            puts(Utils::test10() ? "\x1b[32mTest 10 passed!\x1b[0m" : "\x1b[31mTest 10 failed!\x1b[0m");
            puts(Utils::test11() ? "\x1b[32mTest 11 passed!\x1b[0m" : "\x1b[31mTest 11 failed!\x1b[0m");
            puts(Utils::test12() ? "\x1b[32mTest 12 passed!\x1b[0m" : "\x1b[31mTest 12 failed!\x1b[0m");

        }


        /*
         *
         * Test 1
         * 
         */

        bool Utils::test1() {

            try {

                if(annmu::form::Utils::isEmail("test@example.com")) {
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

        bool Utils::test2() {

            try {

                if(annmu::form::Utils::isEmail("test12@example.com")) {
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

        bool Utils::test3() {

            try {

                if(annmu::form::Utils::isEmail("test.test12@example.com")) {
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

        bool Utils::test4() {

            try {

                if(annmu::form::Utils::isEmail("testtest12@example.com")) {
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

        bool Utils::test5() {

            try {

                if(annmu::form::Utils::isEmail("other.email-with-hyphen@example.com")) {
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

        bool Utils::test6() {

            try {

                if(annmu::form::Utils::isEmail("x@example.com")) {
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
         * Test 7
         * 
         */

        bool Utils::test7() {

            try {

                if(annmu::form::Utils::isEmail("example-indeed@strange-example.com")) {
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
         * Test 8
         * 
         */

        bool Utils::test8() {

            try {

                if(!annmu::form::Utils::isEmail("Abc.example.com")) {
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
         * Test 9
         * 
         */

        bool Utils::test9() {

            try {

                if(!annmu::form::Utils::isEmail("A@b@c@example.com")) {
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
         * Test 10
         * 
         */

        bool Utils::test10() {

            try {

                if(!annmu::form::Utils::isEmail("just\"not\"right@example.com")) {
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
         * Test 11
         * 
         */

        bool Utils::test11() {

            try {

                if(!annmu::form::Utils::isEmail("this is\"not\\allowed@example.com")) {
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
         * Test 12
         * 
         */

        bool Utils::test12() {

            try {

                if(!annmu::form::Utils::isEmail("i_like_underscore@but_its_not_allowed_in_this_part.example.com")) {
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
