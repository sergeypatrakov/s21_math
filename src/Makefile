CC= gcc
# CC= gcc -arch x86_64 #for MacBook with M1
CFLAGS= -Wall -Werror -Wextra -std=c11

MATH= ./functions/s21_*.c
OBJECTS= *.o

TEST= ./unit_tests/test_*.c ./unit_tests/s21_math_test.c
TEST_FLAGS = -lcheck -lpthread -lm

CLANG= clang-format

.PHONY: all clean test gcov_report

OS:=$(shell uname -s)
ifeq ($(OS), Linux)
	TEST_FLAGS += -lsubunit -lrt
endif

all: s21_math.a test gcov_report

s21_math.a:
	$(CC) $(CFLAGS) -c $(MATH)
	ar rcs s21_math.a $(OBJECTS)

test: s21_math.a
	$(CC) $(CFLAGS) $(MATH) $(TEST) s21_math.a $(TEST_FLAGS) -o test
	./test

clean:
	rm -rf *.o *.a test *.gch *.gcno *.gcda *.info report

# brew:
# 	curl -fsSL https://rawgit.com/kube/42homebrew/master/install.sh | zsh
# 	brew install lcov

gcov_report: s21_math.a
	$(CC) $(CFLAGS) --coverage $(MATH) $(TEST) $(TEST_FLAGS) -o test 
	./test
	lcov -t "test" -o test_report.info -c -d .
	genhtml -o report test_report.info
	open report/index.html
	rm -rf *.o *.a  *.gch *.gcno test

clang_n:
	$(CLANG) -style=Google -n *.[ch]

clang_i:
	$(CLANG) -style=Google -i *.[ch]
