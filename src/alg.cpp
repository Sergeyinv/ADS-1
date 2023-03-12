// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
uint64_t count = 0;
  for (int i = 2; i*i <= value; ++i) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  uint64_t count1 = 0, count2 = 0;
  for (int i = 1; i <= 10000; i++) {
    for (int j = i; j >= 1; j--) {
      if (i % j == 0) {
        count1++;
      }
    }
    if (count1 == 2) {
      count2++;
      count1 = 0;
    }
    if (count2 == n) {
      return i;
    }
      count1 = 0;
  }
  return 0;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t count = 0;
  for (int i = value + 1; i <= 10000; i++) {
    for (int j = i; j >= 1; j--) {
      if (i % j == 0) {
        count++;
      }
    }
    if (count == 2) {
      return i;
      count = 0;
    }
      count = 0;
  }
  return 0;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t count = 0, sum = 0;
  for (int i = 0; i < hbound; i++) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
  return sum - 1;
}
