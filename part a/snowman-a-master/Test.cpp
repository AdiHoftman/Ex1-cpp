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
    CHECK(snowman(31212123) == string(" \n   -\n  /_\\\n (o,.)\n\\(] [)>\n (___)"));
    CHECK(snowman(11111111) == string("\n _===_\n (.,.)\n<( : )>\n ( : )"));
    CHECK(snowman(33333333) == string("\n   -\n  /_\\\n (O_O)\n/(] [)\\\n (___)"));
    CHECK(snowman(44444431) == string("\n ___\n(_*_)\n(- -)\n(> <)\n( : )"));
}

TEST_CASE("input a bad snowman") {
    CHECK_THROWS(snowman(554));
    CHECK_THROWS(snowman(134432121));
    CHECK_THROWS(snowman(18234123));
    CHECK_THROWS(snowman(1234));
    CHECK_THROWS(snowman(91234567));
    CHECK_THROWS(snowman(43212));
    CHECK_THROWS(snowman(234567));
    CHECK_THROWS(snowman(5678910));
    CHECK_THROWS(snowman(01234));
    CHECK_THROWS(snowman(9324516));
}