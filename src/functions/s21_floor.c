#include "../s21_math.h"

long double s21_floor(double x) {
  long double data = 0;

  if (S21_IS_NAN(x) || S21_IS_INF(x)) {
    data = x;
  } else {
    if (x >= 0) {
      data = (long long int)x;

    } else {
      long double caondation = x - (long long int)x;
      if (caondation >= -0.00000001) {
        data = x;
      } else {
        data = (long long int)x - 1;
      }
    }
  }
  return data;
}