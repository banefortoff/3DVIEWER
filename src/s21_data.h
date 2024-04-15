#ifdef __cplusplus

extern "C" {

#endif

#include "s21_matrix.h"
#include "s21_polygon.h"

typedef struct data {
  unsigned int count_vertexes;
  unsigned int count_facets;
  matrix_t matrix;
  polygon_t *polygon;
} data_t;

void constructor_data(data_t *data);

int get_data_obj(char *path_f, data_t *info);

void zpln_matrix(matrix_t *matrix, int *cur_c_v, int *full_c_v,
                 const char *txt);

polygon_t *zpln_poligon(polygon_t *poly, int *cur_c_f, int *full_c_f,
                        const int length, const char *txt);

#ifdef __cplusplus
}

#endif
