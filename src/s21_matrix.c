#include "s21_matrix.h"

int create_matrix(int rows, int columns, matrix_t *result) {
  int error = OK;
  if (result) {
    result->mas = NULL;
    result->columns = 0;
    result->rows = 0;
  }
  if (rows < 1 || columns < 1) {
    error = FAIL;
  } else {
    if (result) {
      result->mas = NULL;
      result->columns = 0;
      result->rows = 0;
    }
    result->rows = rows;
    result->columns = columns;
    result->mas = calloc(rows, sizeof(double *));

    if (result->mas != NULL) {
      for (int i = 0; i < rows; i++) {
        result->mas[i] = calloc(columns, sizeof(double));
      }
      error = OK;
    } else {
      error = FAIL;
    }
  }
  return error;
}

void remove_matrix(matrix_t *A) {
  if (!A) return;
  if (A->mas) {
    for (int i = 0; i < A->rows; i++) {
      free(A->mas[i]);  //! lightang Дебагер показывает тут ошибку
    }
    free(A->mas);
  }
  A->rows = 0;
  A->columns = 0;
}

void center_matrix(matrix_t *A) {
  double center_x = 0, center_y = 0, center_z = 0;

  center_x = A->min_max_x[0] + (A->min_max_x[1] - A->min_max_x[0]) / 2;
  center_y = A->min_max_y[0] + (A->min_max_y[1] - A->min_max_y[0]) / 2;
  center_z = A->min_max_z[0] + (A->min_max_z[1] - A->min_max_z[0]) / 2;
  double absolute_max = max_scale(A);

  // Подгон объекта под диапазон (-1; 1)
  double scale = (0.5 - (0.5 * -1)) / absolute_max;

  for (int i = 1; i < A->rows; i++) {
    A->mas[i][X] -= center_x;
    A->mas[i][Y] -= center_y;
    A->mas[i][Z] -= center_z;
    A->mas[i][X] *= scale;
    A->mas[i][Y] *= scale;
    A->mas[i][Z] *= scale;
  }
}

double max_scale(matrix_t *A) {
  double max_x = A->min_max_x[1] - A->min_max_x[0];
  double max_y = A->min_max_y[1] - A->min_max_y[0];
  double max_z = A->min_max_z[1] - A->min_max_z[0];
  double absolute_max = 0;

  if (max_x > max_y) {
    if (max_x > max_z) {
      absolute_max = max_x;
    } else {
      absolute_max = max_z;
    }
  } else if (max_y > max_z) {
    absolute_max = max_y;
  } else {
    absolute_max = max_z;
  }
  return absolute_max;
}
