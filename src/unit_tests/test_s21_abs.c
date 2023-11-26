#include "s21_math_test.h"

START_TEST(abs_test_1) { ck_assert_int_eq(s21_abs(0), abs(0)); }
END_TEST

START_TEST(abs_test_2) { ck_assert_int_eq(s21_abs(-0), abs(-0)); }
END_TEST

START_TEST(abs_test_3) { ck_assert_int_eq(s21_abs(-7), abs(-7)); }
END_TEST

START_TEST(abs_test_4) { ck_assert_int_eq(s21_abs(7), abs(7)); }
END_TEST

START_TEST(abs_test_5) { ck_assert_int_eq(s21_abs((int)NAN), abs((int)NAN)); }
END_TEST

START_TEST(abs_test_6) {
  ck_assert_int_eq(s21_abs((int)INFINITY), abs((int)INFINITY));
}
END_TEST

START_TEST(abs_test_7) {
  ck_assert_int_eq(s21_abs((int)-INFINITY), abs((int)-INFINITY));
}
END_TEST

START_TEST(abs_test_8) {
  ck_assert_int_eq(s21_abs(2147483647), abs(2147483647));
}
END_TEST

START_TEST(abs_test_9) {
  ck_assert_int_eq(s21_abs(-2147483647), abs(-2147483647));
}
END_TEST

Suite *test_s21_abs(void) {
  Suite *s = suite_create("\033[45m-=S21_ABS=-\033[0m");
  TCase *tc = tcase_create("s21_abs_tc");

  tcase_add_test(tc, abs_test_1);
  tcase_add_test(tc, abs_test_2);
  tcase_add_test(tc, abs_test_3);
  tcase_add_test(tc, abs_test_4);
  tcase_add_test(tc, abs_test_5);
  tcase_add_test(tc, abs_test_6);
  tcase_add_test(tc, abs_test_7);
  tcase_add_test(tc, abs_test_8);
  tcase_add_test(tc, abs_test_9);

  suite_add_tcase(s, tc);
  return s;
}