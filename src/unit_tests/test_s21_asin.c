#include "s21_math_test.h"

START_TEST(asin_test_1) {
  ck_assert_ldouble_eq_tol(s21_asin(0), asin(0), S21_EPSILON);
}
END_TEST

START_TEST(asin_test_2) {
  ck_assert_ldouble_eq_tol(s21_asin(1), asin(1), S21_EPSILON);
}
END_TEST

START_TEST(asin_test_3) {
  ck_assert_ldouble_eq_tol(s21_asin(-1), asin(-1), S21_EPSILON);
}
END_TEST

START_TEST(asin_test_4) {
  ck_assert_ldouble_eq_tol(s21_asin(-0.7), asin(-0.7), S21_EPSILON);
}
END_TEST

START_TEST(asin_test_5) {
  ck_assert_ldouble_eq_tol(s21_asin(0.0001), asin(0.0001), S21_EPSILON);
}
END_TEST

START_TEST(asin_test_6) { ck_assert_ldouble_nan(s21_asin(-7.1234)); }
END_TEST

START_TEST(asin_test_7) { ck_assert_ldouble_nan(asin(-7.1234)); }
END_TEST

START_TEST(asin_test_8) {
  ck_assert_ldouble_nan(s21_asin(7.12345678901234567));
}
END_TEST

START_TEST(asin_test_9) { ck_assert_ldouble_nan(asin(7.12345678901234567)); }
END_TEST

START_TEST(asin_test_10) { ck_assert_ldouble_nan(s21_asin(S21_NAN)); }
END_TEST

START_TEST(asin_test_11) { ck_assert_ldouble_nan(asin(S21_NAN)); }
END_TEST

START_TEST(asin_test_12) { ck_assert_ldouble_nan(s21_asin(S21_INF_POS)); }
END_TEST

START_TEST(asin_test_13) { ck_assert_ldouble_nan(asin(S21_INF_POS)); }
END_TEST

START_TEST(asin_test_14) { ck_assert_ldouble_nan(s21_asin(-S21_INF_POS)); }
END_TEST

START_TEST(asin_test_15) { ck_assert_ldouble_nan(asin(-S21_INF_POS)); }
END_TEST

Suite *test_s21_asin(void) {
  Suite *s = suite_create("\033[45m-=S21_ASIN=-\033[0m");
  TCase *tc = tcase_create("s21_asin_tc");

  tcase_add_test(tc, asin_test_1);
  tcase_add_test(tc, asin_test_2);
  tcase_add_test(tc, asin_test_3);
  tcase_add_test(tc, asin_test_4);
  tcase_add_test(tc, asin_test_5);
  tcase_add_test(tc, asin_test_6);
  tcase_add_test(tc, asin_test_7);
  tcase_add_test(tc, asin_test_8);
  tcase_add_test(tc, asin_test_9);
  tcase_add_test(tc, asin_test_10);
  tcase_add_test(tc, asin_test_11);
  tcase_add_test(tc, asin_test_12);
  tcase_add_test(tc, asin_test_13);
  tcase_add_test(tc, asin_test_14);
  tcase_add_test(tc, asin_test_15);

  suite_add_tcase(s, tc);
  return s;
}