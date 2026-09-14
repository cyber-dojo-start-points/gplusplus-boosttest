// Both test cases call answer(), which takes a signal. Boost.Test traps it,
// counts the case as failed, and stops the whole run there rather than going
// on to the next case. Each case announces itself on stderr before it
// asserts, and exactly one of those lines is printed, which is what says the
// second case never ran.

#include "hiker.hpp"
#define BOOST_TEST_MODULE HikerTest
#include <boost/test/unit_test.hpp>
#include <iostream>
#include <string>

BOOST_AUTO_TEST_CASE(life_the_universe_and_everything)
{
    std::cerr << "entering the first test case" << std::endl;
    BOOST_REQUIRE_EQUAL(42, answer());
}

BOOST_AUTO_TEST_CASE(the_answer_is_two_digits_long)
{
    std::cerr << "entering the second test case" << std::endl;
    BOOST_REQUIRE_EQUAL(2u, std::to_string(answer()).size());
}
