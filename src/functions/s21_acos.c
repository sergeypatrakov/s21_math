#include "../s21_math.h"

long double s21_acos(double x) {
  long double res = S21_NAN;
  if (x >= 0 && x < 1) res = s21_atan(s21_sqrt(1 - s21_pow(x, 2)) / x);
  if (x > -1 && x < 0) res = S21_PI + s21_atan(s21_sqrt(1 - s21_pow(x, 2)) / x);
  if (x == 1) res = 0;
  if (x == -1) res = S21_PI;
  return res;
}