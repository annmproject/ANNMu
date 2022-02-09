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

#ifndef TESTS_CONFIG_CONFIG_HPP
#define TESTS_CONFIG_CONFIG_HPP

#include <iostream>

#include <ANNMu/config/config.hpp>


namespace tests {

    namespace config {

        class Config {

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
                 * configuration file.
                 * 
                 * @note In this case the static method tests processing of the 
                 * empty configuration file.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test1();
                

                /**
                 * 
                 * @brief The static method tests constructor what loads the 
                 * configuration file.
                 * 
                 * @note In this case the static method tests processing of the 
                 * configuration file containing only comments.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test2();


                /**
                 * 
                 * @brief The static method tests constructor what loads the 
                 * configuration file.
                 * 
                 * @note In this case the static method tests processing of the 
                 * configuration file containing only comments.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test3();


                /**
                 * 
                 * @brief The static method tests constructor what loads the 
                 * configuration file.
                 * 
                 * @note In this case the static method tests processing of the 
                 * configuration file containing only empty lines.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test4();


                /**
                 * 
                 * @brief The static method tests constructor what loads the 
                 * configuration file.
                 * 
                 * @note In this case the static method tests processing of the 
                 * configuration file containing only comments and empty lines.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test5();


                /**
                 * 
                 * @brief The static method tests constructor what loads the 
                 * configuration file.
                 * 
                 * @note In this case the static method tests processing of the 
                 * nonexistent file.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test6();


                /**
                 * 
                 * @brief The static method tests existSetting().
                 * 
                 * @note In this case the static method tests existence of the 
                 * parameter in configuration file containing existing parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test7();


                /**
                 * 
                 * @brief The static method tests existSetting().
                 * 
                 * @note In this case the static method tests existence of the 
                 * parameter in configuration file containing nothing.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test8();


                /**
                 * 
                 * @brief The static method tests existSetting().
                 * 
                 * @note In this case the static method tests existence of the 
                 * parameter in configuration file containing comment 
                 * and existing parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test9();


                /**
                 * 
                 * @brief The static method tests existSetting().
                 * 
                 * @note In this case the static method tests existence of the 
                 * parameter in configuration file containing comment and 
                 * existing parameters.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test10();


                /**
                 * 
                 * @brief The static method tests existSetting().
                 * 
                 * @note In this case the static method tests existence of the 
                 * parameter in configuration file containing comments, empty 
                 * lines and existing parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test11();


                /**
                 * 
                 * @brief The static method tests existSetting().
                 * 
                 * @note In this case the static method tests existence of the 
                 * parameter in configuration file containing comments, empty 
                 * lines and existing parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test12();


                /**
                 * 
                 * @brief The static method tests existSetting().
                 * 
                 * @note In this case the static method tests existence of the 
                 * parameter in configuration file containing comments, empty 
                 * lines, invalid lines and existing parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test13();


                /**
                 * 
                 * @brief The static method tests existSetting().
                 * 
                 * @note In this case the static method tests existence of the 
                 * parameter in configuration file containing comments, empty 
                 * lines and non-existent parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test14();


                /**
                 * 
                 * @brief The static method tests existSetting().
                 * 
                 * @note In this case the static method tests existence of the 
                 * parameter in configuration file containing untrimmed
                 * parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test15();


                /**
                 * 
                 * @brief The static method tests existSetting().
                 * 
                 * @note In this case the static method tests existence of the 
                 * parameter in configuration file containing multiword 
                 * existent parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test16();


                /**
                 * 
                 * @brief The static method tests existSetting().
                 * 
                 * @note In this case the static method tests existence of the 
                 * parameter in configuration file containing multiword 
                 * non-existent parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test17();


                /**
                 * 
                 * @brief The static method tests getSetting().
                 * 
                 * @note In this case the static method tests value of the 
                 * parameter in configuration file containing existing parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test18();


                /**
                 * 
                 * @brief The static method tests getSetting().
                 * 
                 * @note In this case the static method tests value of the 
                 * parameter in configuration file containing nothing.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test19();


                /**
                 * 
                 * @brief The static method tests getSetting().
                 * 
                 * @note In this case the static method tests value of the 
                 * parameter in configuration file containing comment 
                 * and existing parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test20();


                /**
                 * 
                 * @brief The static method tests getSetting().
                 * 
                 * @note In this case the static method tests value of the 
                 * parameter in configuration file containing comment 
                 * and existing parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test21();


                /**
                 * 
                 * @brief The static method tests getSetting().
                 * 
                 * @note In this case the static method tests value of the 
                 * parameter in configuration file containing comments, empty 
                 * lines and existing parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test22();


                /**
                 * 
                 * @brief The static method tests getSetting().
                 * 
                 * @note In this case the static method tests value of the 
                 * parameter in configuration file containing comments, empty 
                 * lines and existing parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test23();


                /**
                 * 
                 * @brief The static method tests getSetting().
                 * 
                 * @note In this case the static method tests value of the 
                 * parameter in configuration file containing comments, empty 
                 * lines and non-existent parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test24();


                /**
                 * 
                 * @brief The static method tests getSetting().
                 * 
                 * @note In this case the static method tests value of the 
                 * parameter in configuration file containing untrimmed existing
                 * parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test25();


                /**
                 * 
                 * @brief The static method tests getSetting().
                 * 
                 * @note In this case the static method tests value of the 
                 * parameter in configuration file containing multiword existing
                 * parameter.
                 * 
                 * @return The static method returns true if the test was 
                 * successful, otherwise false.
                 * 
                 */

                static bool test26();


            private:

                /**
                 * 
                 * @brief The private constructor doesn't allow to create the 
                 * object.
                 * 
                 */

                Config();


        };

    }

}

#endif
