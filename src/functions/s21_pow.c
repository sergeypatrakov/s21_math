#include "../s21_math.h"

long double s21_pow(double base, double exp) {
  long double res;
  if (base < 0) {
    if ((long int)exp == exp) {
      if (exp > 0) {
        res = base;
        for (long int i = 0; i < (long int)exp - 1; i++) {
          res *= base;
        }
      } else if (exp == 0) {
        res = 1;
      } else {
        res = 1 / base;
        for (long int i = 0; i < (long int)exp * (-1) - 1; i++) {
          res /= base;
        }
      }
    } else {
      if (exp == S21_INF_NEG || exp == S21_INF_POS) {
        if (base * (-1) < 1) {
          res = 0;
        } else if (base * (-1) == 1) {
          res = 1;
        } else {
          if (exp == S21_INF_NEG) {
            res = 0;
          } else {
            res = S21_INF_POS;
          }
        }
      } else {
        res = S21_NAN;
      }
    }
  } else if (base == 0) {
    res = exp == 0 ? 1 : 0;
  } else if (base == 1) {
    res = 1;
  } else {
    if ((long int)exp == exp) {
      if (exp > 0) {
        res = base;
        for (long int i = 0; i < (long int)exp - 1; i++) {
          res *= base;
        }
      } else if (exp == 0) {
        res = 1;
      } else {
        res = 1 / base;
        for (long int i = 0; i < (long int)exp * (-1) - 1; i++) {
          res /= base;
        }
      }
    } else {
      res = s21_exp(exp * (double)s21_log(base));
    }
  }
  return res;
}