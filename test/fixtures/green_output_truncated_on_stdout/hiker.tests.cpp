// The same flood as amber_output_truncated_on_stderr, sent to stdout rather
// than stderr. The runner caps the two streams separately, so stdout loses
// everything past its first 50K while stderr is untouched. Boost.Test writes
// its summary line to stderr, so the line the colour rests on survives and
// the run is green even though the output was cut short.

#include "hiker.hpp"
#define BOOST_TEST_MODULE HikerTest
#include <boost/test/unit_test.hpp>
#include <iostream>

BOOST_AUTO_TEST_CASE(life_the_universe_and_everything)
{
    int total = 0;
    for (int i = 0; i != 5000; i++)
    {
        std::cout << "debug: i is " << i << ", total is " << total << std::endl;
        total += i;
    }
    BOOST_REQUIRE_EQUAL(42, answer());
}
