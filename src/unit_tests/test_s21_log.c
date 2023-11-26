#include "s21_math_test.h"

// START_TEST(log_test_1) {
//     ck_assert_ldouble_eq_tol(s21_log(0), log(0), S21_EPSILON);
// }END_TEST

START_TEST(log_test_2) {
  ck_assert_ldouble_eq_tol(s21_log(0.0001), log(0.0001), S21_EPSILON);
}
END_TEST

START_TEST(log_test_3) {
  ck_assert_ldouble_eq_tol(s21_log(1), log(1), S21_EPSILON);
}
END_TEST

START_TEST(log_test_4) {
  ck_assert_ldouble_eq_tol(s21_log(3.1234567890123456), log(3.1234567890123456),
                           S21_EPSILON);
}
END_TEST

START_TEST(log_test_5) {
  ck_assert_ldouble_eq_tol(s21_log(13.1234553210123456),
                           log(13.1234553210123456), S21_EPSILON);
}
END_TEST

START_TEST(log_test_6) { ck_assert_ldouble_nan(s21_log(S21_NAN)); }
END_TEST

START_TEST(log_test_7) { ck_assert_ldouble_nan(log(S21_NAN)); }
END_TEST

START_TEST(log_test_8) {
  ck_assert_ldouble_eq(s21_log(S21_INF_POS), log(S21_INF_POS));
}
END_TEST

START_TEST(log_test_9) { ck_assert_ldouble_nan(s21_log(-S21_INF_POS)); }
END_TEST

START_TEST(log_test_10) { ck_assert_ldouble_nan(log(-S21_INF_POS)); }
END_TEST

Suite *test_s21_log(void) {
  Suite *s = suite_create("\033[45m-=S21_LOG=-\033[0m");
  TCase *tc = tcase_create("s21_log_tc");

  // tcase_add_test(tc, log_test_1);
  tcase_add_test(tc, log_test_2);
  tcase_add_test(tc, log_test_3);
  tcase_add_test(tc, log_test_4);
  tcase_add_test(tc, log_test_5);
  tcase_add_test(tc, log_test_6);
  tcase_add_test(tc, log_test_7);
  tcase_add_test(tc, log_test_8);
  tcase_add_test(tc, log_test_9);
  tcase_add_test(tc, log_test_10);

  suite_add_tcase(s, tc);
  return s;
}