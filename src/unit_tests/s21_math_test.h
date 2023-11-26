#ifndef SRC_S21_MATH_TEST_H
#define SRC_S21_MATH_TEST_H

#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../s21_math.h"

#define S21_EPSILON 1e-06

Suite *test_s21_abs(void);
Suite *test_s21_factorial(int x);
Suite *test_s21_acos(void);
Suite *test_s21_asin(void);
Suite *test_s21_atan(void);
Suite *test_s21_ceil(void);
Suite *test_s21_cos(void);
Suite *test_s21_exp(void);
Suite *test_s21_fabs(void);
Suite *test_s21_floor(void);
Suite *test_s21_fmod(void);
Suite *test_s21_log(void);
Suite *test_s21_pow(void);
Suite *test_s21_sin(void);
Suite *test_s21_sqrt(void);
Suite *test_s21_tan(void);

#endif