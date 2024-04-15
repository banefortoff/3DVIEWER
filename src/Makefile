GCC = gcc
FLAGS = -Wall -Werror -Wextra -std=c11
DEBUG = -g
EXEC = main.c
SRCS = s21_data.c s21_matrix.c s21_move.c s21_polygon.c
SRCS_H = s21_data.h s21_matrix.h s21_polygon.h
CHECK_LIBS = -lcheck
COVERAGE = --coverage
TEST = test.c

ifeq ($(OS), Linux)
	CHECK_LIBS += -lm -lsubunit
endif

all: clean install test

run:
	$(GCC) $(FLAGS) $(EXEC) $(SRCS) -lm
	time ./a.out

build:
	mkdir build
	cd ./build/ && qmake6 ../3DViewer && make && mv 3DViewer.app s21_3D_Viewer.app

install: build
	mkdir $(HOME)/Desktop/3DViewer
	cp -rf build/s21_3D_Viewer.app $(HOME)/Desktop/3DViewer

unistall:
	rm -rf $(HOME)/Desktop/3DViewer

dvi:
	open dvi.md

dist:
	tar -cvzf 3DViewer.tar.gz 3DViewer $(SRCS) $(SRCS_H) $(TEST) 

compile:
	$(GCC) $(FLAGS) $(SRCS) $(TEST) -o test $(CHECK_LIBS) $(COVERAGE)

tests: compile
	./test
	rm -rf *.gcda *.gcno

lint:
	clang-format -style=Google -n *.c *.h

gcov_report: clean compile
	./test
	lcov -t "gcov" -o gcov.info -c -d .
	genhtml -o report gcov.info 
	open ./report/index.html

clang:
	clang-format -style=Google -i *.c *.h

leak:
	CK_FORK=no leaks --atExit -- ./test

clean: 
	rm -rf a.out test
	rm -rf *.o *.a
	rm -rf report build
	rm -rf *.gcda *.gcno *.out *.info *.tar.gz
