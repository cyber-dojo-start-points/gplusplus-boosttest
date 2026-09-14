#include "hiker.hpp"
#define BOOST_TEST_MODULE HikerTest
#include <boost/test/unit_test.hpp>
#include <string>

BOOST_AUTO_TEST_CASE(life_the_universe_and_everything)
{
    BOOST_REQUIRE_EQUAL(42, answer());
}

BOOST_AUTO_TEST_CASE(the_answer_is_two_digits_long)
{
    BOOST_REQUIRE_EQUAL(2u, std::to_string(answer()).size());
}

BOOST_AUTO_TEST_CASE(the_answer_is_positive)
{
    BOOST_REQUIRE_GT(answer(), 0);
}
