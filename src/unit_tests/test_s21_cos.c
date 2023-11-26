#include "s21_math_test.h"

START_TEST(cos_test_1) {
  ck_assert_ldouble_eq_tol(s21_cos(0), cos(0), S21_EPSILON);
}
END_TEST

START_TEST(cos_test_2) {
  ck_assert_ldouble_eq_tol(s21_cos(1), cos(1), S21_EPSILON);
}
END_TEST

START_TEST(cos_test_3) {
  ck_assert_ldouble_eq_tol(s21_cos(S21_PI + 0.2), cos(S21_PI + 0.2),
                           S21_EPSILON);
}
END_TEST

START_TEST(cos_test_4) {
  ck_assert_ldouble_eq_tol(s21_cos(S21_PI), cos(S21_PI), S21_EPSILON);
}
END_TEST

START_TEST(cos_test_5) {
  ck_assert_ldouble_eq_tol(s21_cos(S21_PI), cos(S21_PI), S21_EPSILON);
}
END_TEST

START_TEST(cos_test_6) {
  ck_assert_ldouble_eq_tol(s21_cos(S21_PI / 2), cos(S21_PI / 2), S21_EPSILON);
}
END_TEST

START_TEST(cos_test_7) {
  ck_assert_ldouble_eq_tol(s21_cos(-S21_PI / 2), cos(-S21_PI / 2), S21_EPSILON);
}
END_TEST

START_TEST(cos_test_8) {
  ck_assert_ldouble_eq_tol(s21_cos(3 * S21_PI / 2), cos(3 * S21_PI / 2),
                           S21_EPSILON);
}
END_TEST

START_TEST(cos_test_9) {
  ck_assert_ldouble_eq_tol(s21_cos(-3 * S21_PI / 2), cos(-3 * S21_PI / 2),
                           S21_EPSILON);
}
END_TEST

START_TEST(cos_test_10) {
  ck_assert_ldouble_eq_tol(s21_cos(5.1234567890123456), cos(5.1234567890123456),
                           S21_EPSILON);
}
END_TEST

START_TEST(cos_test_11) {
  ck_assert_ldouble_eq_tol(s21_cos(3.1234567890123456), cos(3.1234567890123456),
                           S21_EPSILON);
}
END_TEST

START_TEST(cos_test_12) { ck_assert_ldouble_nan(s21_cos(S21_INF_POS)); }
END_TEST

START_TEST(cos_test_13) { ck_assert_ldouble_nan(cos(S21_INF_POS)); }
END_TEST

START_TEST(cos_test_14) { ck_assert_ldouble_nan(s21_cos(-S21_INF_POS)); }
END_TEST

START_TEST(cos_test_15) { ck_assert_ldouble_nan(cos(-S21_INF_POS)); }
END_TEST

START_TEST(cos_test_16) {
  for (int i = -360; i <= 360; i++) {
    ck_assert_ldouble_eq_tol(s21_cos(i * S21_PI / 180), cos(i * S21_PI / 180),
                             S21_EPSILON);
  }
}
END_TEST

Suite *test_s21_cos(void) {
  Suite *s = suite_create("\033[45m-=S21_COS=-\033[0m");
  TCase *tc = tcase_create("s21_cos_tc");

  tcase_add_test(tc, cos_test_1);
  tcase_add_test(tc, cos_test_2);
  tcase_add_test(tc, cos_test_3);
  tcase_add_test(tc, cos_test_4);
  tcase_add_test(tc, cos_test_5);
  tcase_add_test(tc, cos_test_6);
  tcase_add_test(tc, cos_test_7);
  tcase_add_test(tc, cos_test_8);
  tcase_add_test(tc, cos_test_9);
  tcase_add_test(tc, cos_test_10);
  tcase_add_test(tc, cos_test_11);
  tcase_add_test(tc, cos_test_12);
  tcase_add_test(tc, cos_test_13);
  tcase_add_test(tc, cos_test_14);
  tcase_add_test(tc, cos_test_15);
  tcase_add_test(tc, cos_test_16);

  suite_add_tcase(s, tc);
  return s;
}