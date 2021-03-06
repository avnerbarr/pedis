/*
* Pedis is free software: you can redistribute it and/or modify
* it under the terms of the GNU Affero General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* You may obtain a copy of the License at
*
*     http://www.gnu.org/licenses
*
* Unless required by applicable law or agreed to in writing,
* software distributed under the License is distributed on an
* "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
* KIND, either express or implied.  See the License for the
* specific language governing permissions and limitations
* under the License.
* 
*  Copyright (c) 2016-2026, Peng Jian, pstack@163.com. All rights reserved.
*
*/

/*  This file copy from Seastar's apps/memcached.
 *  Copyright (C) 2014 Cloudius Systems, Ltd.
 *
 */
#pragma once
#include <iomanip>
#include <sstream>
#include <functional>
#include <vector>
#include "bytes.hh"
#include  <experimental/vector>
#include "redis_command_code.hh"
namespace redis {
using namespace seastar;
struct request_wrapper {
    uint32_t _args_count { 0 };
    command_code _command;
    std::vector<bytes> _args {};
    request_wrapper () {}
};
}
