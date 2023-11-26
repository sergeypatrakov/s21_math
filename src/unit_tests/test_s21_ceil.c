#include "s21_math_test.h"

START_TEST(ceil_test_1) {
  ck_assert_ldouble_eq_tol(s21_ceil(0.0), ceil(0.0), S21_EPSILON);
}
END_TEST

START_TEST(ceil_test_2) {
  ck_assert_ldouble_eq_tol(s21_ceil(-0.0), ceil(-0.0), S21_EPSILON);
}
END_TEST

START_TEST(ceil_test_3) {
  ck_assert_ldouble_eq_tol(s21_ceil(0.000001), ceil(0.000001), S21_EPSILON);
}
END_TEST

START_TEST(ceil_test_4) {
  ck_assert_ldouble_eq_tol(s21_ceil(-0.000001), ceil(-0.000001), S21_EPSILON);
}
END_TEST

START_TEST(ceil_test_5) {
  ck_assert_ldouble_eq_tol(s21_ceil(-1.000001), ceil(-1.000001), S21_EPSILON);
}
END_TEST

START_TEST(ceil_test_6) {
  ck_assert_ldouble_eq_tol(s21_ceil(1.000001), ceil(1.000001), S21_EPSILON);
}
END_TEST

START_TEST(ceil_test_7) {
  ck_assert_ldouble_eq_tol(s21_ceil(1.), ceil(1.), S21_EPSILON);
}
END_TEST

START_TEST(ceil_test_8) {
  ck_assert_ldouble_eq_tol(s21_ceil(-1.), ceil(-1.), S21_EPSILON);
}
END_TEST

START_TEST(ceil_test_9) {
  ck_assert_ldouble_eq_tol(s21_ceil(1234567890.123456), ceil(1234567890.123456),
                           S21_EPSILON);
}
END_TEST

START_TEST(ceil_test_10) {
  ck_assert_ldouble_eq_tol(s21_ceil(-1234567890.123456),
                           ceil(-1234567890.123456), S21_EPSILON);
}
END_TEST

START_TEST(ceil_test_11) {
  ck_assert_ldouble_eq_tol(s21_ceil(9999999999.999999), ceil(9999999999.999999),
                           S21_EPSILON);
}
END_TEST

START_TEST(ceil_test_12) {
  ck_assert_ldouble_eq_tol(s21_ceil(1234567890.123456), ceil(1234567890.123456),
                           S21_EPSILON);
}
END_TEST

START_TEST(ceil_test_13) {
  ck_assert_ldouble_eq_tol(s21_ceil(-1234567890.123456),
                           ceil(-1234567890.123456), S21_EPSILON);
}
END_TEST

START_TEST(ceil_test_14) {
  ck_assert_ldouble_eq_tol(s21_ceil(9999999999.999999), ceil(9999999999.999999),
                           S21_EPSILON);
}
END_TEST

START_TEST(ceil_test_15) {
  ck_assert_ldouble_eq_tol(s21_ceil(-9999999999.999999),
                           ceil(-9999999999.999999), S21_EPSILON);
}
END_TEST

START_TEST(ceil_test_16) {
  ck_assert_ldouble_eq_tol(s21_ceil(-9999999999999.99999999999),
                           ceil(-9999999999999.99999999999), S21_EPSILON);
}
END_TEST

START_TEST(ceil_test_17) { ck_assert_ldouble_nan(ceil(NAN)); }
END_TEST

START_TEST(ceil_test_18) { ck_assert_ldouble_nan(ceil(-NAN)); }
END_TEST

Suite *test_s21_ceil(void) {
  Suite *s = suite_create("\033[45m-=S21_CEIL=-\033[0m");
  TCase *tc = tcase_create("s21_ceil_tc");

  tcase_add_test(tc, ceil_test_1);
  tcase_add_test(tc, ceil_test_2);
  tcase_add_test(tc, ceil_test_3);
  tcase_add_test(tc, ceil_test_4);
  tcase_add_test(tc, ceil_test_5);
  tcase_add_test(tc, ceil_test_6);
  tcase_add_test(tc, ceil_test_7);
  tcase_add_test(tc, ceil_test_8);
  tcase_add_test(tc, ceil_test_9);
  tcase_add_test(tc, ceil_test_10);
  tcase_add_test(tc, ceil_test_11);
  tcase_add_test(tc, ceil_test_12);
  tcase_add_test(tc, ceil_test_13);
  tcase_add_test(tc, ceil_test_14);
  tcase_add_test(tc, ceil_test_15);
  tcase_add_test(tc, ceil_test_16);
  tcase_add_test(tc, ceil_test_17);
  tcase_add_test(tc, ceil_test_18);

  suite_add_tcase(s, tc);
  return s;
}