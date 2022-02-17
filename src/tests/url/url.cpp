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

#include <tests/url/url.hpp>


namespace tests {

    namespace url {

        /*
         *
         * Run
         * 
         */

        void Url::run() {

            puts("\n\x1b[36m==== Url class tests ====\x1b[0m");
            
            puts(Url::test1() ? "\x1b[32mTest  1 passed!\x1b[0m" : "\x1b[31mTest  1 failed!\x1b[0m");
            puts(Url::test2() ? "\x1b[32mTest  2 passed!\x1b[0m" : "\x1b[31mTest  2 failed!\x1b[0m");
            puts(Url::test3() ? "\x1b[32mTest  3 passed!\x1b[0m" : "\x1b[31mTest  3 failed!\x1b[0m");
            puts(Url::test4() ? "\x1b[32mTest  4 passed!\x1b[0m" : "\x1b[31mTest  4 failed!\x1b[0m");
            puts(Url::test5() ? "\x1b[32mTest  5 passed!\x1b[0m" : "\x1b[31mTest  5 failed!\x1b[0m");
            puts(Url::test6() ? "\x1b[32mTest  6 passed!\x1b[0m" : "\x1b[31mTest  6 failed!\x1b[0m");
            puts(Url::test7() ? "\x1b[32mTest  7 passed!\x1b[0m" : "\x1b[31mTest  7 failed!\x1b[0m");
            puts(Url::test8() ? "\x1b[32mTest  8 passed!\x1b[0m" : "\x1b[31mTest  8 failed!\x1b[0m");
            puts(Url::test9() ? "\x1b[32mTest  9 passed!\x1b[0m" : "\x1b[31mTest  9 failed!\x1b[0m");
            puts(Url::test10() ? "\x1b[32mTest 10 passed!\x1b[0m" : "\x1b[31mTest 10 failed!\x1b[0m");
            puts(Url::test11() ? "\x1b[32mTest 11 passed!\x1b[0m" : "\x1b[31mTest 11 failed!\x1b[0m");
            puts(Url::test12() ? "\x1b[32mTest 12 passed!\x1b[0m" : "\x1b[31mTest 12 failed!\x1b[0m");
            puts(Url::test13() ? "\x1b[32mTest 13 passed!\x1b[0m" : "\x1b[31mTest 13 failed!\x1b[0m");
            puts(Url::test14() ? "\x1b[32mTest 14 passed!\x1b[0m" : "\x1b[31mTest 14 failed!\x1b[0m");
            puts(Url::test15() ? "\x1b[32mTest 15 passed!\x1b[0m" : "\x1b[31mTest 15 failed!\x1b[0m");
            puts(Url::test16() ? "\x1b[32mTest 16 passed!\x1b[0m" : "\x1b[31mTest 16 failed!\x1b[0m");
            puts(Url::test17() ? "\x1b[32mTest 17 passed!\x1b[0m" : "\x1b[31mTest 17 failed!\x1b[0m");
            puts(Url::test18() ? "\x1b[32mTest 18 passed!\x1b[0m" : "\x1b[31mTest 18 failed!\x1b[0m");
            puts(Url::test19() ? "\x1b[32mTest 19 passed!\x1b[0m" : "\x1b[31mTest 19 failed!\x1b[0m");
            puts(Url::test20() ? "\x1b[32mTest 20 passed!\x1b[0m" : "\x1b[31mTest 20 failed!\x1b[0m");
            puts(Url::test21() ? "\x1b[32mTest 21 passed!\x1b[0m" : "\x1b[31mTest 21 failed!\x1b[0m");
            puts(Url::test22() ? "\x1b[32mTest 22 passed!\x1b[0m" : "\x1b[31mTest 22 failed!\x1b[0m");
            puts(Url::test23() ? "\x1b[32mTest 23 passed!\x1b[0m" : "\x1b[31mTest 23 failed!\x1b[0m");

        }


        /*
         *
         * Test 1
         * 
         */

