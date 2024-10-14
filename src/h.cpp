#include "../include/main.h"
#include <iostream>
#include <iomanip>

int Sum(int* a, int n) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    if(a[i] % 2 != 0)
      sum += a[i];
  }

  return sum;
}