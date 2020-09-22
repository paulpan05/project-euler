#include "algos/multiples_three_five.hpp"

#include "testing/catch.hh"

using namespace std;

TEST_CASE("Calculate sum of multiples of 3 and 5 less than a give number", "[multiples35]") {
  REQUIRE(multiples_three_five(3) == 0);
}