// BOOST_REQUIRE abandons the test case the moment it fails, so the second
// assertion below is never reached and never reported, even though it would
// fail too. The matching case red_check_failure_lets_the_test_case_carry_on
// is this file with BOOST_CHECK in place of BOOST_REQUIRE, and it reports
// both.

#include "hiker.hpp"
#define BOOST_TEST_MODULE HikerTest
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(life_the_universe_and_everything)
{
    BOOST_REQUIRE_EQUAL(42, answer());
    BOOST_REQUIRE_LT(answer(), 0);
}
