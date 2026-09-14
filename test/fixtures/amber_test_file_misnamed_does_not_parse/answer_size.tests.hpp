// A test file named .hpp instead of .cpp, so it is never linked into the
// test binary and these tests never run. Vanishing is what it must not do:
// the makefile compiles every .hpp in its own right, so this one is seen
// even though it is not run.

#include "hiker.hpp"
#include <boost/test/unit_test.hpp>
#include <string>

BOOST_AUTO_TEST_CASE(the_answer_is_two_digits_long)
{
    BOOST_REQUIRE_EQUAL(2u, std::to_string(answer()).size() ;
}
