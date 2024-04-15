#ifdef __cplusplus

extern "C" {

#endif

#ifndef S21_POLYGON_H
#define S21_POLYGON_H

#include "s21_matrix.h"

typedef struct s21_polygon {
  int *vertexs;
  int count_of_vertex;
} polygon_t;

int create_main_polygon(polygon_t **polygon, int count);

void remove_polygon(polygon_t **polygon, int count);

#endif

#ifdef __cplusplus
}

#endif
