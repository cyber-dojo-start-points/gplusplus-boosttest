// A test file named .hpp instead of .cpp. The makefile compiles every .hpp
// in its own right, so this file is checked for errors, but only .cpp files
// are handed to the compiler as sources of the test binary, so these tests
// never run. The assertion here is one that would fail, so the run reaching
// green says this file really did not run rather than that it ran and passed.

#include "hiker.hpp"
#include <boost/test/unit_test.hpp>
#include <string>

BOOST_AUTO_TEST_CASE(the_answer_is_three_digits_long)
{
    BOOST_REQUIRE_EQUAL(3u, std::to_string(answer()).size());
}
