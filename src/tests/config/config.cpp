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

#include <tests/config/config.hpp>

namespace tests {

    namespace config {

        /*
         *
         * Run
         * 
         */

        void Config::run() {

            puts("\n\x1b[36m==== Config class tests ====\x1b[0m");
            puts(Config::test1() ? "\x1b[32mTest  1 passed!\x1b[0m" : "\x1b[31mTest  1 failed!\x1b[0m");
            puts(Config::test2() ? "\x1b[32mTest  2 passed!\x1b[0m" : "\x1b[31mTest  2 failed!\x1b[0m");
            puts(Config::test3() ? "\x1b[32mTest  3 passed!\x1b[0m" : "\x1b[31mTest  3 failed!\x1b[0m");
            puts(Config::test4() ? "\x1b[32mTest  4 passed!\x1b[0m" : "\x1b[31mTest  4 failed!\x1b[0m");
            puts(Config::test5() ? "\x1b[32mTest  5 passed!\x1b[0m" : "\x1b[31mTest  5 failed!\x1b[0m");
            puts(Config::test6() ? "\x1b[32mTest  6 passed!\x1b[0m" : "\x1b[31mTest  6 failed!\x1b[0m");
            puts(Config::test7() ? "\x1b[32mTest  7 passed!\x1b[0m" : "\x1b[31mTest  7 failed!\x1b[0m");
            puts(Config::test8() ? "\x1b[32mTest  8 passed!\x1b[0m" : "\x1b[31mTest  8 failed!\x1b[0m");
            puts(Config::test9() ? "\x1b[32mTest  9 passed!\x1b[0m" : "\x1b[31mTest  9 failed!\x1b[0m");
            puts(Config::test10() ? "\x1b[32mTest 10 passed!\x1b[0m" : "\x1b[31mTest 10 failed!\x1b[0m");
            puts(Config::test11() ? "\x1b[32mTest 11 passed!\x1b[0m" : "\x1b[31mTest 11 failed!\x1b[0m");
            puts(Config::test12() ? "\x1b[32mTest 12 passed!\x1b[0m" : "\x1b[31mTest 12 failed!\x1b[0m");
            puts(Config::test13() ? "\x1b[32mTest 13 passed!\x1b[0m" : "\x1b[31mTest 13 failed!\x1b[0m");
            puts(Config::test14() ? "\x1b[32mTest 14 passed!\x1b[0m" : "\x1b[31mTest 14 failed!\x1b[0m");
            puts(Config::test15() ? "\x1b[32mTest 15 passed!\x1b[0m" : "\x1b[31mTest 15 failed!\x1b[0m");
            puts(Config::test16() ? "\x1b[32mTest 16 passed!\x1b[0m" : "\x1b[31mTest 16 failed!\x1b[0m");
            puts(Config::test17() ? "\x1b[32mTest 17 passed!\x1b[0m" : "\x1b[31mTest 17 failed!\x1b[0m");
            puts(Config::test18() ? "\x1b[32mTest 18 passed!\x1b[0m" : "\x1b[31mTest 18 failed!\x1b[0m");
            puts(Config::test19() ? "\x1b[32mTest 19 passed!\x1b[0m" : "\x1b[31mTest 19 failed!\x1b[0m");
            puts(Config::test20() ? "\x1b[32mTest 20 passed!\x1b[0m" : "\x1b[31mTest 20 failed!\x1b[0m");
            puts(Config::test21() ? "\x1b[32mTest 21 passed!\x1b[0m" : "\x1b[31mTest 21 failed!\x1b[0m");
            puts(Config::test22() ? "\x1b[32mTest 22 passed!\x1b[0m" : "\x1b[31mTest 22 failed!\x1b[0m");
            puts(Config::test23() ? "\x1b[32mTest 23 passed!\x1b[0m" : "\x1b[31mTest 23 failed!\x1b[0m");
            puts(Config::test24() ? "\x1b[32mTest 24 passed!\x1b[0m" : "\x1b[31mTest 24 failed!\x1b[0m");
            puts(Config::test25() ? "\x1b[32mTest 25 passed!\x1b[0m" : "\x1b[31mTest 25 failed!\x1b[0m");
            puts(Config::test26() ? "\x1b[32mTest 26 passed!\x1b[0m" : "\x1b[31mTest 26 failed!\x1b[0m");

        }


