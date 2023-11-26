#include "s21_math_test.h"

START_TEST(atan_test_1) {
  ck_assert_ldouble_eq_tol(s21_atan(0), atan(0), S21_EPSILON);
}
END_TEST

START_TEST(atan_test_2) {
  ck_assert_ldouble_eq_tol(s21_atan(1), atan(1), S21_EPSILON);
}
END_TEST

START_TEST(atan_test_3) {
  ck_assert_ldouble_eq_tol(s21_atan(-1), atan(-1), S21_EPSILON);
}
END_TEST

START_TEST(atan_test_4) {
  ck_assert_ldouble_eq_tol(s21_atan(0.0001), atan(0.0001), S21_EPSILON);
}
END_TEST

START_TEST(atan_test_5) {
  ck_assert_ldouble_eq_tol(s21_atan(-7.1234), atan(-7.1234), S21_EPSILON);
}
END_TEST

START_TEST(atan_test_6) {
  ck_assert_ldouble_eq_tol(s21_atan(7.12345678901234567),
                           atan(7.12345678901234567), S21_EPSILON);
}
END_TEST

START_TEST(atan_test_7) { ck_assert_ldouble_nan(s21_atan(S21_NAN)); }
END_TEST

START_TEST(atan_test_8) { ck_assert_ldouble_nan(atan(S21_NAN)); }
END_TEST

START_TEST(atan_test_9) {
  ck_assert_ldouble_eq_tol(s21_atan(S21_INF_POS), atan(S21_INF_POS),
                           S21_EPSILON);
}
END_TEST

START_TEST(atan_test_10) {
  ck_assert_ldouble_eq_tol(s21_atan(-S21_INF_POS), atan(-S21_INF_POS),
                           S21_EPSILON);
}
END_TEST

Suite *test_s21_atan(void) {
  Suite *s = suite_create("\033[45m-=S21_ATAN=-\033[0m");
  TCase *tc = tcase_create("s21_atan_tc");

  tcase_add_test(tc, atan_test_1);
  tcase_add_test(tc, atan_test_2);
  tcase_add_test(tc, atan_test_3);
  tcase_add_test(tc, atan_test_4);
  tcase_add_test(tc, atan_test_5);
  tcase_add_test(tc, atan_test_6);
  tcase_add_test(tc, atan_test_7);
  tcase_add_test(tc, atan_test_8);
  tcase_add_test(tc, atan_test_9);
  tcase_add_test(tc, atan_test_10);

  suite_add_tcase(s, tc);
  return s;
}