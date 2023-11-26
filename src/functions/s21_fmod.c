#include "../s21_math.h"

long double s21_fmod(double x, double y) {
  if (y == 0.0) {
    return S21_NAN;
  }
  y = s21_fabs(y);
  if (y == 0.0) {
    return S21_NAN;
  }
  while (x >= y) {
    x = x - y;
  }
  return x;
}