        /*
         *
         * Test 1
         * 
         */

        bool Config::test1() {

            try {

                char path[] = "./config/test1.conf";

                annmu::config::Config config = annmu::config::Config(path);

                if(config.isReadable()) {
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

        bool Config::test2() {

            try {

                char path[] = "./config/test2.conf";

                annmu::config::Config config = annmu::config::Config(path);

                if(config.isReadable()) {
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
         * Test 3
         * 
         */

        bool Config::test3() {

            try {

                char path[] = "./config/test3.conf";

                annmu::config::Config config = annmu::config::Config(path);

                if(config.isReadable()) {
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

        bool Config::test4() {

            try {

                char path[] = "./config/test4.conf";

                annmu::config::Config config = annmu::config::Config(path);

                if(config.isReadable()) {
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

        bool Config::test5() {

            try {

                char path[] = "./config/test5.conf";

                annmu::config::Config config = annmu::config::Config(path);

                if(config.isReadable()) {
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

        bool Config::test6() {

            try {

                char path[] = "./config/test6.conf";

                annmu::config::Config config = annmu::config::Config(path);

                if(!config.isReadable()) {
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

        bool Config::test7() {

            try {

                char path[] = "./config/test7.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return config.existSetting("key");

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

        bool Config::test8() {

            try {

                char path[] = "./config/test8.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return !config.existSetting("key");

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

        bool Config::test9() {

            try {

                char path[] = "./config/test9.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return config.existSetting("key");

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

        bool Config::test10() {

            try {

                char path[] = "./config/test10.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return config.existSetting("key1");

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

        bool Config::test11() {

            try {

                char path[] = "./config/test11.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return config.existSetting("developmentMode");

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

        bool Config::test12() {

            try {

                char path[] = "./config/test12.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return config.existSetting("browserCaching");

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

        bool Config::test13() {

            try {

                char path[] = "./config/test13.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return config.existSetting("browserCaching");

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

        bool Config::test14() {

            try {

                char path[] = "./config/test14.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return !config.existSetting("dbNameeeeee");

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

        bool Config::test15() {

            try {

                char path[] = "./config/test15.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return !config.existSetting("developmentMode");

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

        bool Config::test16() {

            try {

                char path[] = "./config/test16.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return config.existSetting("development mode");

            }
            catch(std::exception &e) {
                return false;
            }

        }


        /*
         *
         * Test 17
         * 
         */

        bool Config::test17() {

            try {

                char path[] = "./config/test17.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return !config.existSetting("development mode");

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

        bool Config::test18() {

            try {

                char path[] = "./config/test18.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return (strcmp(config.getSetting("key"), "value") == 0 ? true : false);

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

        bool Config::test19() {

            try {

                char path[] = "./config/test19.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return (strcmp(config.getSetting("key"), "") == 0 ? true : false);

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

        bool Config::test20() {

            try {

                char path[] = "./config/test20.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return (strcmp(config.getSetting("key"), "value") == 0 ? true : false);

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

        bool Config::test21() {

            try {

                char path[] = "./config/test21.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return (strcmp(config.getSetting("key1"), "value1") == 0 ? true : false);

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

        bool Config::test22() {

            try {

                char path[] = "./config/test22.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return (strcmp(config.getSetting("developmentMode"), "1") == 0 ? true : false);

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

        bool Config::test23() {

            try {

                char path[] = "./config/test23.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return (strcmp(config.getSetting("newAddresses"), "0") == 0 ? true : false);

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

        bool Config::test24() {

            try {

                char path[] = "./config/test24.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return (strcmp(config.getSetting("dbNameeee"), "") == 0 ? true : false);

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

        bool Config::test25() {

            try {

                char path[] = "./config/test25.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return (strcmp(config.getSetting("dbName"), " name") == 0 ? true : false);
                
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

        bool Config::test26() {

            try {

                char path[] = "./config/test26.conf";
                
                annmu::config::Config config = annmu::config::Config(path);

                return (strcmp(config.getSetting("development mode"), "mode is on") == 0 ? true : false);

            }
            catch(std::exception &e) {
                return false;
            }

        }


    }

}
