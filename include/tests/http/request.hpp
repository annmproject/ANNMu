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

#ifndef TESTS_HTTP_REQUEST_HPP
#define TESTS_HTTP_REQUEST_HPP

#include <iostream>
#include <cstring>

#include <ANNMu/http/request.hpp>
#include <ANNMu/http/requestMethods.hpp>


namespace tests {

    namespace http {

        class Request {

            public:

                /**
                 * 
                 * @brief The static method runs all tests of this class and
                 * prints results to the standard output.
                 * 
                 */

                static void run();


                /**
                 * 
                 * @brief The static method tests getMethod().
                 * 
                 * @note In this case The static method tests processing of the 
                 * NULL request method.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test1();


                /**
                 * 
                 * @brief The static method tests getMethod().
                 * 
                 * @note In this case The static method tests processing of the 
                 * GET request method.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test2();


                /**
                 * 
                 * @brief The static method tests getMethod().
                 * 
                 * @note In this case The static method tests processing of the 
                 * POST request method.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test3();


                /**
                 * 
                 * @brief The static method tests getMethod().
                 * 
                 * @note In this case The static method tests processing of the 
                 * UNKNOWN request method.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test4();


                /**
                 * 
                 * @brief The static method tests isHttps().
                 * 
                 * @note In this case The static method tests processing of the 
                 * NULL status.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test5();


                /**
                 * 
                 * @brief The static method tests isHttps().
                 * 
                 * @note In this case The static method tests processing of the 
                 * on status.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test6();


                /**
                 * 
                 * @brief The static method tests isHttps().
                 * 
                 * @note In this case The static method tests processing of the 
                 * off status.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test7();


                /**
                 * 
                 * @brief The static method tests isHttps().
                 * 
                 * @note In this case The static method tests processing of the 
                 * unknown status.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test8();


                /**
                 * 
                 * @brief The static method tests isAjax().
                 * 
                 * @note In this case The static method tests processing of the 
                 * NULL originator.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test9();


                /**
                 * 
                 * @brief The static method tests isAjax().
                 * 
                 * @note In this case The static method tests processing of the 
                 * XMLHttpRequest originator.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test10();


                /**
                 * 
                 * @brief The static method tests isAjax().
                 * 
                 * @note In this case The static method tests processing of the 
                 * xmlhttprequest originator.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test11();


                /**
                 * 
                 * @brief The static method tests isAjax().
                 * 
                 * @note In this case The static method tests processing of the 
                 * invalid XmlhttpRequesT originator.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test12();


                /**
                 * 
                 * @brief The static method tests getContentType().
                 * 
                 * @note In this case The static method tests processing of the 
                 * NULL content type.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test13();


                /**
                 * 
                 * @brief The static method tests getContentType().
                 * 
                 * @note In this case The static method tests processing of the 
                 * valid content type.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test14();


                /**
                 * 
                 * @brief The static method tests isContentSimpleForm().
                 * 
                 * @note In this case The static method tests processing of the 
                 * NULL content type.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test15();


                /**
                 * 
                 * @brief The static method tests isContentSimpleForm().
                 * 
                 * @note In this case The static method tests processing of the 
                 * simple form content type.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test16();


                /**
                 * 
                 * @brief The static method tests isContentSimpleForm().
                 * 
                 * @note In this case The static method tests processing of the 
                 * invalid simple form content type.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test17();


                /**
                 * 
                 * @brief The static method tests isContentMultipartForm().
                 * 
                 * @note In this case The static method tests processing of the 
                 * NULL content type.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test18();


                /**
                 * 
                 * @brief The static method tests isContentMultipartForm().
                 * 
                 * @note In this case The static method tests processing of the 
                 * valid multipart form content type.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test19();


                /**
                 * 
                 * @brief The static method tests isContentMultipartForm().
                 * 
                 * @note In this case The static method tests processing of the 
                 * invalid multipart form content type.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test20();


                /**
                 * 
                 * @brief The static method tests isContentJson().
                 * 
                 * @note In this case The static method tests processing of the 
                 * NULL content type.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test21();


                /**
                 * 
                 * @brief The static method tests isContentJson().
                 * 
                 * @note In this case The static method tests processing of the 
                 * JSON content type.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test22();


                /**
                 * 
                 * @brief The static method tests isContentJson().
                 * 
                 * @note In this case The static method tests processing of the 
                 * invalid JSON content type.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test23();


            private:

                /**
                 * 
                 * @brief The private constructor doesn't allow to create the 
                 * object.
                 * 
                 */

                Request();


        };

    }

}
#endif
