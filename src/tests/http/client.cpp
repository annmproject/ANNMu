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

#include <tests/http/client.hpp>

namespace tests {

    namespace http {

        /*
         *
         * Run
         * 
         */

        void Client::run() {

            puts("\n\x1b[36m==== HTTP Client class tests ====\x1b[0m");
            puts(Client::test1() ? "\x1b[32mTest  1 passed!\x1b[0m" : "\x1b[31mTest  1 failed!\x1b[0m");
            puts(Client::test2() ? "\x1b[32mTest  2 passed!\x1b[0m" : "\x1b[31mTest  2 failed!\x1b[0m");
            puts(Client::test3() ? "\x1b[32mTest  3 passed!\x1b[0m" : "\x1b[31mTest  3 failed!\x1b[0m");
            puts(Client::test4() ? "\x1b[32mTest  4 passed!\x1b[0m" : "\x1b[31mTest  4 failed!\x1b[0m");
            puts(Client::test5() ? "\x1b[32mTest  5 passed!\x1b[0m" : "\x1b[31mTest  5 failed!\x1b[0m");
            puts(Client::test6() ? "\x1b[32mTest  6 passed!\x1b[0m" : "\x1b[31mTest  6 failed!\x1b[0m");
            puts(Client::test7() ? "\x1b[32mTest  7 passed!\x1b[0m" : "\x1b[31mTest  7 failed!\x1b[0m");
            puts(Client::test8() ? "\x1b[32mTest  8 passed!\x1b[0m" : "\x1b[31mTest  8 failed!\x1b[0m");
            puts(Client::test9() ? "\x1b[32mTest  9 passed!\x1b[0m" : "\x1b[31mTest  9 failed!\x1b[0m");
            puts(Client::test10() ? "\x1b[32mTest 10 passed!\x1b[0m" : "\x1b[31mTest 10 failed!\x1b[0m");
            puts(Client::test11() ? "\x1b[32mTest 11 passed!\x1b[0m" : "\x1b[31mTest 11 failed!\x1b[0m");
            puts(Client::test12() ? "\x1b[32mTest 12 passed!\x1b[0m" : "\x1b[31mTest 12 failed!\x1b[0m");
            puts(Client::test13() ? "\x1b[32mTest 13 passed!\x1b[0m" : "\x1b[31mTest 13 failed!\x1b[0m");
            puts(Client::test14() ? "\x1b[32mTest 14 passed!\x1b[0m" : "\x1b[31mTest 14 failed!\x1b[0m");
            puts(Client::test15() ? "\x1b[32mTest 15 passed!\x1b[0m" : "\x1b[31mTest 15 failed!\x1b[0m");
            puts(Client::test16() ? "\x1b[32mTest 16 passed!\x1b[0m" : "\x1b[31mTest 16 failed!\x1b[0m");
            puts(Client::test17() ? "\x1b[32mTest 17 passed!\x1b[0m" : "\x1b[31mTest 17 failed!\x1b[0m");
            puts(Client::test18() ? "\x1b[32mTest 18 passed!\x1b[0m" : "\x1b[31mTest 18 failed!\x1b[0m");
            puts(Client::test19() ? "\x1b[32mTest 19 passed!\x1b[0m" : "\x1b[31mTest 19 failed!\x1b[0m");
            puts(Client::test20() ? "\x1b[32mTest 20 passed!\x1b[0m" : "\x1b[31mTest 20 failed!\x1b[0m");
            puts(Client::test21() ? "\x1b[32mTest 21 passed!\x1b[0m" : "\x1b[31mTest 21 failed!\x1b[0m");
            puts(Client::test22() ? "\x1b[32mTest 22 passed!\x1b[0m" : "\x1b[31mTest 22 failed!\x1b[0m");
            puts(Client::test23() ? "\x1b[32mTest 23 passed!\x1b[0m" : "\x1b[31mTest 23 failed!\x1b[0m");
            puts(Client::test24() ? "\x1b[32mTest 24 passed!\x1b[0m" : "\x1b[31mTest 24 failed!\x1b[0m");
            puts(Client::test25() ? "\x1b[32mTest 25 passed!\x1b[0m" : "\x1b[31mTest 25 failed!\x1b[0m");
            puts(Client::test26() ? "\x1b[32mTest 26 passed!\x1b[0m" : "\x1b[31mTest 26 failed!\x1b[0m");
            puts(Client::test27() ? "\x1b[32mTest 27 passed!\x1b[0m" : "\x1b[31mTest 27 failed!\x1b[0m");
            puts(Client::test28() ? "\x1b[32mTest 28 passed!\x1b[0m" : "\x1b[31mTest 28 failed!\x1b[0m");
            puts(Client::test29() ? "\x1b[32mTest 29 passed!\x1b[0m" : "\x1b[31mTest 29 failed!\x1b[0m");
            puts(Client::test30() ? "\x1b[32mTest 30 passed!\x1b[0m" : "\x1b[31mTest 30 failed!\x1b[0m");
            puts(Client::test31() ? "\x1b[32mTest 31 passed!\x1b[0m" : "\x1b[31mTest 31 failed!\x1b[0m");
            puts(Client::test32() ? "\x1b[32mTest 32 passed!\x1b[0m" : "\x1b[31mTest 32 failed!\x1b[0m");
            puts(Client::test33() ? "\x1b[32mTest 33 passed!\x1b[0m" : "\x1b[31mTest 33 failed!\x1b[0m");
            puts(Client::test34() ? "\x1b[32mTest 34 passed!\x1b[0m" : "\x1b[31mTest 34 failed!\x1b[0m");
            puts(Client::test35() ? "\x1b[32mTest 35 passed!\x1b[0m" : "\x1b[31mTest 35 failed!\x1b[0m");
            puts(Client::test36() ? "\x1b[32mTest 36 passed!\x1b[0m" : "\x1b[31mTest 36 failed!\x1b[0m");
            puts(Client::test37() ? "\x1b[32mTest 37 passed!\x1b[0m" : "\x1b[31mTest 37 failed!\x1b[0m");
            puts(Client::test38() ? "\x1b[32mTest 38 passed!\x1b[0m" : "\x1b[31mTest 38 failed!\x1b[0m");

        }


