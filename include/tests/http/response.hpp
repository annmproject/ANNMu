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

#ifndef TESTS_HTTP_RESPONSE_HPP
#define TESTS_HTTP_RESPONSE_HPP

#include <iostream>
#include <cstring>

#include <ANNMu/http/response.hpp>


namespace tests {

    namespace http {

        class Response {

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
                 * @brief The static method tests existsHeader().
                 * 
                 * @note In this case The static method tests processing of the 
                 * nonexistent header.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test1();


                /**
                 * 
                 * @brief The static method tests existsHeader().
                 * 
                 * @note In this case The static method tests processing of the 
                 * nonexistent header.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test2();


                /**
                 * 
                 * @brief The static method tests existsHeader().
                 * 
                 * @note In this case The static method tests processing of the 
                 * nonexistent header.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test3();


                /**
                 * 
                 * @brief The static method tests existsHeader().
                 * 
                 * @note In this case The static method tests processing of the 
                 * existent header.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test4();


                /**
                 * 
                 * @brief The static method tests existsHeader().
                 * 
                 * @note In this case The static method tests processing of the 
                 * existent header.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test5();


                /**
                 * 
                 * @brief The static method tests existsHeader().
                 * 
                 * @note In this case The static method tests processing of the 
                 * existent header.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test6();


                /**
                 * 
                 * @brief The static method tests getHeader().
                 * 
                 * @note In this case The static method tests processing of the 
                 * nonexistent header.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test7();


                /**
                 * 
                 * @brief The static method tests getHeader().
                 * 
                 * @note In this case The static method tests processing of the 
                 * nonexistent header.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test8();


                /**
                 * 
                 * @brief The static method tests getHeader().
                 * 
                 * @note In this case The static method tests processing of the 
                 * nonexistent header.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test9();


                /**
                 * 
                 * @brief The static method tests getHeader().
                 * 
                 * @note In this case The static method tests processing of the 
                 * existent header.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test10();


                /**
                 * 
                 * @brief The static method tests getHeader().
                 * 
                 * @note In this case The static method tests processing of the 
                 * existent header.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test11();


                /**
                 * 
                 * @brief The static method tests getHeader().
                 * 
                 * @note In this case The static method tests processing of the 
                 * existent header.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test12();


                /**
                 * 
                 * @brief The static method tests getNumerOfHeaders().
                 * 
                 * @note In this case The static method tests processing of the 
                 * number of headers.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test13();


                /**
                 * 
                 * @brief The static method tests getNumerOfHeaders().
                 * 
                 * @note In this case The static method tests processing of the 
                 * number of headers.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test14();


                /**
                 * 
                 * @brief The static method tests getNumerOfHeaders().
                 * 
                 * @note In this case The static method tests processing of the 
                 * number of headers.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test15();


                /**
                 * 
                 * @brief The static method tests existsCookie().
                 * 
                 * @note In this case The static method tests processing of the 
                 * empty cookie string.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test16();


                /**
                 * 
                 * @brief The static method tests existsCookie().
                 * 
                 * @note In this case The static method tests processing of the 
                 * existent single cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test17();


                /**
                 * 
                 * @brief The static method tests existsCookie().
                 * 
                 * @note In this case The static method tests processing of the 
                 * existent multiple cookies.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test18();


                /**
                 * 
                 * @brief The static method tests existsCookie().
                 * 
                 * @note In this case The static method tests processing of the 
                 * nonexistent cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test19();


                /**
                 * 
                 * @brief The static method tests existsCookie().
                 * 
                 * @note In this case The static method tests processing of the 
                 * nonexistent cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test20();


                /**
                 * 
                 * @brief The static method tests existsCookie().
                 * 
                 * @note In this case The static method tests processing of the 
                 * nonexistent cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test21();


                /**
                 * 
                 * @brief The static method tests getCookiesData().
                 * 
                 * @note In this case The static method tests processing of the 
                 * cookie to the string.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test22();


                /**
                 * 
                 * @brief The static method tests getCookiesData().
                 * 
                 * @note In this case The static method tests processing of the 
                 * cookie to the string.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test23();


                /**
                 * 
                 * @brief The static method tests getCookiesData().
                 * 
                 * @note In this case The static method tests processing of the 
                 * cookie to the string.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test24();


            private:

                /**
                 * 
                 * @brief The private constructor doesn't allow to create the 
                 * object.
                 * 
                 */

                Response();


        };

    }

}

#endif
