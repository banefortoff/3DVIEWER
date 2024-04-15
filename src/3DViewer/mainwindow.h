#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <glu.h>
#include <stdio.h>

#include <QColorDialog>
#include <QFileDialog>
#include <QFileInfo>
#include <QMainWindow>
#include <QMessageBox>
#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <QtOpenGL>
#include <QtOpenGLWidgets/QtOpenGLWidgets>
#include <cstdint>
#include <vector>

// gif lightang
// #include "src/gifimage/qgifimage.h"
#include <QDebug>
#include <QGuiApplication>
#include <QImage>
#include <QPainter>

#include "qgifimage.h"
// end gif lightang

#include "../s21_data.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MyGLWidget : public QOpenGLWidget {
  Q_OBJECT

 public:
  MyGLWidget(QWidget *parent = nullptr);

  float rV = 0.0f, gV = 0.0f, bV = 0.0f;
  float rP = 0.0f, gP = 0.0f, bP = 0.0f;
  float rF = 1.0f, gF = 1.0f, bF = 1.0f;

  data_t info;
  QString fileName;
  int flag_read = 0;

  int flag_type_v = 2;
  int flag_type_p = 1;

  GLfloat Vert_size = 3.0f;
  GLfloat Poly_size = 1.0f;

  double edit_num_scale = 1.1;
  double edit_num_turn = 0.25;
  double edit_num_sdvig = 0.25;

  QString fileName_save = "";

  int progetction_type = 1;

 protected:
  //   void initializeGL() override;
  //   void resizeGL(int w, int h) override;
  void paintGL() override;

  void mousePressEvent(QMouseEvent *event) override;
  void mouseMoveEvent(QMouseEvent *event) override;

 private:
  int xRot;
  int yRot;
  int zRot;
  QPoint lastPos;

  void normalizeAngle(int &angle);

  void drawAxes();
  void drawGrid();

 public slots:
  void setXRotation(int angle);
  void setYRotation(int angle);
  void setZRotation(int angle);

  void paintPoly();
  void paintVert();
};

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 public slots:
  void sdvig();
  void turn();
  void scale();

  void choose_color();
  void choose_type_v();
  void choose_size_v();

  void choose_size_p();
  void choose_type_p();

  void choose_type_proj();

 private slots:
  void on_action_triggered();

  void on_action_2_triggered();

  void on_action_3_triggered();

  void on_recordButton_screen_clicked();

  void on_recordButton_gif_clicked();

  void createGif();

 private:
  Ui::MainWindow *ui;
  MyGLWidget *myGLWidget;
  QGifImage *gif;
  QTimer *gif_timer;
};
#endif  // MAINWINDOW_H
