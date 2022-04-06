// Copyright 2022 UNN-IASR
#include "fun.h"
int sum, x, n;
int64_t power(int64_t x, uint16_t n) {
    sum = 1;
    for (int i = 0; i < n; i++) {
        sum *= x;
    }
    return sum;
}
