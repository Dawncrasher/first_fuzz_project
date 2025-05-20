#include "fuzztest/fuzztest.h"
#include "gtest/gtest.h"
#include <cmath>

TEST(MyTestSuite, OnePlustTwoIsTwoPlusOne) { EXPECT_EQ(1 + 2, 2 + 1); }

void IntegerAdditionCommutes(int a, int b) { EXPECT_EQ(a + b, b + a); }
void IntegerDivison(int a, int b) {

  int result = INFINITY;
  if (b == 0) {
    return;
  }
  result = a / b;
  // EXPECT_EQ(a / b, result);
}

FUZZ_TEST(MyTestSuite, IntegerAdditionCommutes);
FUZZ_TEST(MyTestSuite, IntegerDivison);