#include "doctest.h"
#include "snowman.hpp"
#include <stdexcept>
#include <iostream>
using namespace ariel;

#include <string>
using namespace std;

TEST_CASE("input a good snowman code") {
    CHECK(snowman(11114411) == string("\n _===_\n (.,.)\n ( : )\n ( : )"));
    CHECK(snowman(12341234) == string("\n _===_\n (O.-)/\n<(> <)\n (   )"));
    CHECK(snowman(12121214) == string("\n _===_\n (..o)/\n<( : )\n (   )"));
    CHECK(snowman(34343434) == string("\n   -\n  /_\\\n (O -)\n/(> <)\n (   )"));
    CHECK(snowman(43214321) == string("\n  ___\n (_*_)\n (o_.)\n (] [)\\\n ( : )"));
    CHECK(snowman(24132431) == string("\n  ___\n .....\n\\(. O)\n (> <)\n ( : )"));
    CHECK(snowman(31212123) == string("\n   -\n  /_\\\n\\(o,.)\n (] [)>\n (___)"));
    CHECK(snowman(11111111) == string("\n _===_\n (.,.)\n<( : )>\n ( : )"));
    CHECK(snowman(22222222) == string("\n  ___\n .....\n\\(o.o)/\n (] [)\n (\" \")"));
    CHECK(snowman(33333333) == string("\n   -\n  /_\\\n (O_O)\n/(> <)\\\n (___)"));
    CHECK(snowman(44444431) == string("\n  ___\n (_*_)\n (- -)\n (> <)\n ( : )"));
    CHECK(snowman(33232124) == string("\n   -\n  /_\\\n\\(o_O)\n (] [)>\n (   )"));
}

TEST_CASE("input a bad snowman") {
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(12));
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(1234));
    CHECK_THROWS(snowman(1234123));
    CHECK_THROWS(snowman(12345678));
    CHECK_THROWS(snowman(91234223));
    CHECK_THROWS(snowman(123-44567));
    CHECK_THROWS(snowman(01234567));
    CHECK_THROWS(snowman(9-124516));
    CHECK(snowman(44444431) != string("\n  ___\n (_*_)\n (o,-)\n (> <)\n ( : )"));
    CHECK(snowman(12342312) != string("\n  ___\n .....\n\\(o.o)/\n (] [)\n (\" \")"));
    CHECK(snowman(14141231) != string("\n _===_\n (.,.)\n<( : )>\n (\" \")"));
    CHECK(snowman(24134121) != string("\n   -\n  /_\\\n\\(o,.)\n (] [)>\n (___)"));
    CHECK(snowman(31432133) != string("\n  ___\n .....\n\\(O_o)\n (   )>\n (   )"));
    CHECK(snowman(41312411) != string("\n  ___\n (_*_)\n (o,-)\n/(> <)>\n ( : )"));
}