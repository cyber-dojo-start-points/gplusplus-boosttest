// A test file in a sub-directory. The makefile globs *.cpp shallowly, so a
// file at any depth below the top is not compiled, not linked, and not run.
// The assertion here is one that would fail, so the run reaching green says
// this file really was left out rather than that it ran and passed.

#include "hiker.hpp"
#include <boost/test/unit_test.hpp>
#include <string>

BOOST_AUTO_TEST_CASE(the_answer_is_three_digits_long)
{
    BOOST_REQUIRE_EQUAL(3u, std::to_string(answer()).size());
}
