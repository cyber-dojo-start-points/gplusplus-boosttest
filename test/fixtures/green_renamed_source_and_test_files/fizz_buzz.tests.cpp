#include "fizz_buzz.hpp"
#define BOOST_TEST_MODULE FizzBuzzTest
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(life_the_universe_and_everything)
{
    BOOST_REQUIRE_EQUAL(42, fizz_buzz());
}
