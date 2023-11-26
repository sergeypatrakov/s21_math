#include "../s21_math.h"

long double s21_cos(double x) {
  long double res = 1;
  int exp = 2;
  int minus = -1;
  long double part_i = (minus) * (s21_pow(x, exp)) / s21_factorial(exp);
  while (part_i > 1e-8 || part_i < -1e-8) {
    res += part_i;
    exp += 2;
    minus = -minus;
    part_i = minus * (s21_pow(x, exp)) / s21_factorial(exp);
  }
  return res;
}