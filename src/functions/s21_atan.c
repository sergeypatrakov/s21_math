#include "../s21_math.h"

long double s21_atan(double x) {
  long double res = 0;
  int range = (x > -1 && x < 1);
  if (x != x) {
    res = x;
  } else if (x == S21_INF_POS) {
    res = S21_PI / 2;
  } else if (x == S21_INF_NEG) {
    res = -S21_PI / 2;
  } else if (x == 1) {
    res = 0.785398;
  } else if (x == -1) {
    res = -0.785398;
  } else {
    res = range ? x : 1.0 / x;
    for (int n = 1; n < 1000; n++) {
      double first = s21_pow(-1, n);
      double second = s21_pow(x, (2 * n + 1) * (range ? 1 : -1));
      double third = 2 * n + 1;
      res += first * second / third;
    }
    if (!range) res = (S21_PI * s21_fabs(x) / (2 * x)) - res;
  }
  return res;
}