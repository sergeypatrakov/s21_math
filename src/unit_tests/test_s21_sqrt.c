#include "s21_math_test.h"

START_TEST(sqrt_test_1) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0), sqrt(0), S21_EPSILON);
}
END_TEST

START_TEST(sqrt_test_2) {
  ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), S21_EPSILON);
}
END_TEST

START_TEST(sqrt_test_3) {
  ck_assert_ldouble_eq_tol(s21_sqrt(3.1234567890123456),
                           sqrt(3.1234567890123456), S21_EPSILON);
}
END_TEST

START_TEST(sqrt_test_4) {
  ck_assert_ldouble_eq_tol(s21_sqrt(5.1234567890123456),
                           sqrt(5.1234567890123456), S21_EPSILON);
}
END_TEST

START_TEST(sqrt_test_5) {
  ck_assert_ldouble_eq_tol(s21_sqrt(4), sqrt(4), S21_EPSILON);
}
END_TEST

START_TEST(sqrt_test_6) { ck_assert_ldouble_nan(s21_sqrt(S21_NAN)); }
END_TEST

START_TEST(sqrt_test_7) { ck_assert_ldouble_nan(sqrt(S21_NAN)); }
END_TEST

START_TEST(sqrt_test_8) { ck_assert_ldouble_nan(s21_sqrt(-5)); }
END_TEST

START_TEST(sqrt_test_9) { ck_assert_ldouble_nan(sqrt(-5)); }
END_TEST

START_TEST(sqrt_test_10) {
  ck_assert_ldouble_eq(s21_sqrt(S21_INF_POS), sqrt(S21_INF_POS));
}
END_TEST

Suite *test_s21_sqrt(void) {
  Suite *s = suite_create("\033[45m-=S21_SQRT=-\033[0m");
  TCase *tc = tcase_create("s21_sqrt_tc");

  tcase_add_test(tc, sqrt_test_1);
  tcase_add_test(tc, sqrt_test_2);
  tcase_add_test(tc, sqrt_test_3);
  tcase_add_test(tc, sqrt_test_4);
  tcase_add_test(tc, sqrt_test_5);
  tcase_add_test(tc, sqrt_test_6);
  tcase_add_test(tc, sqrt_test_7);
  tcase_add_test(tc, sqrt_test_8);
  tcase_add_test(tc, sqrt_test_9);
  tcase_add_test(tc, sqrt_test_10);

  suite_add_tcase(s, tc);
  return s;
}