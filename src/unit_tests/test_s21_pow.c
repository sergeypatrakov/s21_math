#include "s21_math_test.h"

START_TEST(pow_test_1) {
  ck_assert_ldouble_eq_tol(s21_pow(0.12, 2.2), pow(0.12, 2.2), S21_EPSILON);
}
END_TEST

START_TEST(pow_test_2) {
  ck_assert_ldouble_eq_tol(s21_pow(15, 2.5), pow(15, 2.5), S21_EPSILON);
}
END_TEST

START_TEST(pow_test_3) {
  ck_assert_ldouble_eq_tol(s21_pow(8239751.123456789012345, 0.0001),
                           pow(8239751.123456789012345, 0.0001), S21_EPSILON);
}
END_TEST

START_TEST(pow_test_4) {
  ck_assert_ldouble_eq_tol(s21_pow(0, 0.0001), pow(0, 0.0001), S21_EPSILON);
}
END_TEST

START_TEST(pow_test_5) {
  ck_assert_ldouble_eq_tol(s21_pow(-2, 2), pow(-2, 2), S21_EPSILON);
}
END_TEST

START_TEST(pow_test_6) {
  ck_assert_ldouble_eq_tol(s21_pow(-2, 3), pow(-2, 3), S21_EPSILON);
}
END_TEST

START_TEST(pow_test_7) {
  ck_assert_ldouble_eq_tol(s21_pow(-2, -2), pow(-2, -2), S21_EPSILON);
}
END_TEST

START_TEST(pow_test_8) {
  ck_assert_ldouble_eq_tol(s21_pow(-2, -3), pow(-2, -3), S21_EPSILON);
}
END_TEST

START_TEST(pow_test_9) { ck_assert_ldouble_nan(s21_pow(S21_NAN, S21_NAN)); }
END_TEST

START_TEST(pow_test_10) { ck_assert_ldouble_nan(pow(S21_NAN, S21_NAN)); }
END_TEST

START_TEST(pow_test_11) {
  ck_assert_ldouble_eq(s21_pow(123.123, S21_INF_POS),
                       pow(123.123, S21_INF_POS));
}
END_TEST

START_TEST(pow_test_12) {
  ck_assert_ldouble_eq(s21_pow(S21_INF_POS, -1), pow(S21_INF_POS, -1));
}
END_TEST

START_TEST(pow_test_13) {
  ck_assert_ldouble_eq(s21_pow(S21_INF_POS, 1), pow(S21_INF_POS, 1));
}
END_TEST

START_TEST(pow_test_14) {
  ck_assert_ldouble_eq(s21_pow(123.123, -S21_INF_POS),
                       pow(123.123, -S21_INF_POS));
}
END_TEST

START_TEST(pow_test_15) {
  ck_assert_ldouble_eq(s21_pow(-123.123, -S21_INF_POS),
                       pow(-123.123, -S21_INF_POS));
}
END_TEST

START_TEST(pow_test_16) {
  ck_assert_ldouble_eq(s21_pow(-123.123, S21_INF_POS),
                       pow(-123.123, S21_INF_POS));
}
END_TEST

START_TEST(pow_test_17) {
  ck_assert_ldouble_eq(s21_pow(-S21_INF_POS, 1), pow(-S21_INF_POS, 1));
}
END_TEST

START_TEST(pow_test_18) {
  ck_assert_ldouble_eq(s21_pow(S21_INF_POS, 2), pow(S21_INF_POS, 2));
}
END_TEST

START_TEST(pow_test_19) {
  ck_assert_ldouble_eq(s21_pow(0.123, S21_INF_POS), pow(0.123, S21_INF_POS));
}
END_TEST

START_TEST(pow_test_20) {
  ck_assert_ldouble_eq(s21_pow(-1, -S21_INF_POS), pow(-1, -S21_INF_POS));
}
END_TEST

START_TEST(pow_test_21) {
  ck_assert_ldouble_eq_tol(s21_pow(S21_EPSILON, S21_EPSILON),
                           pow(S21_EPSILON, S21_EPSILON), S21_EPSILON);
}
END_TEST

START_TEST(pow_test_22) { ck_assert_ldouble_nan(s21_pow(-0.1, 0.1)); }
END_TEST

START_TEST(pow_test_23) { ck_assert_ldouble_nan(pow(-0.1, 0.1)); }
END_TEST

START_TEST(pow_test_24) { ck_assert_ldouble_eq(s21_pow(0, 0), pow(0, 0)); }
END_TEST

START_TEST(pow_test_25) { ck_assert_ldouble_eq(s21_pow(0, 1), pow(0, 1)); }
END_TEST

START_TEST(pow_test_26) {
  ck_assert_ldouble_eq(s21_pow(-1, S21_INF_POS), pow(-1, S21_INF_POS));
}
END_TEST

START_TEST(pow_test_27) {
  ck_assert_ldouble_eq(s21_pow(1, S21_INF_NEG), pow(1, S21_INF_NEG));
}
END_TEST

START_TEST(pow_test_28) {
  ck_assert_ldouble_eq(s21_pow(1, S21_INF_POS), pow(1, S21_INF_POS));
}
END_TEST

START_TEST(pow_test_29) {
  ck_assert_ldouble_eq(s21_pow(-S21_INF_POS, 1), pow(-S21_INF_POS, 1));
}
END_TEST

START_TEST(pow_test_30) { ck_assert_ldouble_eq(s21_pow(1, 1), pow(1, 1)); }
END_TEST

START_TEST(pow_test_31) { ck_assert_ldouble_eq(s21_pow(1, -1), pow(1, -1)); }
END_TEST

START_TEST(pow_test_32) {
  ck_assert_ldouble_eq(s21_pow(S21_INF_NEG, S21_INF_NEG),
                       pow(S21_INF_NEG, S21_INF_NEG));
}
END_TEST

Suite *test_s21_pow(void) {
  Suite *s = suite_create("\033[45m-=S21_POW=-\033[0m");
  TCase *tc = tcase_create("s21_pow_tc");

  tcase_add_test(tc, pow_test_1);
  tcase_add_test(tc, pow_test_2);
  tcase_add_test(tc, pow_test_3);
  tcase_add_test(tc, pow_test_4);
  tcase_add_test(tc, pow_test_5);
  tcase_add_test(tc, pow_test_6);
  tcase_add_test(tc, pow_test_7);
  tcase_add_test(tc, pow_test_8);
  tcase_add_test(tc, pow_test_9);
  tcase_add_test(tc, pow_test_10);
  tcase_add_test(tc, pow_test_11);
  tcase_add_test(tc, pow_test_12);
  tcase_add_test(tc, pow_test_13);
  tcase_add_test(tc, pow_test_14);
  tcase_add_test(tc, pow_test_15);
  tcase_add_test(tc, pow_test_16);
  tcase_add_test(tc, pow_test_17);
  tcase_add_test(tc, pow_test_18);
  tcase_add_test(tc, pow_test_19);
  tcase_add_test(tc, pow_test_20);
  tcase_add_test(tc, pow_test_21);
  tcase_add_test(tc, pow_test_22);
  tcase_add_test(tc, pow_test_23);
  tcase_add_test(tc, pow_test_24);
  tcase_add_test(tc, pow_test_25);
  tcase_add_test(tc, pow_test_26);
  tcase_add_test(tc, pow_test_27);
  tcase_add_test(tc, pow_test_28);
  tcase_add_test(tc, pow_test_29);
  tcase_add_test(tc, pow_test_30);
  tcase_add_test(tc, pow_test_31);
  tcase_add_test(tc, pow_test_32);

  suite_add_tcase(s, tc);
  return s;
}