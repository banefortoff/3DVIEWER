#include <check.h>

#include "s21_data.h"
#include "s21_matrix.h"
#include "s21_polygon.h"

START_TEST(t1_get_data_obj) {
  int error = OK;
  data_t info = {0};
  constructor_data(&info);
  char strTest[] = {"test.file"};
  error = get_data_obj(strTest, &info);
  move_x(&info.matrix, 1.0);
  move_y(&info.matrix, 1.0);
  move_z(&info.matrix, 1.0);
  rotation_by_ox(&info.matrix, 1.0);
  rotation_by_oy(&info.matrix, 1.0);
  rotation_by_oz(&info.matrix, 1.0);
  move_scale(&info.matrix, 1.0);
  move_scale(&info.matrix, -1.0);
  remove_matrix(&info.matrix);
  remove_polygon(&info.polygon, info.count_vertexes);
  ck_assert_int_eq(error, OK);
}
END_TEST

START_TEST(t2_get_data_obj) {
  int error = OK;
  data_t info = {0};
  char strTest1[] = {"test.file1"};
  error = get_data_obj(strTest1, &info);
  remove_matrix(&info.matrix);
  remove_polygon(&info.polygon, info.count_vertexes);
  ck_assert_int_eq(error, FAIL);
}
END_TEST

int main(void) {
  Suite* viewer = suite_create("viewer");
  SRunner* sr = srunner_create(viewer);

  TCase* tc_get_data_obj = tcase_create("get_data_obj");

  suite_add_tcase(viewer, tc_get_data_obj);
  tcase_add_test(tc_get_data_obj, t1_get_data_obj);
  tcase_add_test(tc_get_data_obj, t2_get_data_obj);

  srunner_run_all(sr, CK_ENV);
  int nf = srunner_ntests_failed(sr);
  srunner_free(sr);
  return nf;
}
