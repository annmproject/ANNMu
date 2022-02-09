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

#include <web/contact/controller.hpp>


namespace web {
    
    namespace contact {

        /*
         *
         * Run
         * 
         */

        void Controller::run() {
            
            // get data
            web::contact::Data data = this->mModel.get();

            if(this->mRequest->getMethod() == annmu::http::METHOD_POST) {    

                annmu::form::Simple form(this->mRequest);

                if(annmu::form::Token::verifyToken("site_", "tokens", form.getValue("token"), this->mDb, this->mLog)) {
                    this->mView.set("introduction", "Token byl potvrzen. Uspesne odeslano.");
                }
                else {
                    this->mView.set("introduction", "Token nebyl potvrzen. Zkuste to znovu.");
                }
                
            }
            else {
                this->mView.set("introduction", data.introduction.c_str());
            }

        }


        /*
         *
         * Print
         * 
         */

        std::string Controller::print() {
            return this->mView.print();
        }


    }

}
