#include "s21_math_test.h"

START_TEST(fabs_test_1) {
  ck_assert_ldouble_eq_tol(s21_fabs(0.0), fabs(0.0), S21_EPSILON);
}
END_TEST

START_TEST(fabs_test_2) {
  ck_assert_ldouble_eq_tol(s21_fabs(-0.0), fabs(-0.0), S21_EPSILON);
}
END_TEST

START_TEST(fabs_test_3) {
  ck_assert_ldouble_eq_tol(s21_fabs(0.000001), fabs(0.000001), S21_EPSILON);
}
END_TEST

START_TEST(fabs_test_4) {
  ck_assert_ldouble_eq_tol(s21_fabs(-0.000001), fabs(-0.000001), S21_EPSILON);
}
END_TEST

START_TEST(fabs_test_5) {
  ck_assert_ldouble_eq_tol(s21_fabs(-1.000001), fabs(-1.000001), S21_EPSILON);
}
END_TEST

START_TEST(fabs_test_6) {
  ck_assert_ldouble_eq_tol(s21_fabs(1.000001), fabs(1.000001), S21_EPSILON);
}
END_TEST

START_TEST(fabs_test_7) {
  ck_assert_ldouble_eq_tol(s21_fabs(1.), fabs(1.), S21_EPSILON);
}
END_TEST

START_TEST(fabs_test_8) {
  ck_assert_ldouble_eq_tol(s21_fabs(-1.), fabs(-1.), S21_EPSILON);
}
END_TEST

START_TEST(fabs_test_9) {
  ck_assert_ldouble_eq_tol(s21_fabs(1234567890.), fabs(1234567890.),
                           S21_EPSILON);
}
END_TEST

START_TEST(fabs_test_10) {
  ck_assert_ldouble_eq_tol(s21_fabs(1234567890.123456), fabs(1234567890.123456),
                           S21_EPSILON);
}
END_TEST

START_TEST(fabs_test_11) {
  ck_assert_ldouble_eq_tol(s21_fabs(-1234567890.123456),
                           fabs(-1234567890.123456), S21_EPSILON);
}
END_TEST

START_TEST(fabs_test_12) {
  ck_assert_ldouble_eq_tol(s21_fabs(1111111111.111111), fabs(1111111111.111111),
                           S21_EPSILON);
}
END_TEST

START_TEST(fabs_test_13) {
  ck_assert_ldouble_eq_tol(s21_fabs(-2222222222.222222),
                           fabs(-2222222222.222222), S21_EPSILON);
}
END_TEST

START_TEST(fabs_test_14) {
  ck_assert_ldouble_eq_tol(s21_fabs(-3333333333333.33333333333),
                           fabs(-3333333333333.33333333333), S21_EPSILON);
}
END_TEST

START_TEST(fabs_test_15) { ck_assert_ldouble_nan(s21_fabs(NAN)); }
END_TEST

START_TEST(fabs_test_16) { ck_assert_ldouble_nan(fabs(NAN)); }
END_TEST

START_TEST(fabs_test_17) { ck_assert_ldouble_nan(s21_fabs(-NAN)); }
END_TEST

START_TEST(fabs_test_18) { ck_assert_ldouble_nan(fabs(-NAN)); }
END_TEST

START_TEST(fabs_test_19) {
  ck_assert_ldouble_eq(s21_fabs(INFINITY), fabs(INFINITY));
}
END_TEST

START_TEST(fabs_test_20) {
  ck_assert_ldouble_eq(s21_fabs(-INFINITY), fabs(-INFINITY));
}
END_TEST

START_TEST(fabs_test_21) {
  ck_assert_ldouble_eq_tol(s21_fabs(1.7976931348623158e+308),
                           fabs(1.7976931348623158e+308), S21_EPSILON);
}
END_TEST

START_TEST(fabs_test_22) {
  ck_assert_ldouble_eq_tol(s21_fabs(2.2250738585072014e-308),
                           fabs(2.2250738585072014e-308), S21_EPSILON);
}
END_TEST

Suite *test_s21_fabs(void) {
  Suite *s = suite_create("\033[45m-=S21_FABS=-\033[0m");
  TCase *tc = tcase_create("s21_fabs_tc");

  tcase_add_test(tc, fabs_test_1);
  tcase_add_test(tc, fabs_test_2);
  tcase_add_test(tc, fabs_test_3);
  tcase_add_test(tc, fabs_test_4);
  tcase_add_test(tc, fabs_test_5);
  tcase_add_test(tc, fabs_test_6);
  tcase_add_test(tc, fabs_test_7);
  tcase_add_test(tc, fabs_test_8);
  tcase_add_test(tc, fabs_test_9);
  tcase_add_test(tc, fabs_test_10);
  tcase_add_test(tc, fabs_test_11);
  tcase_add_test(tc, fabs_test_12);
  tcase_add_test(tc, fabs_test_13);
  tcase_add_test(tc, fabs_test_14);
  tcase_add_test(tc, fabs_test_15);
  tcase_add_test(tc, fabs_test_16);
  tcase_add_test(tc, fabs_test_17);
  tcase_add_test(tc, fabs_test_18);
  tcase_add_test(tc, fabs_test_19);
  tcase_add_test(tc, fabs_test_20);
  tcase_add_test(tc, fabs_test_21);
  tcase_add_test(tc, fabs_test_22);

  suite_add_tcase(s, tc);
  return s;
}