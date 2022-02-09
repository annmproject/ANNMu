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


#ifndef ANNMu_HTTP_URL_CODING_HPP
#define ANNMu_HTTP_URL_CODING_HPP

#include <string>
#include <cstring>


using namespace std;


namespace annmu {

    namespace url {

        class Coding {
            
            public:

                /**
                 * 
                 * @brief The static method decodes the given array.
                 * 
                 * @param str It's the pointer to the array that contains 
                 * the encoded string.
                 * 
                 * @return The static method returns the decoded array.
                 * 
                 */

                static std::string decode(const char * str);


                /**
                 *
                 * @brief The static method encodes the given array.
                 * 
                 * @param str It's the pointer to the array that contains 
                 * the decoded (normal) string.
                 * 
                 * @return The static method returns the encoded string.
                 * 
                 */

                static std::string encode(const char * str);


            private:

                /**
                 * 
                 * @brief The static method converts the hexadecimal code to 
                 * the character.
                 * 
                 * @param upper It's upper 4 bytes of char.
                 * @param lower It's lower 4 bytes of char.
                 * 
                 * @return The static method returns the unsigned char that 
                 * contains the char from the given bytes. If the given 
                 * hexadecimal code is invalid the method will return '-'.
                 * 
                 */

                static unsigned char hexToChar(
                    const unsigned char upper, 
                    const unsigned char lower
                );

                
                /**
                 * 
                 * @brief The static method converts the character to the 
                 * hexadecimal code.
                 * 
                 * @param ch The character which will be converted.
                 * 
                 * @return The static method returns the string that contains 
                 * the hexadecimal code of the given character.
                 * 
                 */

                static std::string charToHex(unsigned char ch);


                /**
                 * 
                 * @brief The private constructor doesn't allow to create the 
                 * object.
                 * 
                 */

                Coding();


        };

    }

}

#endif
