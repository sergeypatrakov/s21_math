#include "s21_math_test.h"

START_TEST(floor_test_1) {
  ck_assert_ldouble_eq_tol(s21_floor(0.0), floor(0.0), S21_EPSILON);
}
END_TEST

START_TEST(floor_test_2) {
  ck_assert_ldouble_eq_tol(s21_floor(-0.0), floor(-0.0), S21_EPSILON);
}
END_TEST

START_TEST(floor_test_3) {
  ck_assert_ldouble_eq_tol(s21_floor(0.000001), floor(0.000001), S21_EPSILON);
}
END_TEST

START_TEST(floor_test_4) {
  ck_assert_ldouble_eq_tol(s21_floor(-0.000001), floor(-0.000001), S21_EPSILON);
}
END_TEST

START_TEST(floor_test_5) {
  ck_assert_ldouble_eq_tol(s21_floor(-1.000001), floor(-1.000001), S21_EPSILON);
}
END_TEST

START_TEST(floor_test_6) {
  ck_assert_ldouble_eq_tol(s21_floor(1.000001), floor(1.000001), S21_EPSILON);
}
END_TEST

START_TEST(floor_test_7) {
  ck_assert_ldouble_eq_tol(s21_floor(1.), floor(1.), S21_EPSILON);
}
END_TEST

START_TEST(floor_test_8) {
  ck_assert_ldouble_eq_tol(s21_floor(-1.), floor(-1.), S21_EPSILON);
}
END_TEST

START_TEST(floor_test_9) {
  ck_assert_ldouble_eq_tol(s21_floor(1234567890.), floor(1234567890.),
                           S21_EPSILON);
}
END_TEST

START_TEST(floor_test_10) {
  ck_assert_ldouble_eq_tol(s21_floor(1234567890.123456),
                           floor(1234567890.123456), S21_EPSILON);
}
END_TEST

START_TEST(floor_test_11) {
  ck_assert_ldouble_eq_tol(s21_floor(-1234567890.123456),
                           floor(-1234567890.123456), S21_EPSILON);
}
END_TEST

START_TEST(floor_test_12) {
  ck_assert_ldouble_eq_tol(s21_floor(9999999999.999999),
                           floor(9999999999.999999), S21_EPSILON);
}
END_TEST

START_TEST(floor_test_13) {
  ck_assert_ldouble_eq_tol(s21_floor(-9999999999.999999),
                           floor(-9999999999.999999), S21_EPSILON);
}
END_TEST

START_TEST(floor_test_14) {
  ck_assert_ldouble_eq_tol(s21_floor(-9999999999999.99999999999),
                           floor(-9999999999999.99999999999), S21_EPSILON);
}
END_TEST

START_TEST(floor_test_15) { ck_assert_ldouble_nan(s21_floor(NAN)); }
END_TEST

START_TEST(floor_test_16) { ck_assert_ldouble_nan(floor(NAN)); }
END_TEST

START_TEST(floor_test_17) { ck_assert_ldouble_nan(s21_floor(-NAN)); }
END_TEST

START_TEST(floor_test_18) { ck_assert_ldouble_nan(floor(-NAN)); }
END_TEST

START_TEST(floor_test_19) {
  ck_assert_ldouble_eq(s21_floor(INFINITY), floor(INFINITY));
}
END_TEST

START_TEST(floor_test_20) {
  ck_assert_ldouble_eq(s21_floor(-INFINITY), floor(-INFINITY));
}
END_TEST

START_TEST(floor_test_21) {
  ck_assert_ldouble_eq_tol(s21_floor(2.2250738585072014e-308),
                           floor(2.2250738585072014e-308), S21_EPSILON);
}
END_TEST

Suite *test_s21_floor(void) {
  Suite *s = suite_create("\033[45m-=S21_FLOOR=-\033[0m");
  TCase *tc = tcase_create("s21_floor_tc");

  tcase_add_test(tc, floor_test_1);
  tcase_add_test(tc, floor_test_2);
  tcase_add_test(tc, floor_test_3);
  tcase_add_test(tc, floor_test_4);
  tcase_add_test(tc, floor_test_5);
  tcase_add_test(tc, floor_test_6);
  tcase_add_test(tc, floor_test_7);
  tcase_add_test(tc, floor_test_8);
  tcase_add_test(tc, floor_test_9);
  tcase_add_test(tc, floor_test_10);
  tcase_add_test(tc, floor_test_11);
  tcase_add_test(tc, floor_test_12);
  tcase_add_test(tc, floor_test_13);
  tcase_add_test(tc, floor_test_14);
  tcase_add_test(tc, floor_test_15);
  tcase_add_test(tc, floor_test_16);
  tcase_add_test(tc, floor_test_17);
  tcase_add_test(tc, floor_test_18);
  tcase_add_test(tc, floor_test_19);
  tcase_add_test(tc, floor_test_20);
  tcase_add_test(tc, floor_test_21);

  suite_add_tcase(s, tc);
  return s;
}