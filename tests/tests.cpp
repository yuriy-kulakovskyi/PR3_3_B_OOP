#include <gtest/gtest.h>
#include "../classes/Fraction.h"

TEST(TestSetters, FractionTest) {
  Fraction f;
  f.setWhole(12);

  EXPECT_EQ(f.getWhole(), 12);
}