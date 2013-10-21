//  This file was automatically generated on Thu May 29 07:24:54 2008
//  by libs/config/tools/generate.cpp
//  Copyright John Maddock 2002-4.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for the most recent version.//
//  Revision $Id: no_static_assert_pass.cpp 79537 2012-07-15 15:59:05Z marshall $
//


// Test file for macro BOOST_NO_CXX11_STATIC_ASSERT
// This file should compile, if it does not then
// BOOST_NO_CXX11_STATIC_ASSERT should be defined.
// See file boost_no_static_assert.ipp for details

// Must not have BOOST_ASSERT_CONFIG set; it defeats
// the objective of this file:
#ifdef BOOST_ASSERT_CONFIG
#  undef BOOST_ASSERT_CONFIG
#endif

#include <boost/config.hpp>
#include "test.hpp"

#ifndef BOOST_NO_CXX11_STATIC_ASSERT
#include "boost_no_static_assert.ipp"
#else
namespace boost_no_static_assert = empty_boost;
#endif

int main( int, char *[] )
{
   return boost_no_static_assert::test();
}

