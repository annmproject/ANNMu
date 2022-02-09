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

#ifndef TESTS_HTTP_CLIENT_HPP
#define TESTS_HTTP_CLIENT_HPP

#include <iostream>
#include <cstring>

#include <ANNMu/http/client.hpp>


namespace tests {

    namespace http {

        class Client {

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
                 * @brief The static method tests getIp().
                 * 
                 * @note In this case The static method tests processing of the 
                 * NULL IP.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test1();


                /**
                 * 
                 * @brief The static method tests getIp().
                 * 
                 * @note In this case The static method tests processing of the 
                 * valid IPv4.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test2();


                /**
                 * 
                 * @brief The static method tests getIp().
                 * 
                 * @note In this case The static method tests processing of the 
                 * valid IPv6.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test3();


                /**
                 * 
                 * @brief The static method tests getIp().
                 * 
                 * @note In this case The static method tests processing of the 
                 * empty IP.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test4();


                /**
                 * 
                 * @brief The static method tests getAgent().
                 * 
                 * @note In this case The static method tests processing of the 
                 * NULL agent.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test5();


                /**
                 * 
                 * @brief The static method tests getAgent().
                 * 
                 * @note In this case The static method tests processing of the 
                 * valid agent.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test6();


                /**
                 * 
                 * @brief The static method tests getAgent().
                 * 
                 * @note In this case The static method tests processing of the 
                 * valid agent.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test7();


                /**
                 * 
                 * @brief The static method tests getAgent().
                 * 
                 * @note In this case The static method tests processing of the 
                 * empty agent.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test8();


                /**
                 * 
                 * @brief The static method tests getAcceptableFormates().
                 * 
                 * @note In this case The static method tests processing of the 
                 * NULL acceptable formates.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test9();


                /**
                 * 
                 * @brief The static method tests getAcceptableFormates().
                 * 
                 * @note In this case The static method tests processing of the 
                 * single acceptable formate.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test10();


                /**
                 * 
                 * @brief The static method tests getAcceptableFormates().
                 * 
                 * @note In this case The static method tests processing of the 
                 * single acceptable formate with parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test11();


                /**
                 * 
                 * @brief The static method tests getAcceptableFormates().
                 * 
                 * @note In this case The static method tests processing of the 
                 * multiple acceptable formates.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test12();


                /**
                 * 
                 * @brief The static method tests getAcceptableFormates().
                 * 
                 * @note In this case The static method tests processing of the 
                 * multiple acceptable formates with parameters.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test13();


                /**
                 * 
                 * @brief The static method tests getAcceptableFormates().
                 * 
                 * @note In this case The static method tests processing of the 
                 * empty acceptable formates.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test14();

                
                /**
                 * 
                 * @brief The static method tests getAcceptableLanguages().
                 * 
                 * @note In this case The static method tests processing of the 
                 * NULL acceptable languages.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test15();


                /**
                 * 
                 * @brief The static method tests getAcceptableLanguages().
                 * 
                 * @note In this case The static method tests processing of the 
                 * single acceptable language.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test16();


                /**
                 * 
                 * @brief The static method tests getAcceptableLanguages().
                 * 
                 * @note In this case The static method tests processing of the 
                 * single acceptable language with parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test17();


                /**
                 * 
                 * @brief The static method tests getAcceptableLanguages().
                 * 
                 * @note In this case The static method tests processing of the 
                 * multiple acceptable languages.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test18();


                /**
                 * 
                 * @brief The static method tests getAcceptableLanguages().
                 * 
                 * @note In this case The static method tests processing of the 
                 * multiple acceptable languages with parameters.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test19();


                /**
                 * 
                 * @brief The static method tests getAcceptableLanguages().
                 * 
                 * @note In this case The static method tests processing of the 
                 * empty acceptable languages.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test20();


                /**
                 * 
                 * @brief The static method tests getReferer().
                 * 
                 * @note In this case The static method tests processing of the 
                 * NULL referer.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test21();


                /**
                 * 
                 * @brief The static method tests getReferer().
                 * 
                 * @note In this case The static method tests processing of the 
                 * empty referer.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test22();


                /**
                 * 
                 * @brief The static method tests getReferer().
                 * 
                 * @note In this case The static method tests processing of the 
                 * valid referer.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test23();


                /**
                 * 
                 * @brief The static method tests getReferer().
                 * 
                 * @note In this case The static method tests processing of the 
                 * valid referer.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test24();


                /**
                 * 
                 * @brief The static method tests getCacheTime().
                 * 
                 * @note In this case The static method tests processing of the 
                 * NULL cache time.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test25();


                /**
                 * 
                 * @brief The static method tests getCacheTime().
                 * 
                 * @note In this case The static method tests processing of the 
                 * empty cache time.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test26();


                /**
                 * 
                 * @brief The static method tests getCacheTime().
                 * 
                 * @note In this case The static method tests processing of the 
                 * valid cache time.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test27();


                /**
                 * 
                 * @brief The static method tests getCacheTime().
                 * 
                 * @note In this case The static method tests processing of the 
                 * invalid cache time.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test28();


                /**
                 * 
                 * @brief The static method tests existCookie().
                 * 
                 * @note In this case The static method tests processing of the 
                 * existent cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test29();


                /**
                 * 
                 * @brief The static method tests existCookie().
                 * 
                 * @note In this case The static method tests processing of the 
                 * existent cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test30();


                /**
                 * 
                 * @brief The static method tests existCookie().
                 * 
                 * @note In this case The static method tests processing of the 
                 * nonexistent cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test31();


                /**
                 * 
                 * @brief The static method tests existCookie().
                 * 
                 * @note In this case The static method tests processing of the 
                 * nonexistent cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test32();


                /**
                 * 
                 * @brief The static method tests existCookie().
                 * 
                 * @note In this case The static method tests processing of the 
                 * nonexistent cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test33();


                /**
                 * 
                 * @brief The static method tests getCookie().
                 * 
                 * @note In this case The static method tests processing of the 
                 * nonexistent cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test34();


                /**
                 * 
                 * @brief The static method tests getCookie().
                 * 
                 * @note In this case The static method tests processing of the 
                 * nonexistent cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test35();


                /**
                 * 
                 * @brief The static method tests getCookie().
                 * 
                 * @note In this case The static method tests processing of the 
                 * nonexistent cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test36();


                /**
                 * 
                 * @brief The static method tests getCookie().
                 * 
                 * @note In this case The static method tests processing of the 
                 * existent cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test37();


                /**
                 * 
                 * @brief The static method tests getCookie().
                 * 
                 * @note In this case The static method tests processing of the 
                 * existent cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test38();


            private:

                /**
                 * 
                 * @brief The private constructor doesn't allow to create the 
                 * object.
                 * 
                 */

                Client();


        };

    }

}

#endif
