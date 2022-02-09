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

#include <tests/http/request.hpp>

namespace tests {

    namespace http {

        /*
         *
         * Run
         * 
         */

        void Request::run() {

            puts("\n\x1b[36m==== HTTP Request class tests ====\x1b[0m");
            puts(Request::test1() ? "\x1b[32mTest  1 passed!\x1b[0m" : "\x1b[31mTest  1 failed!\x1b[0m");
            puts(Request::test2() ? "\x1b[32mTest  2 passed!\x1b[0m" : "\x1b[31mTest  2 failed!\x1b[0m");
            puts(Request::test3() ? "\x1b[32mTest  3 passed!\x1b[0m" : "\x1b[31mTest  3 failed!\x1b[0m");
            puts(Request::test4() ? "\x1b[32mTest  4 passed!\x1b[0m" : "\x1b[31mTest  4 failed!\x1b[0m");
            puts(Request::test5() ? "\x1b[32mTest  5 passed!\x1b[0m" : "\x1b[31mTest  5 failed!\x1b[0m");
            puts(Request::test6() ? "\x1b[32mTest  6 passed!\x1b[0m" : "\x1b[31mTest  6 failed!\x1b[0m");
            puts(Request::test7() ? "\x1b[32mTest  7 passed!\x1b[0m" : "\x1b[31mTest  7 failed!\x1b[0m");
            puts(Request::test8() ? "\x1b[32mTest  8 passed!\x1b[0m" : "\x1b[31mTest  8 failed!\x1b[0m");
            puts(Request::test9() ? "\x1b[32mTest  9 passed!\x1b[0m" : "\x1b[31mTest  9 failed!\x1b[0m");
            puts(Request::test10() ? "\x1b[32mTest 10 passed!\x1b[0m" : "\x1b[31mTest 10 failed!\x1b[0m");
            puts(Request::test11() ? "\x1b[32mTest 11 passed!\x1b[0m" : "\x1b[31mTest 11 failed!\x1b[0m");
            puts(Request::test12() ? "\x1b[32mTest 12 passed!\x1b[0m" : "\x1b[31mTest 12 failed!\x1b[0m");
            puts(Request::test13() ? "\x1b[32mTest 13 passed!\x1b[0m" : "\x1b[31mTest 13 failed!\x1b[0m");
            puts(Request::test14() ? "\x1b[32mTest 14 passed!\x1b[0m" : "\x1b[31mTest 14 failed!\x1b[0m");
            puts(Request::test15() ? "\x1b[32mTest 15 passed!\x1b[0m" : "\x1b[31mTest 15 failed!\x1b[0m");
            puts(Request::test16() ? "\x1b[32mTest 16 passed!\x1b[0m" : "\x1b[31mTest 16 failed!\x1b[0m");
            puts(Request::test17() ? "\x1b[32mTest 17 passed!\x1b[0m" : "\x1b[31mTest 17 failed!\x1b[0m");
            puts(Request::test18() ? "\x1b[32mTest 18 passed!\x1b[0m" : "\x1b[31mTest 18 failed!\x1b[0m");
            puts(Request::test19() ? "\x1b[32mTest 19 passed!\x1b[0m" : "\x1b[31mTest 19 failed!\x1b[0m");
            puts(Request::test20() ? "\x1b[32mTest 20 passed!\x1b[0m" : "\x1b[31mTest 20 failed!\x1b[0m");
            puts(Request::test21() ? "\x1b[32mTest 21 passed!\x1b[0m" : "\x1b[31mTest 21 failed!\x1b[0m");
            puts(Request::test22() ? "\x1b[32mTest 22 passed!\x1b[0m" : "\x1b[31mTest 22 failed!\x1b[0m");
            puts(Request::test23() ? "\x1b[32mTest 23 passed!\x1b[0m" : "\x1b[31mTest 23 failed!\x1b[0m");

        }


        /*
         *
         * Test 1
         * 
         */

