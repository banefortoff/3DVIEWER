#include "s21_polygon.h"

int create_main_polygon(polygon_t **polygon, int count) {
  int error = OK;

  if (count < 1) {
    error = FAIL;
  } else {
    *polygon = calloc(count, sizeof(polygon_t));
    for (int i = 0; i < count; i++) {
      (*polygon)[i].vertexs = NULL;
      (*polygon)[i].count_of_vertex = 0;
    }
  }

  return error;
}

void remove_polygon(polygon_t **polygon, int count) {
  if (*polygon) {
    for (int i = 0; i < count; i++) {
      free((*polygon)[i].vertexs);
    }
    free(*polygon);  //! lightang Дебагер ругается тут
    *polygon = NULL;
  }
}
