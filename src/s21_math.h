#ifndef SRC_S21_MATH_H
#define SRC_S21_MATH_H
#include <stdint.h>
#include <stdio.h>

#define S21_PI 3.14159265358979323846
#define S21_LN2 0.69314718055994530941
#define S21_LN10 2.30258509299404568402
#define S21_E 2.71828182845904523536
#define S21_EPS 1e-17
#define S21_NAN 0.0 / 0.0
#define S21_INF_POS 1.0 / 0.0
#define S21_INF_NEG -1.0 / 0.0
#define S21_IS_NAN(x) (!(x >= 0) && !(x < 0))
#define S21_IS_INF(x) ((x == S21_INF_POS) || (x == S21_INF_NEG))

int s21_abs(int x);
long double s21_factorial(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);

#endif