        bool Request::test1() {

            try {

                char *method = NULL;
                char *protocol = NULL;
                char *from = NULL;
                char *contentType = NULL;
                char *contentLength = NULL;

                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                return (request.getMethod() == annmu::http::METHOD_UNKNOWN);

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

        bool Request::test2() {

            try {

                char method[] = "GET";
                char *protocol = NULL;
                char *from = NULL;
                char *contentType = NULL;
                char *contentLength = NULL;

                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                return (request.getMethod() == annmu::http::METHOD_GET);

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

        bool Request::test3() {

            try {

                char method[] = "POST";
                char *protocol = NULL;
                char *from = NULL;
                char *contentType = NULL;
                char *contentLength = NULL;

                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                return (request.getMethod() == annmu::http::METHOD_POST);

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

        bool Request::test4() {

            try {

                char method[] = "ABRAKA1";
                char *protocol = NULL;
                char *from = NULL;
                char *contentType = NULL;
                char *contentLength = NULL;

                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                return (request.getMethod() == annmu::http::METHOD_UNKNOWN);

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

        bool Request::test5() {

            try {

                char *method = NULL;
                char *protocol = NULL;
                char *from = NULL;
                char *contentType = NULL;
                char *contentLength = NULL;
  
                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                return (request.isHttps() == false) ? true : false;

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

        bool Request::test6() {

            try {

                char *method = NULL;
                char protocol[] = "on";
                char *from = NULL;
                char *contentType = NULL;
                char *contentLength = NULL;
  
                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);
                return (request.isHttps() == true) ? true : false;

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

        bool Request::test7() {

            try {

                char *method = NULL;
                char protocol[] = "off";
                char *from = NULL;
                char *contentType = NULL;
                char *contentLength = NULL;
  
                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                return (request.isHttps() == false) ? true : false;

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

        bool Request::test8() {

            try {

                char *method = NULL;
                char protocol[] = "unknown";
                char *from = NULL;
                char *contentType = NULL;
                char *contentLength = NULL;
  
                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);
                
                return (request.isHttps() == false) ? true : false;

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

        bool Request::test9() {

            try {

                char *method = NULL;
                char *protocol = NULL;
                char *from = NULL;
                char *contentType = NULL;
                char *contentLength = NULL;

                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                return (request.isAjax() == false) ? true : false;

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

        bool Request::test10() {

            try {

                char *method = NULL;
                char *protocol = NULL;
                char from[] = "XMLHttpRequest";
                char *contentType = NULL;
                char *contentLength = NULL;

                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                return (request.isAjax() == true) ? true : false;

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

        bool Request::test11() {

            try {

                char *method = NULL;
                char *protocol = NULL;
                char from[] = "xmlhttprequest";
                char *contentType = NULL;
                char *contentLength = NULL;

                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                return (request.isAjax() == true) ? true : false;

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

        bool Request::test12() {

            try {

                char *method = NULL;
                char *protocol = NULL;
                char from[] = "xmlhttprequesT";
                char *contentType = NULL;
                char *contentLength = NULL;
  
                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                return (request.isAjax() == false) ? true : false;

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

        bool Request::test13() {

            try {

                char *method = NULL;
                char *protocol = NULL;
                char *from = NULL;
                char *contentType = NULL;
                char *contentLength = NULL;

                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                if(strcmp(request.getContentType(), "") == 0) {
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

        bool Request::test14() {

            try {

                char *method = NULL;
                char *protocol = NULL;
                char *from = NULL;
                char contentType[] = "application/x-www-form-urlencoded";
                char *contentLength = NULL;
                
                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                if(strcmp(request.getContentType(), contentType) == 0) {
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

        bool Request::test15() {

            try {

                char *method = NULL;
                char *protocol = NULL;
                char *from = NULL;
                char *contentType = NULL;
                char *contentLength = NULL;
                
                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                if(request.isContentSimpleForm() == false) {
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

        bool Request::test16() {

            try {

                char *method = NULL;
                char *protocol = NULL;
                char *from = NULL;
                char contentType[] = "application/x-www-form-urlencoded";
                char *contentLength = NULL;
                
                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                if(request.isContentSimpleForm() == true) {
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

        bool Request::test17() {

            try {

                char *method = NULL;
                char *protocol = NULL;
                char *from = NULL;
                char contentType[] = "application/x-www-form-urlencode";
                char *contentLength = NULL;
                
                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                if(request.isContentSimpleForm() == true) {
                    return false;
                }
                
                return true;

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

        bool Request::test18() {

            try {

                char *method = NULL;
                char *protocol = NULL;
                char *from = NULL;
                char *contentType = NULL;
                char *contentLength = NULL;
                
                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                if(request.isContentMultipartForm() == false) {
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

        bool Request::test19() {

            try {

                char *method = NULL;
                char *protocol = NULL;
                char *from = NULL;
                char contentType[] = "multipart/form-data; boundary=something";
                char *contentLength = NULL;
                
                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                if(request.isContentMultipartForm() == true) {
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

        bool Request::test20() {

            try {

                char *method = NULL;
                char *protocol = NULL;
                char *from = NULL;
                char contentType[] = "Multipart/form-data; boundary=something";
                char *contentLength = NULL;
                
                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                if(request.isContentMultipartForm() == false) {
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

        bool Request::test21() {

            try {

                char *method = NULL;
                char *protocol = NULL;
                char *from = NULL;
                char *contentType = NULL;
                char *contentLength = NULL;
                
                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                if(request.isContentJson() == false) {
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

        bool Request::test22() {

            try {

                char *method = NULL;
                char *protocol = NULL;
                char *from = NULL;
                char contentType[] = "application/json";
                char *contentLength = NULL;
                
                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);

                if(request.isContentJson() == true) {
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

        bool Request::test23() {

            try {
                
                char *method = NULL;
                char *protocol = NULL;
                char *from = NULL;
                char contentType[] = "application/Json";
                char *contentLength = NULL;
                
                annmu::http::Request request = annmu::http::Request(method, protocol, from, contentType, contentLength);
                
                if(request.isContentJson() == false) {
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
