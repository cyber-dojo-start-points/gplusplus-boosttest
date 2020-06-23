#include "hiker.hpp"
#define BOOST_TEST_MODULE HikerTest
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(global_function_example)
{
    BOOST_REQUIRE_EQUAL(42, answer());
}

BOOST_AUTO_TEST_CASE(instance_method_example)
{
    BOOST_REQUIRE_EQUAL(42, hiker().answer());
}
