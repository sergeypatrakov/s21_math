#include "../s21_math.h"

long double s21_fabs(double x) {
  uint64_t* x_bits = (uint64_t*)&x;

  uint64_t mask = 0x8000000000000000;

  if ((*x_bits & mask) != 0) {
    *x_bits = *x_bits & (~mask);
  }
  return x;
}