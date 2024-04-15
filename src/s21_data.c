#include "s21_data.h"

void constructor_data(data_t *data) {
  data->count_facets = 0;
  data->count_vertexes = 0;
  data->matrix.mas = NULL;
  data->matrix.rows = 0;
  data->matrix.columns = 0;
  data->polygon = NULL;
}

int get_data_obj(char *path, data_t *info) {
  int error = OK;

  FILE *fp = fopen(path, "r");

  if (fp) {
    char first_symbol = '\0', main_symbol = '\0';
    char main_txt[9000] = "\0";
    char first_txt[3] = "\0";

    // индексы для матрицы
    int current_count_vertexes = 1, full_count_vertexes = 2;

    // индексы для полигонов
    int current_count_facets = 0, full_count_facets = 2;
    int length_vertexes = 1;

    // индекс для текста с данными о вершинах или полигонах
    int i = 0;

    create_matrix(full_count_vertexes, COLUMNS, &info->matrix);
    create_main_polygon(&info->polygon, full_count_facets);

    info->matrix.min_max_x[0] = 100, info->matrix.min_max_x[1] = -100;
    info->matrix.min_max_y[0] = 100, info->matrix.min_max_y[1] = -100;
    info->matrix.min_max_z[0] = 100, info->matrix.min_max_z[1] = -100;

    while ((first_symbol = fgetc(fp)) != EOF) {
      if (first_symbol == 'v' || first_symbol == 'f') {
        first_txt[0] = first_symbol;
        first_txt[1] = fgetc(fp);

        // Обработка только нужных вершин и полигонов
        if (!strcmp(first_txt, "v ") || !strcmp(first_txt, "f ")) {
          memset(main_txt, '\0', i);
          i = 0;
          length_vertexes = 1;

          // Запись основного текста с данными о вершинах или полигонах
          while ((main_symbol = fgetc(fp)) != '\n') {
            if (main_symbol == EOF) break;
            main_txt[i++] += main_symbol;
            if (main_symbol == ' ') {
              length_vertexes++;
            }
          }

          // Запись вершин в матрицу
          if (!strcmp(first_txt, "v ")) {
            zpln_matrix(&info->matrix, &current_count_vertexes,
                        &full_count_vertexes, main_txt);
          } else if (!strcmp(first_txt, "f ")) {
            info->polygon =
                zpln_poligon(info->polygon, &current_count_facets,
                             &full_count_facets, length_vertexes, main_txt);

            length_vertexes = 1;
          }
        }
      }
    }

    for (int i = current_count_vertexes; i < full_count_vertexes; i++) {
      free(info->matrix.mas[i]);
    }

    info->matrix.rows = current_count_vertexes;
    info->count_vertexes = current_count_vertexes;
    info->count_facets = current_count_facets;
    center_matrix(&info->matrix);
  } else {
    error = FAIL;
  }

  return error;
}

void zpln_matrix(matrix_t *matrix, int *cur_c_v, int *full_c_v,
                 const char *txt) {
  if (*cur_c_v == *full_c_v) {
    *full_c_v *= 2;
    // увеличение кол-ва строк в матрице
    matrix->mas = (double **)realloc(matrix->mas, *full_c_v * sizeof(double *));
    for (int k = *cur_c_v; k < *full_c_v; k++) {
      matrix->mas[k] = calloc(COLUMNS, sizeof(double));
    }
  }

  sscanf(txt, "%lf %lf %lf", &matrix->mas[*cur_c_v][X],
         &matrix->mas[*cur_c_v][Y], &matrix->mas[*cur_c_v][Z]);

  if (matrix->mas[*cur_c_v][X] < matrix->min_max_x[0])
    matrix->min_max_x[0] = matrix->mas[*cur_c_v][X];
  if (matrix->mas[*cur_c_v][X] > matrix->min_max_x[1])
    matrix->min_max_x[1] = matrix->mas[*cur_c_v][X];
  if (matrix->mas[*cur_c_v][Y] < matrix->min_max_y[0])
    matrix->min_max_y[0] = matrix->mas[*cur_c_v][Y];
  if (matrix->mas[*cur_c_v][Y] > matrix->min_max_y[1])
    matrix->min_max_y[1] = matrix->mas[*cur_c_v][Y];
  if (matrix->mas[*cur_c_v][Z] < matrix->min_max_z[0])
    matrix->min_max_z[0] = matrix->mas[*cur_c_v][Z];
  if (matrix->mas[*cur_c_v][Z] > matrix->min_max_z[1])
    matrix->min_max_z[1] = matrix->mas[*cur_c_v][Z];

  *cur_c_v += 1;
}

polygon_t *zpln_poligon(polygon_t *poly, int *cur_c_f, int *full_c_f,
                        const int length, const char *txt) {
  char *buffer = NULL;
  if (*cur_c_f == *full_c_f) {
    *full_c_f *= 2;
    poly = (polygon_t *)realloc(poly, *full_c_f * sizeof(polygon_t));
  }

  poly[*cur_c_f].count_of_vertex = length;
  poly[*cur_c_f].vertexs = calloc(length, sizeof(int));
  int facets_v = 0;

  // Счетчик для массива внутри структуры
  int count_txt = 0, i = 0;

  while (txt[i++] != '\n') {
    if ((txt[count_txt] >= 48 && txt[count_txt] <= 57))
      sscanf(txt + count_txt, "%d", &poly[*cur_c_f].vertexs[facets_v++]);
    if ((buffer = strchr(txt + count_txt, ' ')) == NULL)
      break;
    else
      count_txt = buffer - txt + 1;
  }
  *cur_c_f += 1;
  return poly;
}