/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
#include <stdexcept>
#include <iostream>
using namespace ariel;

#include <string>
using namespace std;

TEST_CASE("Good snowman code") {
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(12341234) == string("\t_===_\n\t(O.-)\n<\t/\n\t(> <)\n"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));


}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(123443211));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(555));

}

/* Add more test cases here */
