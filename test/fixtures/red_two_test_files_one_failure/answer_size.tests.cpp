#include "hiker.hpp"
#include <boost/test/unit_test.hpp>
#include <string>

BOOST_AUTO_TEST_CASE(the_answer_is_two_digits_long)
{
    BOOST_REQUIRE_EQUAL(2u, std::to_string(answer()).size());
}

BOOST_AUTO_TEST_CASE(the_answer_is_three_digits_long)
{
    BOOST_REQUIRE_EQUAL(3u, std::to_string(answer()).size());
}
