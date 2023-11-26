#include "../s21_math.h"

long double s21_asin(double x) {
  long double res = S21_NAN;
  int range = (x > -1 && x < 1);
  if (x == 1 || x == -1) res = S21_PI / (2 * x);
  res = range ? s21_atan(x / s21_sqrt(1 - s21_pow(x, 2))) : res;
  return res;
}