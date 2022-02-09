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

#include <ANNMu/url/coding.hpp>


namespace annmu {

    namespace url {

        /*
         *
         * decode
         * 
         */

        std::string Coding::decode(const char *str) {

            std::string result;
            std::size_t i, len;
            
            len = strlen(str);

            for(i = 0; i < len; i++) {
                if(str[i] == '%' && len > i + 2) {
                    const unsigned char ch = Coding::hexToChar(str[i + 1], str[i + 2]);
                    result += (ch == 0) ? '-' : ch;
                    i += 2;
                }
                else if(str[i] == '+') {
                    result += ' ';
                }
                else {
                    result += str[i];
                }
            }

            return result;

        }


        /*
         *
         * encode
         * 
         */
        
        std::string Coding::encode(const char * str) {

            std::string result;
            std::size_t i, len;

            len = strlen(str);

            for(i = 0; i < len; i++) {

                if(str[i] < 'A' || str[i] > 'Z') {
                    if(str[i] < 'a' || str[i] > 'z') {
                        if(str[i] < '0' || str[i] > '9') {
                            result += '%';
                            result += Coding::charToHex(str[i]);
                            continue;
                        }
                    }
                }

                result += str[i];
                
            }

            return result;

        }


        /*
         * 
         * Hex to char
         * 
         */

        unsigned char Coding::hexToChar(const unsigned char upper, const unsigned char lower) {

            unsigned char ch;

            // unexpected input
            if(!(upper >= '0' && upper <= '9') && !(upper >= 'A' && upper <= 'F')) {
                return '-';
            }

            if(!(lower >= '0' && lower <= '9') && !(lower >= 'A' && lower <= 'F')) {
                return '-';
            }
            
            // upper
            ch = (upper >= 'A' ? ((upper & 0xDF) - 'A') + 10 : (upper - '0'));
            ch <<= 4;

            // lower
            ch += (lower >= 'A' ? ((lower & 0xDF) - 'A') + 10 : (lower - '0'));

            return ch;

        }


        /*
         * 
         * Char to hex
         * 
         */

        std::string Coding::charToHex(const unsigned char ch) {

            std::string result;
            char upper, lower;

            result.reserve(2);

            upper = (ch & 0xF0) >> 4;
            upper += upper > 9 ? 'A' - 10 : '0';
            
            result += upper;

            lower = ch & 0x0F;
            lower += lower > 9 ? 'A' - 10 : '0';

            result += lower;
            
            return result;

        }



    }

}
