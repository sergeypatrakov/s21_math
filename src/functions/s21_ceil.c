#include "../s21_math.h"

long double s21_ceil(double x) {
  if (x >= 0) {
    return (long int)(x + 0.99999999999L);
  } else {
    return (long int)x;
  }
}