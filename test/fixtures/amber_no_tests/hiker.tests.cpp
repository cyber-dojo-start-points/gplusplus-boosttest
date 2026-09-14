// A test file a learner has started but has not yet put a test case into.
// Boost.Test links and runs, finds an empty test tree, and refuses to call
// that a pass: it prints a setup error instead of a summary line, so a kata
// with no tests at all reaches amber rather than green.

#include "hiker.hpp"
#define BOOST_TEST_MODULE HikerTest
#include <boost/test/unit_test.hpp>
