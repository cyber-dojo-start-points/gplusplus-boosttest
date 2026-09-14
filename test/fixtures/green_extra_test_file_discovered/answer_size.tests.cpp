// A second test file. BOOST_TEST_MODULE is defined in one file only, the
// one that also brings in the framework's main(), so this file just includes
// the header. Its test case registers itself alongside the others and the
// run reports two.

#include "hiker.hpp"
#include <boost/test/unit_test.hpp>
#include <string>

BOOST_AUTO_TEST_CASE(the_answer_is_two_digits_long)
{
    BOOST_REQUIRE_EQUAL(2u, std::to_string(answer()).size());
}
