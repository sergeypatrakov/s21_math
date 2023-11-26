#include "s21_math_test.h"

START_TEST(tan_test_1) {
  ck_assert_ldouble_eq_tol(s21_tan(0), tan(0), S21_EPSILON);
}
END_TEST

START_TEST(tan_test_2) {
  ck_assert_ldouble_eq_tol(s21_tan(1), tan(1), S21_EPSILON);
}
END_TEST

START_TEST(tan_test_3) {
  ck_assert_ldouble_eq_tol(s21_tan(5.1234567890123456), tan(5.1234567890123456),
                           S21_EPSILON);
}
END_TEST

START_TEST(tan_test_4) {
  ck_assert_ldouble_eq_tol(s21_tan(3.1234567890123456), tan(3.1234567890123456),
                           S21_EPSILON);
}
END_TEST

START_TEST(tan_test_5) { ck_assert_ldouble_nan(s21_tan(S21_NAN)); }
END_TEST

START_TEST(tan_test_6) { ck_assert_ldouble_nan(tan(S21_NAN)); }
END_TEST

START_TEST(tan_test_7) { ck_assert_ldouble_nan(s21_tan(S21_INF_POS)); }
END_TEST

START_TEST(tan_test_8) { ck_assert_ldouble_nan(tan(S21_INF_POS)); }
END_TEST

START_TEST(tan_test_9) { ck_assert_ldouble_nan(s21_tan(-S21_INF_POS)); }
END_TEST

START_TEST(tan_test_10) { ck_assert_ldouble_nan(tan(-S21_INF_POS)); }
END_TEST

Suite *test_s21_tan(void) {
  Suite *s = suite_create("\033[45m-=S21_TAN=-\033[0m");
  TCase *tc = tcase_create("s21_tan_tc");

  tcase_add_test(tc, tan_test_1);
  tcase_add_test(tc, tan_test_2);
  tcase_add_test(tc, tan_test_3);
  tcase_add_test(tc, tan_test_4);
  tcase_add_test(tc, tan_test_5);
  tcase_add_test(tc, tan_test_6);
  tcase_add_test(tc, tan_test_7);
  tcase_add_test(tc, tan_test_8);
  tcase_add_test(tc, tan_test_9);
  tcase_add_test(tc, tan_test_10);

  suite_add_tcase(s, tc);
  return s;
}