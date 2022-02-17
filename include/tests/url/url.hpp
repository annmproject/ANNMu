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

#ifndef TESTS_URL_URL_HPP
#define TESTS_URL_URL_HPP

#include <iostream>

#include <ANNMu/url/url.hpp>


namespace tests {

    namespace url {

        class Url {
            
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
                 * @brief The static method tests Constructor().
                 * 
                 * @note In this case The static method tests creating of the 
                 * object.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test1();


                /**
                 * 
                 * @brief The static method tests Constructor().
                 * 
                 * @note In this case The static method tests creating of the 
                 * object.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test2();


                /**
                 * 
                 * @brief The static method tests Constructor().
                 * 
                 * @note In this case The static method tests creating of the 
                 * object.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test3();


                /**
                 * 
                 * @brief The static method tests getDomain().
                 * 
                 * @note In this case The static method tests processing of the 
                 * null domain.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test4();


                /**
                 * 
                 * @brief The static method tests getDomain().
                 * 
                 * @note In this case The static method tests processing of the 
                 * empy domain.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test5();


                /**
                 * 
                 * @brief The static method tests getDomain().
                 * 
                 * @note In this case The static method tests processing of the 
                 * valid domain.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test6();


                /**
                 * 
                 * @brief The static method tests getBase().
                 * 
                 * @note In this case The static method tests processing of the 
                 * null protocol, domain and null script path.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test7();


                /**
                 * 
                 * @brief The static method tests getBase().
                 * 
                 * @note In this case The static method tests processing of the 
                 * http protocol, domain and null script path.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test8();


                /**
                 * 
                 * @brief The static method tests getBase().
                 * 
                 * @note In this case The static method tests processing of the 
                 * https protocol, domain and null script path.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test9();


                /**
                 * 
                 * @brief The static method tests getBase().
                 * 
                 * @note In this case The static method tests processing of the 
                 * http protocol, domain and empty script path.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test10();


                /**
                 * 
                 * @brief The static method tests getBase().
                 * 
                 * @note In this case The static method tests processing of the 
                 * http protocol, domain and valid script path.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test11();


                /**
                 * 
                 * @brief The static method tests getQuery().
                 * 
                 * @note In this case The static method tests processing of the 
                 * null query.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test12();


                /**
                 * 
                 * @brief The static method tests getQuery().
                 * 
                 * @note In this case The static method tests processing of the 
                 * empty query.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test13();


                /**
                 * 
                 * @brief The static method tests getQuery().
                 * 
                 * @note In this case The static method tests processing of the 
                 * valid query.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test14();


                /**
                 * 
                 * @brief The static method tests getNumberOfParameters().
                 * 
                 * @note In this case The static method tests processing of the 
                 * null query.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test15();


                /**
                 * 
                 * @brief The static method tests getNumberOfParameters().
                 * 
                 * @note In this case The static method tests processing of the 
                 * empty query.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test16();


                /**
                 * 
                 * @brief The static method tests getNumberOfParameters().
                 * 
                 * @note In this case The static method tests processing of the 
                 * valid query.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test17();


                /**
                 * 
                 * @brief The static method tests getNumberOfParameters().
                 * 
                 * @note In this case The static method tests processing of the 
                 * valid query.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test18();


                /**
                 * 
                 * @brief The static method tests getParameterAt().
                 * 
                 * @note In this case The static method tests processing of the 
                 * existent cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test19();


                /**
                 * 
                 * @brief The static method tests getParameterAt().
                 * 
                 * @note In this case The static method tests processing of the 
                 * existent cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test20();


                /**
                 * 
                 * @brief The static method tests getParameterAt().
                 * 
                 * @note In this case The static method tests processing of the 
                 * existent cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test21();


                /**
                 * 
                 * @brief The static method tests getParameterAt().
                 * 
                 * @note In this case The static method tests processing of the 
                 * nonexistent cookie.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test22();


                /**
                 * 
                 * @brief The static method tests getParameterAt().
                 * 
                 * @note In this case The static method tests processing of the 
                 * nonexistent cookie.
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

                Url();


        };

    }

}

#endif
