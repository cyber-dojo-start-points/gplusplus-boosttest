// A print inside a loop, which is how a learner looks at what their code is
// doing. Boost.Test writes its summary line to stderr, and this writes there
// too, so the flood and the summary share one stream. The runner keeps the
// first 50K of that stream and drops the rest, and the summary is printed at
// the very end, so the test case passes and the run is still amber: there is
// no summary left for the rag-lambda to read.
//
// The matching case green_output_truncated_on_stdout floods the other stream
// instead, where the same flood costs nothing.

#include "hiker.hpp"
#define BOOST_TEST_MODULE HikerTest
#include <boost/test/unit_test.hpp>
#include <iostream>

BOOST_AUTO_TEST_CASE(life_the_universe_and_everything)
{
    int total = 0;
    for (int i = 0; i != 5000; i++)
    {
        std::cerr << "debug: i is " << i << ", total is " << total << std::endl;
        total += i;
    }
    BOOST_REQUIRE_EQUAL(42, answer());
}
