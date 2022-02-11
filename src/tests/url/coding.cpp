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

#include <tests/url/coding.hpp>

namespace tests {

    namespace url {

        /*
         *
         * Run
         * 
         */

        void Coding::run() {

            puts("\n\x1b[36m==== Coding class tests ====\x1b[0m");
            puts(Coding::test1() ? "\x1b[32mTest  1 passed!\x1b[0m" : "\x1b[31mTest  1 failed!\x1b[0m");
            puts(Coding::test2() ? "\x1b[32mTest  2 passed!\x1b[0m" : "\x1b[31mTest  2 failed!\x1b[0m");
            puts(Coding::test3() ? "\x1b[32mTest  3 passed!\x1b[0m" : "\x1b[31mTest  3 failed!\x1b[0m");
            puts(Coding::test4() ? "\x1b[32mTest  4 passed!\x1b[0m" : "\x1b[31mTest  4 failed!\x1b[0m");
            puts(Coding::test5() ? "\x1b[32mTest  5 passed!\x1b[0m" : "\x1b[31mTest  5 failed!\x1b[0m");
            puts(Coding::test6() ? "\x1b[32mTest  6 passed!\x1b[0m" : "\x1b[31mTest  6 failed!\x1b[0m");
            puts(Coding::test7() ? "\x1b[32mTest  7 passed!\x1b[0m" : "\x1b[31mTest  7 failed!\x1b[0m");
            puts(Coding::test8() ? "\x1b[32mTest  8 passed!\x1b[0m" : "\x1b[31mTest  8 failed!\x1b[0m");
            puts(Coding::test9() ? "\x1b[32mTest  9 passed!\x1b[0m" : "\x1b[31mTest  9 failed!\x1b[0m");
            puts(Coding::test10() ? "\x1b[32mTest 10 passed!\x1b[0m" : "\x1b[31mTest 10 failed!\x1b[0m");
            puts(Coding::test11() ? "\x1b[32mTest 11 passed!\x1b[0m" : "\x1b[31mTest 11 failed!\x1b[0m");
            puts(Coding::test12() ? "\x1b[32mTest 12 passed!\x1b[0m" : "\x1b[31mTest 12 failed!\x1b[0m");

        }


        /*
         *
         * Test 1
         * 
         */

        bool Coding::test1() {
            
            try {

                if(annmu::url::Coding::decode("").compare("") == 0) {
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
         * Test 2
         * 
         */

        bool Coding::test2() {
            
            try {

                if(annmu::url::Coding::decode(NULL).compare("") == 0) {
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
         * Test 3
         * 
         */

        bool Coding::test3() {
            
            try {

                if(annmu::url::Coding::decode("NothingToDecode9").compare("NothingToDecode9") == 0) {
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
         * Test 4
         * 
         */

        bool Coding::test4() {
            
            try {

                if(annmu::url::Coding::decode("https%3A%2F%2Fgithub.com%2Fannmproject%2FANNMu%2F").compare("https://github.com/annmproject/ANNMu/") == 0) {
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

        bool Coding::test5() {
            
            try {

                if(annmu::url::Coding::decode("https%3A%2F%2Fwarning.com%2F%3Cscript%3Eahoj%3C%2Fscript%3E").compare("https://warning.com/<script>ahoj</script>") == 0) {
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

        bool Coding::test6() {
            
            try {

                if(annmu::url::Coding::encode("").compare("") == 0) {
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

        bool Coding::test7() {
            
            try {

                if(annmu::url::Coding::encode(NULL).compare("") == 0) {
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

        bool Coding::test8() {
            
            try {

                if(annmu::url::Coding::encode("NothingToDecode9").compare("NothingToDecode9") == 0) {
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

        bool Coding::test9() {
            
            try {

                if(annmu::url::Coding::encode("https://github.com/annmproject/ANNMu/").compare("https%3A%2F%2Fgithub.com%2Fannmproject%2FANNMu%2F") == 0) {
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

        bool Coding::test10() {
            
            try {

                if(annmu::url::Coding::encode("https://warning.com/<script>ahoj</script>").compare("https%3A%2F%2Fwarning.com%2F%3Cscript%3Eahoj%3C%2Fscript%3E") == 0) {
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

        bool Coding::test11() {
            
            try {

                if(annmu::url::Coding::encode("https://warning.com/čaučau").compare("https%3A%2F%2Fwarning.com%2F%C4%8Dau%C4%8Dau") == 0) {
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

        bool Coding::test12() {
            
            try {

                if(annmu::url::Coding::decode("https%3A%2F%2Fwarning.com%2F%C4%8Dau%C4%8Dau").compare("https://warning.com/čaučau") == 0) {
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
