// One test case asserts and is wrong, the other throws before it asserts at
// all. Boost.Test catches the exception and counts that case as failed
// alongside the one that merely got the wrong answer, so both land in the
// failure count and the run is red rather than stopping part way through.

#include "hiker.hpp"
#define BOOST_TEST_MODULE HikerTest
#include <boost/test/unit_test.hpp>
#include <stdexcept>

BOOST_AUTO_TEST_CASE(life_the_universe_and_everything)
{
    BOOST_REQUIRE_EQUAL(42, answer());
}

BOOST_AUTO_TEST_CASE(the_answer_is_two_digits_long)
{
    throw std::runtime_error("not worked out yet");
}
