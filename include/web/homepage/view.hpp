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

#ifndef WEB_HOMEPAGE_VIEW_HPP
#define WEB_HOMEPAGE_VIEW_HPP

#include <string>

#include <ANNMu/log/log.hpp>
#include <ANNMu/mvc/view.hpp>

#include <web/homepage/data.hpp>


using namespace std;


namespace web {

    namespace homepage {

        class View : public annmu::mvc::View {

            public:

                /**
                 * 
                 * @brief Constructor handles all given data into suitable 
                 * class variables.
                 * 
                 * @param log It's shared pointer to the log object.
                 * @param tplPath It's path to the template file.
                 * 
                 */
                
                View(
                    annmu::log::Log * log, 
                    const char * tplPath
                ) : annmu::mvc::View(log, tplPath) {}


                /**
                 * 
                 * @brief The method sets data to printable structure.
                 * 
                 * @param data blocks data to print.
                 * 
                 */

                void setData(
                    const char * key, 
                    web::homepage::Data & data
                );


        };

    }

}

#endif
