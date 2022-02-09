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

#include <iostream>

#include <tests/http/request.hpp>
#include <tests/http/response.hpp>
#include <tests/http/client.hpp>
#include <tests/config/config.hpp>
#include <tests/log/log.hpp>
#include <tests/form/simple.hpp>

int main(void) {

    tests::http::Request::run();
    tests::http::Response::run();
    tests::http::Client::run();
    tests::config::Config::run();
    tests::log::Log::run();
    tests::form::Simple::run();

    return 0;

}
