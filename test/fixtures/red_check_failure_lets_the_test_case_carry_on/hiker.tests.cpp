// BOOST_CHECK records a failure and lets the test case run on, so both
// assertions below are reached and both are reported. The matching case
// red_require_failure_aborts_the_test_case is this file with BOOST_REQUIRE
// in place of BOOST_CHECK, and it reports only the first.

#include "hiker.hpp"
#define BOOST_TEST_MODULE HikerTest
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(life_the_universe_and_everything)
{
    BOOST_CHECK_EQUAL(42, answer());
    BOOST_CHECK_LT(answer(), 0);
}