        bool Url::test1() {
            
            try {

                char * protocol = NULL;
                char domain[] = "example.com";
                char * scriptPath = NULL;
                char * query = NULL;

                annmu::url::Url url(protocol, domain, scriptPath, query);

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

        bool Url::test2() {
            
            try {
                
                const char * protocol = NULL;
                const char domain[] = "example.com";
                const char * scriptPath = NULL;
                const char query[] = "en/my/query";

                annmu::url::Url url(protocol, domain, scriptPath, query);

                return true;

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

        bool Url::test3() {
            
            try {
                
                const char * protocol = NULL;
                const char domain[] = "example.com";
                const char scriptPath[] = "/annmu/www/main.cgi";
                const char query[] = "en/my/query";

                annmu::url::Url url(protocol, domain, scriptPath, query);

                return true;

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

        bool Url::test4() {
            
            try {
                
                const char * protocol = NULL;
                const char * domain = NULL;
                const char * scriptPath = NULL;
                const char * query = NULL;

                annmu::url::Url url(protocol, domain, scriptPath, query);

                if(strcmp(url.getDomain(), "") == 0) {
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

        bool Url::test5() {
            
            try {
                
                const char * protocol = NULL;
                const char domain[] = "";
                const char * scriptPath = NULL;
                const char * query = NULL;

                annmu::url::Url url(protocol, domain, scriptPath, query);

                if(strcmp(url.getDomain(), "") == 0) {
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

        bool Url::test6() {
            
            try {
                
                const char * protocol = NULL;
                const char domain[] = "example.com";
                const char * scriptPath = NULL;
                const char * query = NULL;

                annmu::url::Url url(protocol, domain, scriptPath, query);

                if(strcmp(url.getDomain(), "example.com") == 0) {
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

        bool Url::test7() {
            
            try {
                
                const char * protocol = NULL;
                const char domain[] = "example.com";
                const char * scriptPath = NULL;
                const char * query = NULL;

                annmu::url::Url url(protocol, domain, scriptPath, query);

                if(strcmp(url.getBase(), "http://example.com") == 0) {
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

        bool Url::test8() {
            
            try {
                
                const char protocol[] = "off";
                const char domain[] = "example.com";
                const char * scriptPath = NULL;
                const char * query = NULL;

                annmu::url::Url url(protocol, domain, scriptPath, query);

                if(strcmp(url.getBase(), "http://example.com") == 0) {
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

        bool Url::test9() {
            
            try {
                
                const char protocol[] = "on";
                const char domain[] = "example.com";
                const char * scriptPath = NULL;
                const char * query = NULL;

                annmu::url::Url url(protocol, domain, scriptPath, query);

                if(strcmp(url.getBase(), "https://example.com") == 0) {
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

        bool Url::test10() {
            
            try {
                
                const char protocol[] = "off";
                const char domain[] = "example.com";
                const char scriptPath[] = "";
                const char * query = NULL;

                annmu::url::Url url(protocol, domain, scriptPath, query);

                if(strcmp(url.getBase(), "http://example.com") == 0) {
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

        bool Url::test11() {
            
            try {
                
                const char protocol[] = "off";
                const char domain[] = "example.com";
                const char scriptPath[] = "/annmu/www/main.cgi";
                const char *query = NULL;

                annmu::url::Url url(protocol, domain, scriptPath, query);

                if(strcmp(url.getBase(), "http://example.com/annmu/www") == 0) {
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

        bool Url::test12() {
            
            try {
                
                const char * protocol = NULL;
                const char * domain = NULL;
                const char * scriptPath = NULL;
                const char * query = NULL;

                annmu::url::Url url(protocol, domain, scriptPath, query);

                if(strcmp(url.getQuery(), "") == 0) {
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

        bool Url::test13() {
            
            try {
                
                const char * protocol = NULL;
                const char * domain = NULL;
                const char * scriptPath = NULL;
                const char query[] = "";

                annmu::url::Url url(protocol, domain, scriptPath, query);
                
                if(strcmp(url.getQuery(), "") == 0) {
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

        bool Url::test14() {
            
            try {
                
                const char * protocol = NULL;
                const char * domain = NULL;
                const char * scriptPath = NULL;
                const char query[] = "hello/how/are/you";

                annmu::url::Url url(protocol, domain, scriptPath, query);
                
                if(strcmp(url.getQuery(), "hello/how/are/you") == 0) {
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

        bool Url::test15() {
            
            try {
                
                const char * protocol = NULL;
                const char * domain = NULL;
                const char * scriptPath = NULL;
                const char * query = NULL;

                annmu::url::Url url(protocol, domain, scriptPath, query);
                
                if(url.getNumberOfParameters() == 1) {
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

        bool Url::test16() {
            
            try {
                
                const char * protocol = NULL;
                const char * domain = NULL;
                const char * scriptPath = NULL;
                const char query[] = "";

                annmu::url::Url url(protocol, domain, scriptPath, query);
                
                if(url.getNumberOfParameters() == 1) {
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

        bool Url::test17() {
            
            try {
                
                const char * protocol = NULL;
                const char * domain = NULL;
                const char * scriptPath = NULL;
                const char query[] = "hello";

                annmu::url::Url url(protocol, domain, scriptPath, query);
                
                if(url.getNumberOfParameters() == 1) {
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

        bool Url::test18() {
            
            try {
                
                const char * protocol = NULL;
                const char * domain = NULL;
                const char * scriptPath = NULL;
                const char query[] = "hello/how/are/you";

                annmu::url::Url url(protocol, domain, scriptPath, query);
                
                if(url.getNumberOfParameters() == 4) {
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

        bool Url::test19() {
            
            try {
                
                const char * protocol = NULL;
                const char * domain = NULL;
                const char * scriptPath = NULL;
                const char query[] = "hello/how/are/you";

                annmu::url::Url url(protocol, domain, scriptPath, query);
                
                if(strcmp(url.getParameterAt(0), "hello") == 0) {
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

        bool Url::test20() {
            
            try {
                
                const char * protocol = NULL;
                const char * domain = NULL;
                const char * scriptPath = NULL;
                const char query[] = "hello/how/are/you";

                annmu::url::Url url(protocol, domain, scriptPath, query);
                
                if(strcmp(url.getParameterAt(3), "you") == 0) {
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

        bool Url::test21() {
            
            try {
                
                const char * protocol = NULL;
                const char * domain = NULL;
                const char * scriptPath = NULL;
                const char query[] = "hello/how/are/you";

                annmu::url::Url url(protocol, domain, scriptPath, query);
                
                if(strcmp(url.getParameterAt(2), "are") == 0) {
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

        bool Url::test22() {
            
            try {
                
                const char * protocol = NULL;
                const char * domain = NULL;
                const char * scriptPath = NULL;
                const char query[] = "hello/how/are/you";

                annmu::url::Url url(protocol, domain, scriptPath, query);
                
                if(strcmp(url.getParameterAt(4), "") == 0) {
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

        bool Url::test23() {
            
            try {
                
                const char * protocol = NULL;
                const char * domain = NULL;
                const char * scriptPath = NULL;
                const char * query = NULL;

                annmu::url::Url url(protocol, domain, scriptPath, query);
                
                if(strcmp(url.getParameterAt(0), "") == 0) {
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
