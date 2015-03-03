#ifndef BOOST_STATECHART_TEST_THROWING_BOOST_ASSERT_HPP_INCLUDED
#define BOOST_STATECHART_TEST_THROWING_BOOST_ASSERT_HPP_INCLUDED
//////////////////////////////////////////////////////////////////////////////
// Copyright 2005-2006 Andreas Huber Doenni
// Distributed under the Boost Software License, Version 1.0. (See accompany-
// ing file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//////////////////////////////////////////////////////////////////////////////



#define BOOST_ENABLE_ASSERT_HANDLER

unsigned int sc_assert_failure_count(0U);


namespace boost
{


void assertion_failed(
  char const *, char const *, char const *, long )
{
  ++sc_assert_failure_count;
}



} // namespace boost



#endif
