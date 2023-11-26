#include "../s21_math.h"

long double s21_sin(double x) {
  long double result = 0;
  if ((s21_fabs(x) == S21_INF_POS) || S21_IS_NAN(x)) {
    result = S21_NAN;
  } else {
    for (; x < -2 * S21_PI || 2 * S21_PI < x;) {
      if (x > 2 * S21_PI)
        x -= 2 * S21_PI;
      else
        x += 2 * S21_PI;
    }
    for (int i = 0; i < 150; i++) {
      result +=
          s21_pow(-1, i) * s21_pow(x, 2 * i + 1) / s21_factorial(2 * i + 1);
    }
  }
  return result;
}