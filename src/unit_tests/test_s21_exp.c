#include "s21_math_test.h"

START_TEST(exp_test_1) {
  ck_assert_double_eq_tol(s21_exp(0), exp(0), S21_EPSILON);
}
END_TEST

START_TEST(exp_test_2) {
  ck_assert_double_eq_tol(s21_exp(-0), exp(-0), S21_EPSILON);
}
END_TEST

START_TEST(exp_test_3) {
  ck_assert_double_eq_tol(s21_exp(0.5), exp(0.5), S21_EPSILON);
}
END_TEST

START_TEST(exp_test_4) {
  ck_assert_double_eq_tol(s21_exp(-0.5), exp(-0.5), S21_EPSILON);
}
END_TEST

START_TEST(exp_test_5) {
  ck_assert_double_eq_tol(s21_exp(1), exp(1), S21_EPSILON);
}
END_TEST

START_TEST(exp_test_6) {
  ck_assert_double_eq_tol(s21_exp(1.5), exp(1.5), S21_EPSILON);
}
END_TEST

START_TEST(exp_test_7) {
  ck_assert_double_eq_tol(s21_exp(-1.5), exp(-1.5), S21_EPSILON);
}
END_TEST

START_TEST(exp_test_8) {
  ck_assert_double_eq_tol(s21_exp(2), exp(2), S21_EPSILON);
}
END_TEST

START_TEST(exp_test_9) {
  ck_assert_double_eq_tol(s21_exp(3), exp(3), S21_EPSILON);
}
END_TEST

START_TEST(exp_test_10) {
  ck_assert_double_eq_tol(s21_exp(-66), exp(-66), S21_EPSILON);
}
END_TEST

START_TEST(exp_test_11) {
  ck_assert_double_eq_tol(s21_exp(-100), exp(-100), S21_EPSILON);
}
END_TEST

START_TEST(exp_test_12) { ck_assert_ldouble_nan(s21_exp(NAN)); }
END_TEST

START_TEST(exp_test_13) { ck_assert_double_infinite(s21_exp(S21_INF_POS)); }
END_TEST

START_TEST(exp_test_14) {
  ck_assert_double_eq(s21_exp(S21_INF_NEG), exp(S21_INF_NEG));
}
END_TEST

Suite *test_s21_exp(void) {
  Suite *s = suite_create("\033[45m-=S21_EXP=-\033[0m");
  TCase *tc = tcase_create("s21_exp_tc");

  tcase_add_test(tc, exp_test_1);
  tcase_add_test(tc, exp_test_2);
  tcase_add_test(tc, exp_test_3);
  tcase_add_test(tc, exp_test_4);
  tcase_add_test(tc, exp_test_5);
  tcase_add_test(tc, exp_test_6);
  tcase_add_test(tc, exp_test_7);
  tcase_add_test(tc, exp_test_8);
  tcase_add_test(tc, exp_test_9);
  tcase_add_test(tc, exp_test_10);
  tcase_add_test(tc, exp_test_11);
  tcase_add_test(tc, exp_test_12);
  tcase_add_test(tc, exp_test_13);
  tcase_add_test(tc, exp_test_14);

  suite_add_tcase(s, tc);
  return s;
}