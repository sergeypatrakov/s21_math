#include "../s21_math.h"

long double s21_log(double x) {
  long double res = 0;
  long double pow = 0;
  long double sign = 1;
  long double count = 2;
  long double temp;
  if (x == S21_INF_POS) {
    res = S21_INF_POS;
  } else if (x == S21_INF_NEG) {
    res = S21_NAN;
  } else {
    while ((x >= 10) || (x < 1 && x > 0)) {
      if (x < 1 && x > 0) {
        x = x * 10;
        pow = pow - 1;
      } else {
        x = x * 0.1;
        pow = pow + 1;
      }
    }
    x = sign * x / 10;
    if (x < 0) {
      res = S21_NAN;
    } else if (x == 0) {
      res = S21_INF_NEG;
    } else {
      x--;
      res = x;
      temp = x;
      while (s21_fabs(res) > S21_EPS) {
        res = res * -x * (count - 1) / count;
        count = count + 1;
        temp = temp + res;
      }
      res = temp + (pow + 1) * S21_LN10;
    }
  }
  return (x == 1) ? 0 : res;
}