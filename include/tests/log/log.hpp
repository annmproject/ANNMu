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

#ifndef TESTS_LOG_LOG_HPP
#define TESTS_LOG_LOG_HPP

#include <iostream>
#include <fstream>
#include <sstream>

#include <ANNMu/log/log.hpp>


namespace tests {

    namespace log {

        class Log {


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
                 * @brief The static method tests add().
                 * 
                 * @note In this case The static method tests processing of the 
                 * null message.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test1();


                /**
                 * 
                 * @brief The static method tests add().
                 * 
                 * @note In this case The static method tests processing of the 
                 * empty message.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test2();


                /**
                 * 
                 * @brief The static method tests add().
                 * 
                 * @note In this case The static method tests processing of the 
                 * valid error message.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test3();


                /**
                 * 
                 * @brief The static method tests add().
                 * 
                 * @note In this case The static method tests processing of the 
                 * valid warning message.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test4();


                /**
                 * 
                 * @brief The static method tests add().
                 * 
                 * @note In this case The static method tests processing of the 
                 * valid message.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test5();


                /**
                 * 
                 * @brief The static method tests isWriteable().
                 * 
                 * @note In this case The static method tests if the log file is
                 * writeable.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test6();


            private:

                /**
                 * 
                 * @brief The private constructor doesn't allow to create the 
                 * object.
                 * 
                 */

                Log();


        };

    }

}

#endif
