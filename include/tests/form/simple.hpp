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

#ifndef TESTS_FORM_SIMPLE_HPP
#define TESTS_FORM_SIMPLE_HPP

#include <iostream>
#include <sstream>

#include <ANNMu/form/simple.hpp>
#include <ANNMu/http/request.hpp>

namespace tests {

    namespace form {

        class Simple {

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
                 * @brief The static method tests constructor what loads the 
                 * data from standard input.
                 * 
                 * @note In this case the static method tests processing of the 
                 * empty input.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test1();


                /**
                 * 
                 * @brief The static method tests constructor what loads the 
                 * data from standard input.
                 * 
                 * @note In this case the static method tests processing of the 
                 * input containing single key/value.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test2();


                /**
                 * 
                 * @brief The static method tests constructor what loads the 
                 * data from standard input.
                 * 
                 * @note In this case the static method tests processing of the 
                 * input containing multiple key/value data.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test3();


                /**
                 * 
                 * @brief The static method tests existKey().
                 * 
                 * @note In this case the static method tests processing of the 
                 * input containing sigle key/value.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test4();


                /**
                 * 
                 * @brief The static method tests existKey().
                 * 
                 * @note In this case the static method tests processing of the 
                 * input containing multiple key/value data.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test5();


                /**
                 * 
                 * @brief The static method tests existKey().
                 * 
                 * @note In this case the static method tests processing of the 
                 * input containing multiple key/value data.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test6();

        };

    }

}

#endif
