#include <gtest/gtest.h>
#include "../include/main.h"

TEST(Sum, HandleSum) {
  const int n = 5;
  int a[n] = {1, 2, 3, 4, 5};
  int sum = Sum(a, n);

  EXPECT_EQ(sum, 9);
}