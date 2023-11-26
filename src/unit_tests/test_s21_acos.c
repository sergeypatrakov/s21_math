#include "s21_math_test.h"

START_TEST(acos_test_1) {
  ck_assert_ldouble_eq_tol(s21_acos(0), acos(0), S21_EPSILON);
}
END_TEST

START_TEST(acos_test_2) {
  ck_assert_ldouble_eq_tol(s21_acos(1), acos(1), S21_EPSILON);
}
END_TEST

START_TEST(acos_test_3) {
  ck_assert_ldouble_eq_tol(s21_acos(-1), acos(-1), S21_EPSILON);
}
END_TEST

START_TEST(acos_test_4) {
  ck_assert_ldouble_eq_tol(s21_acos(-0.7), acos(-0.7), S21_EPSILON);
}
END_TEST

START_TEST(acos_test_5) {
  ck_assert_ldouble_eq_tol(s21_acos(0.0001), acos(0.0001), S21_EPSILON);
}
END_TEST

START_TEST(acos_test_6) { ck_assert_ldouble_nan(s21_acos(-7.1234)); }
END_TEST

START_TEST(acos_test_7) { ck_assert_ldouble_nan(acos(-7.1234)); }
END_TEST

START_TEST(acos_test_8) {
  ck_assert_ldouble_nan(s21_acos(7.12345678901234567));
}
END_TEST

START_TEST(acos_test_9) { ck_assert_ldouble_nan(acos(7.12345678901234567)); }
END_TEST

START_TEST(acos_test_10) { ck_assert_ldouble_nan(s21_acos(S21_NAN)); }
END_TEST

START_TEST(acos_test_11) { ck_assert_ldouble_nan(acos(S21_NAN)); }
END_TEST

START_TEST(acos_test_12) { ck_assert_ldouble_nan(s21_acos(S21_INF_POS)); }
END_TEST

START_TEST(acos_test_13) { ck_assert_ldouble_nan(acos(S21_INF_POS)); }
END_TEST

START_TEST(acos_test_14) { ck_assert_ldouble_nan(s21_acos(-S21_INF_POS)); }
END_TEST

START_TEST(acos_test_15) { ck_assert_ldouble_nan(acos(-S21_INF_POS)); }
END_TEST

Suite *test_s21_acos(void) {
  Suite *s = suite_create("\033[45m-=S21_ACOS=-\033[0m");
  TCase *tc = tcase_create("s21_acos_tc");

  tcase_add_test(tc, acos_test_1);
  tcase_add_test(tc, acos_test_2);
  tcase_add_test(tc, acos_test_3);
  tcase_add_test(tc, acos_test_4);
  tcase_add_test(tc, acos_test_5);
  tcase_add_test(tc, acos_test_6);
  tcase_add_test(tc, acos_test_7);
  tcase_add_test(tc, acos_test_8);
  tcase_add_test(tc, acos_test_9);
  tcase_add_test(tc, acos_test_10);
  tcase_add_test(tc, acos_test_11);
  tcase_add_test(tc, acos_test_12);
  tcase_add_test(tc, acos_test_13);
  tcase_add_test(tc, acos_test_14);
  tcase_add_test(tc, acos_test_15);

  suite_add_tcase(s, tc);
  return s;
}