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


#ifndef ANNMu_CLIENT_CLIENT_HPP
#define ANNMu_CLIENT_CLIENT_HPP

#include <fstream>
#include <cstring>
#include <string>
#include <vector>
#include <ctime>


using namespace std;


namespace annmu {

    namespace http {

        class Client {

            private:
                const char * mIp;
                const char * mAgent;
                const char * mReferer;
                const char * mAcceptableFormates;
                const char * mAcceptableLanguages;
                const char * mCacheTime;
                std::string mCookies;
                std::vector<std::size_t> mCookiesWords;


            public:

                /**
                 * 
                 * @brief The constructor processes all of the data into the 
                 * appropriate class variables.
                 * 
                 * @param ip It's the pointer to the array that contains the 
                 * client's IP address.
                 * @param agent It's the pointer to the array that contains 
                 * the client's agent specifications.
                 * @param referer It's the pointer to the array that contains 
                 * the client's referer.
                 * @param acceptableFormates It's the pointer to the array that 
                 * contains the client's acceptable formates.
                 * @param acceptableLanguages It's the pointer to the array that 
                 * contains the client's acceptable formates.
                 * @param cacheTime It's the pointer to the array that contains 
                 * the time of the client's cache. 
                 * @param cookies It's the pointer to the array that contains 
                 * the client's cookies.
                 * 
                 */

                Client(
                    const char * ip,
                    const char * agent,
                    const char * referer,
                    const char * acceptableFormates,
                    const char * acceptableLanguages,
                    const char * cacheTime,
                    const char * cookies
                );


                /**
                 * 
                 * @brief The destructor does nothing
                 * 
                 */

                ~Client();


                /**
                 * 
                 * @brief The method returns the pointer to the array that 
                 * contains the client's IP address.
                 * 
                 * @return The method returns the pointer to the array that 
                 * contains the client's IP address. If the IP address is unknown, 
                 * the method will return the pointer to the empty array.
                 * 
                 */

                const char * getIp();


                /**
                 * 
                 * @brief The method returns the pointer to the array that 
                 * contains the client's agent specifications.
                 * 
                 * @return The method returns the pointer to the array that 
                 * contains the client's agent specifications. If the agent 
                 * specifications are unknown, the method will return the 
                 * pointer to the empty array.
                 * 
                 */

                const char * getAgent();


                /**
                 * 
                 * @brief The method returns the pointer to the array that 
                 * contains the client's acceptable formates.
                 * 
                 * @return The method returns the pointer to the array that 
                 * contains the client's acceptable formates. If the aacceptable 
                 * formates are unknown, the method will return the pointer to 
                 * the empty array.
                 * 
                 */

                const char * getAcceptableFormates();


                /**
                 * 
                 * @brief The method returns the pointer to the array that 
                 * contains the client's acceptable languages.
                 * 
                 * @return The method returns  the pointer to the array that 
                 * contains the client's acceptable languages. If the aacceptable 
                 * languages are unknown, the method will return the pointer to 
                 * the empty array.
                 * 
                 */

                const char * getAcceptableLanguages();


                /**
                 * 
                 * @brief The method returns the pointer to the array that 
                 * contains the address of the page that refered the client to 
                 * the current page.
                 * 
                 * @return The method returns the pointer to the array that 
                 * contains the address of the page that refered the client to 
                 * the current page. If the referer is unknown, the method will 
                 * return the pointer to the empty array.
                 * 
                 */

                const char * getReferer();


                /**
                 * 
                 * @brief The method returns the time of the last modification 
                 * of the client's cache.
                 * 
                 * @return The method returns the time of the last modification 
                 * of the client's cache. If the cache doesn't exist or the 
                 * request method is not equal to GET, the method will return 0.
                 * 
                 */

                std::time_t getCacheTime();


                /**
                 * 
                 * @brief The method checks if the cookie under the given key 
                 * exists.
                 * 
                 * @param key It's the key of the cookie.
                 * 
                 * @return The method returns true if the cookie under the given 
                 * key exists; otherwise it returns false.
                 * 
                 */

                bool existCookie(const char * key);


                /**
                 * 
                 * @brief The method returns the pointer to the array that 
                 * contains the value of the cookie that is stored under the 
                 * given key.
                 * 
                 * @param key It's the key of the cookie.
                 * 
                 * @return The method returns the pointer to the array that 
                 * contains the value of the cookie that is stored under the 
                 * given key. If the value doesn't exist, the method will 
                 * return the pointer to the empty array.
                 * 
                 */

                const char * getCookie(const char * key);


                /**
                 * 
                 * @brief The method prints all the information about this 
                 * object to the ostream from the parameter.
                 * 
                 * @param out It's the ostream where the information about this 
                 * object should be printed out.
                 * 
                 */

                void debug(std::ostream & out);


        };

    }

}

#endif
