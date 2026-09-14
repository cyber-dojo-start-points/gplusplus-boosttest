#include "hiker.hpp"
#define BOOST_TEST_MODULE HikerTest
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(life_the_universe_and_everything)
{
    BOOST_REQUIRE_EQUAL(42, answer());
}

BOOST_AUTO_TEST_CASE(the_answer_is_not_the_question)
{
    BOOST_REQUIRE_NE(6 * 9, answer());
}
