#include "doctest.h"
#include "snowman.hpp"
#include <stdexcept>
#include <iostream>
using namespace ariel;

#include <string>
using namespace std;

TEST_CASE("input a good snowman code") {
    CHECK(snowman(11114411) == string("\n_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(12341234) == string("\n _===_\n (O.-)\n<(> <)/\n"));
    CHECK(snowman(12121214) == string("\n _===_\n (..o)\n<( : )/\n (   )"));
    CHECK(snowman(34343434) == string(" \n   -\n  /_\\\n (O -)\n/( : )\n (> <)"));
    CHECK(snowman(43214321) == string(" \n ___\n(_*_)\n(o_.)\n(] [)\\\n( : )"));
    CHECK(snowman(24132431) == string(" \n  ___\n .....\n (. O)\n\\(> <)\n ( : )"));
    CHECK(snowman(31212123) == string(" \n   -\n  /_\\\n (o,.)\n\\(] [])>\n (___)"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));


}

TEST_CASE("input a bad snowman") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(13443211));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(555));

}