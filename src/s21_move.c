#include "s21_matrix.h"

void move_x(matrix_t *A, double a) {
  A->x += a;
  for (int i = 1; i < A->rows; i++) A->mas[i][X] += a;
}
void move_y(matrix_t *A, double a) {
  A->y += a;
  for (int i = 0; i < A->rows; i++) A->mas[i][Y] += a;
}
void move_z(matrix_t *A, double a) {
  A->z += a;
  for (int i = 0; i < A->rows; i++) A->mas[i][Z] += a;
}

void rotation_by_ox(matrix_t *A, double angle) {
  double sin_n = sin(angle);
  double cos_n = cos(angle);
  for (int i = 0; i < A->rows; i++) {
    A->mas[i][Y] -= A->y;
    A->mas[i][Z] -= A->z;
    double temp_y = A->mas[i][Y];
    double temp_z = A->mas[i][Z];
    A->mas[i][Y] = temp_y * cos_n - temp_z * sin_n;
    A->mas[i][Z] = temp_y * sin_n + temp_z * cos_n;
    A->mas[i][Y] += A->y;
    A->mas[i][Z] += A->z;
  }
}

void rotation_by_oy(matrix_t *A, double angle) {
  double sin_n = sin(angle);
  double cos_n = cos(angle);
  for (int i = 0; i < A->rows; i++) {
    A->mas[i][X] -= A->x;
    A->mas[i][Z] -= A->z;
    double temp_x = A->mas[i][X];
    double temp_z = A->mas[i][Z];
    A->mas[i][X] = cos_n * temp_x + sin_n * temp_z;
    A->mas[i][Z] = (-sin_n) * temp_x + cos_n * temp_z;
    A->mas[i][X] += A->x;
    A->mas[i][Z] += A->z;
  }
}

void rotation_by_oz(matrix_t *A, double angle) {
  double sin_n = sin(angle);
  double cos_n = cos(angle);
  for (int i = 0; i < A->rows; i++) {
    A->mas[i][X] -= A->x;
    A->mas[i][Y] -= A->y;
    double temp_x = A->mas[i][X];
    double temp_y = A->mas[i][Y];
    A->mas[i][X] = cos_n * temp_x - temp_y * sin_n;
    A->mas[i][Y] = sin_n * temp_x + cos_n * temp_y;
    A->mas[i][X] += A->x;
    A->mas[i][Y] += A->y;
  }
}

void move_scale(matrix_t *A, double scale) {
  if (scale > 0) {
    for (int i = 0; i < A->rows; i++) {
      A->mas[i][X] = A->mas[i][X] * scale;
      A->mas[i][Y] = A->mas[i][Y] * scale;
      A->mas[i][Z] = A->mas[i][Z] * scale;
    }
  } else if (scale < 0) {
    for (int i = 0; i < A->rows; i++) {
      A->mas[i][X] = A->mas[i][X] / -scale;
      A->mas[i][Y] = A->mas[i][Y] / -scale;
      A->mas[i][Z] = A->mas[i][Z] / -scale;
    }
  }
}