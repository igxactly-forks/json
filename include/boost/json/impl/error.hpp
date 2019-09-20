//
// Copyright (c) 2018-2019 Vinnie Falco (vinnie dot falco at gmail dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
// Official repository: https://github.com/boostorg/json
//

#ifndef BOOST_JSON_IMPL_ERROR_HPP
#define BOOST_JSON_IMPL_ERROR_HPP

#include <type_traits>

namespace boost {
namespace system {
template<>
struct is_error_code_enum<::boost::json::error>
{
    static bool const value = true;
};
template<>
struct is_error_condition_enum<::boost::json::condition>
{
    static bool const value = true;
};
} // system
} // boost

namespace boost {
namespace json {

BOOST_JSON_DECL
error_code
make_error_code(error e);

BOOST_JSON_DECL
error_condition
make_error_condition(condition c);

} // json
} // boost

#endif