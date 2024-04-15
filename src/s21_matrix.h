#ifdef __cplusplus

extern "C" {

#endif

#ifndef S21_MATRIX_H
#define S21_MATRIX_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 1
#define FAIL 0

#define COLUMNS 3

#define X 0
#define Y 1
#define Z 2

typedef struct matrix_struct {
  double **mas;
  double min_max_x[2];
  double min_max_y[2];
  double min_max_z[2];
  double x, y, z;
  int rows;
  int columns;
} matrix_t;

int create_matrix(int rows, int columns, matrix_t *result);

void remove_matrix(matrix_t *A);

void center_matrix(matrix_t *A);

double max_scale(matrix_t *A);

void move_x(matrix_t *A, double a);  //* Перемещение по оси х

void move_y(matrix_t *A, double a);  //* Перемещение по оси y

void move_z(matrix_t *A, double a);  //* Перемещение по оси z

void rotation_by_ox(matrix_t *A, double angle);  //* Поворот по оси оХ
void rotation_by_oy(matrix_t *A, double angle);  //* Поворот по оси оY
void rotation_by_oz(matrix_t *A, double angle);  //* Поворот по оси оZ

void move_scale(matrix_t *A, double scale);  //* Масштаб
void blinchik(matrix_t *A, double angle);

#endif

#ifdef __cplusplus
}

#endif
