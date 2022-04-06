// Copyright 2022 UNN-IASR
#include "fun.h"
int a, x, n;
int64_t power(int64_t x, uint16_t n) {
    a = 1;
    for (int i = 0; i < n; i++) {
        a *= x;
    }
    return a;
}
