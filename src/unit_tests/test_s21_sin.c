#include "s21_math_test.h"

START_TEST(sin_test_1) {
  ck_assert_ldouble_eq_tol(s21_sin(0), sin(0), S21_EPSILON);
}
END_TEST

START_TEST(sin_test_2) {
  ck_assert_ldouble_eq_tol(s21_sin(1), sin(1), S21_EPSILON);
}
END_TEST

START_TEST(sin_test_3) {
  ck_assert_ldouble_eq_tol(s21_sin(S21_PI), sin(S21_PI), S21_EPSILON);
}
END_TEST

START_TEST(sin_test_4) {
  ck_assert_ldouble_eq_tol(s21_sin(S21_PI / 2), sin(S21_PI / 2), S21_EPSILON);
}
END_TEST

START_TEST(sin_test_5) {
  ck_assert_ldouble_eq_tol(s21_sin(S21_PI / 2), sinl(S21_PI / 2), S21_EPSILON);
}
END_TEST

START_TEST(sin_test_6) {
  ck_assert_ldouble_eq_tol(s21_sin(-S21_PI / 2), sin(-S21_PI / 2), S21_EPSILON);
}
END_TEST

START_TEST(sin_test_7) {
  ck_assert_ldouble_eq_tol(s21_sin(3 * S21_PI / 2), sin(3 * S21_PI / 2),
                           S21_EPSILON);
}
END_TEST

START_TEST(sin_test_8) {
  ck_assert_ldouble_eq_tol(s21_sin(-3 * S21_PI / 2), sin(-3 * S21_PI / 2),
                           S21_EPSILON);
}
END_TEST

START_TEST(sin_test_9) {
  ck_assert_ldouble_eq_tol(s21_sin(5.1234567890123456), sin(5.1234567890123456),
                           S21_EPSILON);
}
END_TEST

START_TEST(sin_test_10) {
  ck_assert_ldouble_eq_tol(s21_sin(3.1234567890123456), sin(3.1234567890123456),
                           S21_EPSILON);
}
END_TEST

START_TEST(sin_test_11) { ck_assert_ldouble_nan(s21_sin(S21_NAN)); }
END_TEST

START_TEST(sin_test_12) { ck_assert_ldouble_nan(sin(S21_NAN)); }
END_TEST

START_TEST(sin_test_13) { ck_assert_ldouble_nan(s21_sin(S21_INF_POS)); }
END_TEST

START_TEST(sin_test_14) { ck_assert_ldouble_nan(sin(S21_INF_POS)); }
END_TEST

START_TEST(sin_test_15) { ck_assert_ldouble_nan(s21_sin(-S21_INF_POS)); }
END_TEST

START_TEST(sin_test_16) { ck_assert_ldouble_nan(sin(-S21_INF_POS)); }
END_TEST

START_TEST(sin_test_17) {
  for (int i = -360; i <= 360; i++) {
    ck_assert_ldouble_eq_tol(s21_sin(i * S21_PI / 180), sin(i * S21_PI / 180),
                             S21_EPSILON);
  }
}
END_TEST

Suite *test_s21_sin(void) {
  Suite *s = suite_create("\033[45m-=S21_SIN=-\033[0m");
  TCase *tc = tcase_create("s21_sin_tc");

  tcase_add_test(tc, sin_test_1);
  tcase_add_test(tc, sin_test_2);
  tcase_add_test(tc, sin_test_3);
  tcase_add_test(tc, sin_test_4);
  tcase_add_test(tc, sin_test_5);
  tcase_add_test(tc, sin_test_6);
  tcase_add_test(tc, sin_test_7);
  tcase_add_test(tc, sin_test_8);
  tcase_add_test(tc, sin_test_9);
  tcase_add_test(tc, sin_test_10);
  tcase_add_test(tc, sin_test_11);
  tcase_add_test(tc, sin_test_12);
  tcase_add_test(tc, sin_test_13);
  tcase_add_test(tc, sin_test_14);
  tcase_add_test(tc, sin_test_15);
  tcase_add_test(tc, sin_test_16);
  tcase_add_test(tc, sin_test_17);

  suite_add_tcase(s, tc);
  return s;
}