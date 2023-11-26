#include "s21_math_test.h"

START_TEST(fmod_test_1) { ck_assert_ldouble_nan(s21_fmod(S21_NAN, S21_NAN)); }
END_TEST

START_TEST(fmod_test_2) { ck_assert_ldouble_nan(fmod(S21_NAN, S21_NAN)); }
END_TEST

START_TEST(fmod_test_3) {
  ck_assert_ldouble_eq_tol(s21_fmod(123.123, S21_INF_POS),
                           fmod(123.123, S21_INF_POS), S21_EPSILON);
}
END_TEST

START_TEST(fmod_test_4) {
  ck_assert_ldouble_eq_tol(s21_fmod(-123.123, S21_INF_POS),
                           fmod(-123.123, S21_INF_POS), S21_EPSILON);
}
END_TEST

START_TEST(fmod_test_5) {
  ck_assert_ldouble_eq_tol(s21_fmod(123.123, -S21_INF_POS),
                           fmod(123.123, -S21_INF_POS), S21_EPSILON);
}
END_TEST

START_TEST(fmod_test_6) {
  ck_assert_ldouble_eq_tol(s21_fmod(-123.123, S21_INF_NEG),
                           fmod(-123.123, S21_INF_NEG), S21_EPSILON);
}
END_TEST

Suite *test_s21_fmod(void) {
  Suite *s = suite_create("\033[45m-=S21_FMOD=-\033[0m");
  TCase *tc = tcase_create("s21_fmod_tc");

  tcase_add_test(tc, fmod_test_1);
  tcase_add_test(tc, fmod_test_2);
  tcase_add_test(tc, fmod_test_3);
  tcase_add_test(tc, fmod_test_4);
  tcase_add_test(tc, fmod_test_5);
  tcase_add_test(tc, fmod_test_6);

  suite_add_tcase(s, tc);
  return s;
}