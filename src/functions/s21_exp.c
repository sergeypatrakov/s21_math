#include "../s21_math.h"

long double s21_exp(double x) {
  if (x == S21_NAN) return S21_NAN;
  if (x == S21_INF_NEG || x < -14) return 0;
  if (x == S21_INF_POS) return S21_INF_POS;

  long double arg = (long double)x;
  long double res = 1.0;
  long double tailor = 1.0;

  for (int i = 1; s21_fabs(tailor / res) > S21_EPS; i++) {
    tailor = (tailor * arg) / i;
    res += tailor;
  }
  return res;
}