        /*
         *
         * Test 1
         * 
         */

        bool Client::test1() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getIp(), "") == 0) {
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

        bool Client::test2() {

            try {

                char ip[] = "192.168.0.1";
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getIp(), ip) == 0) {
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

        bool Client::test3() {

            try {

                char ip[] = "2001:db8:3333:4444:5555:6666:7777:8888";
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getIp(), ip) == 0) {
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

        bool Client::test4() {

            try {

                char ip[] = "";
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getIp(), ip) == 0) {
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

        bool Client::test5() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getAgent(), "") == 0) {
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

        bool Client::test6() {

            try {

                char * ip = NULL;
                char agent[] = "Mozilla/5.0 (Macintosh; Intel Mac OS X 10.15; rv:96.0) Gecko/20100101 Firefox/96.0";
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getAgent(), agent) == 0) {
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

        bool Client::test7() {

            try {

                char * ip = NULL;
                char agent[] = "curl/7.64.1";
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getAgent(), agent) == 0) {
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

        bool Client::test8() {

            try {

                char * ip = NULL;
                char agent[] = "";
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getAgent(), agent) == 0) {
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

        bool Client::test9() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getAcceptableFormates(), "") == 0) {
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

        bool Client::test10() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char acceptableFormates[] = "text/html";
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getAcceptableFormates(), acceptableFormates) == 0) {
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

        bool Client::test11() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char acceptableFormates[] = "application/xml;q=0.9";
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getAcceptableFormates(), acceptableFormates) == 0) {
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

        bool Client::test12() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char acceptableFormates[] = "text/html,application/xhtml+xml,application/xml,image/avif";
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getAcceptableFormates(), acceptableFormates) == 0) {
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
         * Test 13
         * 
         */

        bool Client::test13() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char acceptableFormates[] = "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,*/*;q=0.8";
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getAcceptableFormates(), acceptableFormates) == 0) {
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
         * Test 14
         * 
         */

        bool Client::test14() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char acceptableFormates[] = "";
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getAcceptableFormates(), acceptableFormates) == 0) {
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
         * Test 15
         * 
         */

        bool Client::test15() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getAcceptableLanguages(), "") == 0) {
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
         * Test 16
         * 
         */

        bool Client::test16() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char acceptableLanguages[] = "cs";
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getAcceptableLanguages(), acceptableLanguages) == 0) {
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
         * Test 176
         * 
         */

        bool Client::test17() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char acceptableLanguages[] = "sk;q=0.8";
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getAcceptableLanguages(), acceptableLanguages) == 0) {
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
         * Test 18
         * 
         */

        bool Client::test18() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char acceptableLanguages[] = "cs,sk,en-US,en";
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getAcceptableLanguages(), acceptableLanguages) == 0) {
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
         * Test 19
         * 
         */

        bool Client::test19() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char acceptableLanguages[] = "cs,sk;q=0.8,en-US;q=0.5,en;q=0.3";
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getAcceptableLanguages(), acceptableLanguages) == 0) {
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
         * Test 20
         * 
         */

        bool Client::test20() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char acceptableLanguages[] = "";
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getAcceptableLanguages(), acceptableLanguages) == 0) {
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
         * Test 21
         * 
         */

        bool Client::test21() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getReferer(), "") == 0) {
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
         * Test 22
         * 
         */

        bool Client::test22() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char referer[] = "";
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getReferer(), referer) == 0) {
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
         * Test 23
         * 
         */

        bool Client::test23() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char referer[] = "http://localhost/_cppannmu/";
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getReferer(), referer) == 0) {
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
         * Test 24
         * 
         */

        bool Client::test24() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char referer[] = "https://developer.mozilla.org/en-US/docs/Web/JavaScript?q=123";
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(strcmp(client.getReferer(), referer) == 0) {
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
         * Test 25
         * 
         */

        bool Client::test25() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(client.getCacheTime() == 0) {
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
         * Test 26
         * 
         */

        bool Client::test26() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char cacheTime[] = "";
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(client.getCacheTime() == 0) {
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
         * Test 27
         * 
         */

        bool Client::test27() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char cacheTime[] = "Wed, 02 Feb 2022 14:33:54 GMT";
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(client.getCacheTime() == 1643812434) {
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
         * Test 28
         * 
         */

        bool Client::test28() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char cacheTime[] = "02 Feb 2022 14:33:54 GMT";
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
                
                if(client.getCacheTime() == 0) {
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
         * Test 29
         * 
         */

        bool Client::test29() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char cookies[] = "username=John Doe; username333=John Doe";
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
 
                if(client.existCookie("username")) {
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
         * Test 30
         * 
         */

        bool Client::test30() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char cookies[] = "username=John Doe; username333=John Doe";
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
 
                if(client.existCookie("username333")) {
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
         * Test 31
         * 
         */

        bool Client::test31() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
 
                if(client.existCookie("username") == false) {
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
         * Test 32
         * 
         */

        bool Client::test32() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char cookies[] = "";
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
 
                if(client.existCookie("username") == false) {
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
         * Test 33
         * 
         */

        bool Client::test33() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char cookies[] = "username=John Doe; username333=John Doe";
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
 
                if(client.existCookie("username3333") == false) {
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
         * Test 34
         * 
         */

        bool Client::test34() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char * cookies = NULL;
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
 
                if(strcmp(client.getCookie("username"), "") == 0) {
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
         * Test 35
         * 
         */

        bool Client::test35() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char cookies[] = "";
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
 
                if(strcmp(client.getCookie("username"), "") == 0) {
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
         * Test 36
         * 
         */

        bool Client::test36() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char cookies[] = "username=John Doe; username333=John Doe";
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
 
                if(strcmp(client.getCookie("username3333"), "") == 0) {
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
         * Test 37
         * 
         */

        bool Client::test37() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char cookies[] = "username=John Doe; username333=John Doe";
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
 
                if(strcmp(client.getCookie("username"), "John Doe") == 0) {
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
         * Test 38
         * 
         */

        bool Client::test38() {

            try {

                char * ip = NULL;
                char * agent = NULL;
                char * referer = NULL;
                char * acceptableFormates = NULL;
                char * acceptableLanguages = NULL;
                char * cacheTime = NULL;
                char cookies[] = "username=John Doe; username333=John Doe1";
                
                annmu::http::Client client = annmu::http::Client(ip, agent, referer, acceptableFormates, acceptableLanguages, cacheTime, cookies);
 
                if(strcmp(client.getCookie("username333"), "John Doe1") == 0) {
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
