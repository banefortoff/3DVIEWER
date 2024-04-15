#include "mainwindow.h"

#include "ui_mainwindow.h"
// gif lightang
#include "qgifimage.h"  // библиотека для создания gif файла
// #include <chrono> // библиотека для задержки цикла
// #include <thread> // библиотека для задержки цикла
#include <unistd.h>  // библиотека для задержки цикла

#include <ctime>     // библиотека для задержки цикла
#include <iostream>  // библиотека для задержки цикла
// end gif lightang

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  ui->lineEdit_sdvig->setValidator(new QDoubleValidator(0, 100, 2));
  ui->lineEdit_turn->setValidator(new QDoubleValidator(0, 100, 2));
  ui->lineEdit_scale->setValidator(new QDoubleValidator(0, 100, 2));

  connect(ui->pushButton_sdvig_plus, SIGNAL(clicked()), this, SLOT(sdvig()));
  connect(ui->pushButton_sdvig_minus, SIGNAL(clicked()), this, SLOT(sdvig()));

  connect(ui->pushButton_turn_plus, SIGNAL(clicked()), this, SLOT(turn()));
  connect(ui->pushButton_turn_minus, SIGNAL(clicked()), this, SLOT(turn()));

  connect(ui->pushButton_scale_plus, SIGNAL(clicked()), this, SLOT(scale()));
  connect(ui->pushButton_scale_minus, SIGNAL(clicked()), this, SLOT(scale()));

  connect(ui->colorButton_v, SIGNAL(clicked()), this, SLOT(choose_color()));
  connect(ui->colorButton_p, SIGNAL(clicked()), this, SLOT(choose_color()));
  connect(ui->colorButton_f, SIGNAL(clicked()), this, SLOT(choose_color()));

  connect(ui->v_type_Button_s, SIGNAL(clicked()), this, SLOT(choose_type_v()));
  connect(ui->v_type_Button_c, SIGNAL(clicked()), this, SLOT(choose_type_v()));
  connect(ui->v_type_Button_n, SIGNAL(clicked()), this, SLOT(choose_type_v()));

  connect(ui->p_type_Button_s, SIGNAL(clicked()), this, SLOT(choose_type_p()));
  connect(ui->p_type_Button_d, SIGNAL(clicked()), this, SLOT(choose_type_p()));

  connect(ui->pushButton_vertex_size_minus, SIGNAL(clicked()), this,
          SLOT(choose_size_v()));
  connect(ui->pushButton_vertex_size_plus, SIGNAL(clicked()), this,
          SLOT(choose_size_v()));

  connect(ui->pushButton_poly_size_minus, SIGNAL(clicked()), this,
          SLOT(choose_size_p()));
  connect(ui->pushButton_poly_size_plus, SIGNAL(clicked()), this,
          SLOT(choose_size_p()));

  connect(ui->typeButton_parallel, SIGNAL(clicked()), this,
          SLOT(choose_type_proj()));
  connect(ui->typeButton_central, SIGNAL(clicked()), this,
          SLOT(choose_type_proj()));
  gif_timer = new QTimer;
  connect(gif_timer, SIGNAL(timeout()), this, SLOT(createGif()));
  //  connect(createGif, &QPushButton::clicked, this, &MainWindow::createGif);

  myGLWidget = ui->openGLWidget_1;
}

MainWindow::~MainWindow() {
  remove_matrix(&myGLWidget->info.matrix);
  remove_polygon(&myGLWidget->info.polygon, myGLWidget->info.count_facets);
  delete ui;
}

MyGLWidget::MyGLWidget(QWidget *parent) : QOpenGLWidget(parent) {
  xRot = 0;
  yRot = 0;
  zRot = 0;
}

// void MyGLWidget::initializeGL() {}

// void MyGLWidget::resizeGL(int w, int h) {
//   // qDebug() << "resizeGL called with w =" << w << "and h =" << h;
// }

void MyGLWidget::paintGL() {
  // Отрисовка содержимого виджета
  glEnable(GL_DEPTH_TEST);
  glMatrixMode(GL_PROJECTION);

  glLoadIdentity();
  if (progetction_type == 2) {  // центральная проекция
    gluPerspective(45, 16.0 / 9.0, 0.5, 100);
  }

  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  // Установка белого цвета фона
  glClearColor(rF, gF, bF, 1.0f);

  // Очистка буфера цвета и глубины
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  glPushMatrix();

  glRotatef(xRot / 16.0f, 1.0f, 0.0f, 0.0f);
  glRotatef(yRot / 16.0f, 0.0f, 1.0f, 0.0f);
  glRotatef(zRot / 16.0f, 0.0f, 0.0f, 1.0f);

  drawGrid();
  // drawAxes();

  paintPoly();
  paintVert();

  glPopMatrix();
}

void MyGLWidget::drawAxes() {
  // Начало отрисовки осей координат

  glDisable(GL_LINE_STIPPLE);  // отключение режима пунктира

  // glLineWidth(5.0f);
  glBegin(GL_LINES);

  // Ось X (красная)
  glColor3f(1.0f, 0.0f, 0.0f);
  glVertex3f(0.0f, 0.0f, 0.0f);
  glVertex3f(1.0f, 0.0f, 0.0f);

  // Ось Y (зеленая)
  glColor3f(0.0f, 1.0f, 0.0f);
  glVertex3f(0.0f, 0.0f, 0.0f);
  glVertex3f(0.0f, 1.0f, 0.0f);

  // Ось Z (синяя)
  glColor3f(0.0f, 0.0f, 1.0f);
  glVertex3f(0.0f, 0.0f, 0.0f);
  glVertex3f(0.0f, 0.0f, 1.0f);

  glEnd();
  // Конец отрисовки осей координат
}

// отрисовка сетки
void MyGLWidget::drawGrid() {
  glDisable(GL_LINE_STIPPLE);  // отключение режима пунктира

  // Начало отрисовки сетки
  glBegin(GL_LINES);

  // Размер сетки и шаг между линиями
  float size = 10.0f;
  float step = 1.0f;

  // Отрисовка большой сетки
  glColor3f(0.3f, 0.3f, 0.3f);  // Более темный цвет для большой сетки
  glLineWidth(1.2f);  // Большая толщина линий для большой сетки
  for (float i = -size; i <= size; i += step) {
    glVertex3f(i, -0.5f, -size);
    glVertex3f(i, -0.5f, size);
    glVertex3f(-size, -0.5f, i);
    glVertex3f(size, -0.5f, i);
  }

  // Отрисовка меньшей сетки
  glColor3f(0.7f, 0.7f, 0.7f);  // Более светлый цвет для меньшей сетки
  glLineWidth(1.0f);  // Меньшая толщина линий для меньшей сетки
  float smallStep = step / 10;  // Шаг между линиями для меньших квадратов
  for (float i = -size; i <= size; i += smallStep) {
    if (i != int(i)) {  // Пропуск линий большой сетки
      glVertex3f(i, -0.5f, -size);
      glVertex3f(i, -0.5f, size);
      glVertex3f(-size, -0.5f, i);
      glVertex3f(size, -0.5f, i);
    }
  }

  glEnd();
  // Конец отрисовки сетки
}

// управление мышью
void MyGLWidget::mousePressEvent(QMouseEvent *event) { lastPos = event->pos(); }

void MyGLWidget::mouseMoveEvent(QMouseEvent *event) {
  if (event->buttons() & Qt::LeftButton) {
    int dx = event->x() - lastPos.x();
    int dy = event->y() - lastPos.y();
    setXRotation(xRot + dy);
    setYRotation(yRot + dx);
  }
  lastPos = event->pos();
}

void MyGLWidget::setXRotation(int angle) {
  normalizeAngle(angle);
  if (angle != xRot) {
    xRot = angle;
    update();
  }
}

void MyGLWidget::setYRotation(int angle) {
  normalizeAngle(angle);
  if (angle != yRot) {
    yRot = angle;
    update();
  }
}

void MyGLWidget::setZRotation(int angle) {
  normalizeAngle(angle);
  if (angle != zRot) {
    zRot = angle;
    update();
  }
}

void MyGLWidget::normalizeAngle(int &angle) {
  while (angle < 0) angle += 360 * 16;
  while (angle > 360 * 16) angle -= 360 * 16;
}

// Загрузка файлов
void MainWindow::on_action_triggered() {
  if (!ui->label_name->text().isEmpty()) {
    myGLWidget->info.matrix.x = 0;
    myGLWidget->info.matrix.y = 0;
    myGLWidget->info.matrix.z = 0;
    remove_matrix(&myGLWidget->info.matrix);
    remove_polygon(&myGLWidget->info.polygon, myGLWidget->info.count_facets);
  }
  constructor_data(&myGLWidget->info);

  myGLWidget->fileName = QFileDialog::getOpenFileName(
      this, tr("Open File"), "/home", tr("Files (*.obj)"));
  if (!myGLWidget->fileName.isEmpty()) {
    // Загрузка файла
    QString file_name = QFileInfo(myGLWidget->fileName).fileName();
    ui->label_name->setText(file_name);
    myGLWidget->flag_read = 1;

    char path[255] = "\0";
    std::string str_filename = myGLWidget->fileName.toStdString();
    strlcpy(path, str_filename.c_str(), str_filename.length() + 1);

    get_data_obj(path, &myGLWidget->info);

    QString count_vertexes = QString::number(myGLWidget->info.count_vertexes);
    QString count_facets = QString::number(myGLWidget->info.count_facets);

    ui->label_vertex->setText(count_vertexes);
    ui->label_polygons->setText(count_facets);
  }
}

// перемещение модели
void MainWindow::sdvig() {
  if (ui->radioButton_sdvig_x->isChecked() ||
      ui->radioButton_sdvig_y->isChecked() ||
      ui->radioButton_sdvig_z->isChecked()) {
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    QString edit_text = ui->lineEdit_sdvig->text();
    double edit_num;
    if (edit_text.contains(",")) {
      QString result = edit_text;
      result.replace(',', '.');
      edit_num = result.toDouble();
    } else {
      edit_num = ui->lineEdit_sdvig->text().toDouble();
    }
    if (ui->radioButton_sdvig_x->isChecked() &&
        button == ui->pushButton_sdvig_plus) {
      move_x(&myGLWidget->info.matrix, edit_num);
    } else if (ui->radioButton_sdvig_x->isChecked() &&
               button == ui->pushButton_sdvig_minus) {
      move_x(&myGLWidget->info.matrix, -edit_num);
    } else if (ui->radioButton_sdvig_y->isChecked() &&
               button == ui->pushButton_sdvig_plus) {
      move_y(&myGLWidget->info.matrix, edit_num);
    } else if (ui->radioButton_sdvig_y->isChecked() &&
               button == ui->pushButton_sdvig_minus) {
      move_y(&myGLWidget->info.matrix, -edit_num);
    } else if (ui->radioButton_sdvig_z->isChecked() &&
               button == ui->pushButton_sdvig_plus) {
      move_z(&myGLWidget->info.matrix, edit_num);
    } else {
      move_z(&myGLWidget->info.matrix, -edit_num);
    }
    myGLWidget->update();
  }
}

// поворот модели
void MainWindow::turn() {
  if (ui->radioButton_turn_x->isChecked() ||
      ui->radioButton_turn_y->isChecked() ||
      ui->radioButton_turn_z->isChecked()) {
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    QString edit_text = ui->lineEdit_turn->text();
    double edit_num;
    if (edit_text.contains(",")) {
      QString result = edit_text;
      result.replace(',', '.');
      edit_num = result.toDouble();
    } else {
      edit_num = ui->lineEdit_turn->text().toDouble();
    }
    if (ui->radioButton_turn_x->isChecked() &&
        button == ui->pushButton_turn_plus) {
      rotation_by_ox(&myGLWidget->info.matrix, edit_num);
    } else if (ui->radioButton_turn_x->isChecked() &&
               button == ui->pushButton_turn_minus) {
      rotation_by_ox(&myGLWidget->info.matrix, -edit_num);
    } else if (ui->radioButton_turn_y->isChecked() &&
               button == ui->pushButton_turn_plus) {
      rotation_by_oy(&myGLWidget->info.matrix, edit_num);
    } else if (ui->radioButton_turn_y->isChecked() &&
               button == ui->pushButton_turn_minus) {
      rotation_by_oy(&myGLWidget->info.matrix, -edit_num);
    } else if (ui->radioButton_turn_z->isChecked() &&
               button == ui->pushButton_turn_plus) {
      rotation_by_oz(&myGLWidget->info.matrix, edit_num);
    } else if (ui->radioButton_turn_z->isChecked() &&
               button == ui->pushButton_turn_minus) {
      rotation_by_oz(&myGLWidget->info.matrix, -edit_num);
    }
    myGLWidget->update();
  }
}

// масштаб модели
void MainWindow::scale() {
  QPushButton *button = qobject_cast<QPushButton *>(sender());

  QString edit_text = ui->lineEdit_scale->text();
  double edit_num;
  if (edit_text.contains(",")) {
    QString result = edit_text;
    result.replace(',', '.');
    edit_num = result.toDouble();
  } else {
    edit_num = ui->lineEdit_scale->text().toDouble();
  }
  if (button == ui->pushButton_scale_plus) {
    move_scale(&myGLWidget->info.matrix, edit_num);
  } else if (button == ui->pushButton_scale_minus) {
    move_scale(&myGLWidget->info.matrix, -edit_num);
  }
  myGLWidget->update();
}

// выбор цвета
void MainWindow::choose_color() {
  QColor color = QColorDialog::getColor(Qt::white, this);
  QPushButton *button = qobject_cast<QPushButton *>(sender());

  if (color.isValid()) {
    if (button == ui->colorButton_v) {
      myGLWidget->rV = color.redF();
      myGLWidget->gV = color.greenF();
      myGLWidget->bV = color.blueF();
    } else if (button == ui->colorButton_p) {
      myGLWidget->rP = color.redF();
      myGLWidget->gP = color.greenF();
      myGLWidget->bP = color.blueF();
    } else if (button == ui->colorButton_f) {
      myGLWidget->rF = color.redF();
      myGLWidget->gF = color.greenF();
      myGLWidget->bF = color.blueF();
    }

    myGLWidget->update();
  }
}

// выбор типа вершин
void MainWindow::choose_type_v() {
  QPushButton *button = qobject_cast<QPushButton *>(sender());

  if (button == ui->v_type_Button_s) {
    myGLWidget->flag_type_v = 1;
  } else if (button == ui->v_type_Button_c) {
    myGLWidget->flag_type_v = 2;
  } else if (button == ui->v_type_Button_n) {
    myGLWidget->flag_type_v = 3;
  }

  myGLWidget->update();
}

// выбор типа рёбер
void MainWindow::choose_type_p() {
  QPushButton *button = qobject_cast<QPushButton *>(sender());

  if (button == ui->p_type_Button_s) {
    myGLWidget->flag_type_p = 1;
  } else if (button == ui->p_type_Button_d) {
    myGLWidget->flag_type_p = 2;
  }

  myGLWidget->update();
}

// выбор размера вершины
void MainWindow::choose_size_v() {
  QPushButton *button = qobject_cast<QPushButton *>(sender());

  if (button == ui->pushButton_vertex_size_plus) {
    myGLWidget->Vert_size += 1.0f;
  } else if (button == ui->pushButton_vertex_size_minus) {
    if (myGLWidget->Vert_size != 1.0f) {
      myGLWidget->Vert_size -= 1.0f;
    }
  }

  QString label_text = QString::number(myGLWidget->Vert_size);
  ui->label_vertex_2->setText(label_text);

  myGLWidget->update();
}

// выбор размера ребра
void MainWindow::choose_size_p() {
  QPushButton *button = qobject_cast<QPushButton *>(sender());

  if (button == ui->pushButton_poly_size_plus) {
    myGLWidget->Poly_size += 1.0f;
  } else if (button == ui->pushButton_poly_size_minus) {
    if (myGLWidget->Poly_size != 1.0f) {
      myGLWidget->Poly_size -= 1.0f;
    }
  }

  QString label_text = QString::number(myGLWidget->Poly_size);
  ui->label_poly_size->setText(label_text);

  myGLWidget->update();
}

// выбор типа проекции
void MainWindow::choose_type_proj() {
  QPushButton *button = qobject_cast<QPushButton *>(sender());

  if (button == ui->typeButton_parallel) {
    myGLWidget->progetction_type = 1;
  } else if (button == ui->typeButton_central) {
    myGLWidget->progetction_type = 2;
  }

  myGLWidget->update();
}

// отрисовка рёбер
void MyGLWidget::paintPoly() {
  if (!fileName.isEmpty()) {
    glColor3f(rP, gP, bP);
    glLineWidth(Poly_size);

    if (flag_type_p == 2) {
      glEnable(GL_LINE_STIPPLE);  // включение режима пунктира
      glLineStipple(1, 0x00F0);  // установка шаблона пунктира
    } else if (flag_type_p == 1) {
      glDisable(GL_LINE_STIPPLE);  // отключение режима пунктира
    }

    int index = 0;
    for (unsigned int i = 0; i < info.count_facets; i++) {
      for (int j = 0; j < info.polygon[i].count_of_vertex; j++) {
        glBegin(GL_LINE_LOOP);
        index = info.polygon[i].vertexs[j];
        glVertex3d(info.matrix.mas[index][X], info.matrix.mas[index][Y],
                   info.matrix.mas[index][Z]);
      }
      glEnd();
    }
  }
}

// отрисовка вершин
void MyGLWidget::paintVert() {
  if (!fileName.isEmpty()) {
    if (flag_type_v != 3) {
      for (unsigned int i = 1; i < info.count_vertexes; i++) {
        glEnable(GL_BLEND);
        if (flag_type_v == 2) {
          glEnable(GL_POINT_SMOOTH);  // круг
        } else if (flag_type_v == 1) {
          glDisable(GL_POINT_SMOOTH);  // квадрат
        }

        glColor3f(rV, gV, bV);

        glPointSize(Vert_size);

        glBegin(GL_POINTS);
        glVertex3d(info.matrix.mas[i][X], info.matrix.mas[i][Y],
                   info.matrix.mas[i][Z]);
        glEnd();
      }
    }
  }
}

// сохранение настроек
void MainWindow::on_action_2_triggered() {
  QString currentDirPath = QCoreApplication::applicationDirPath();
  int index = currentDirPath.indexOf("/3DViewer");
  if (index != -1) {
    currentDirPath = currentDirPath.left(index + 9);
  }
  currentDirPath.push_back("/conf.txt");
  std::string str_path = currentDirPath.toStdString();
  char char_path[255] = "\0";
  strlcpy(char_path, str_path.c_str(), str_path.length() + 1);

  FILE *file = fopen(char_path, "w+");

  if (file) {
    // сдвиг, масштаб, поворот
    fprintf(file, "%lf\n", myGLWidget->edit_num_sdvig);
    fprintf(file, "%lf\n", myGLWidget->edit_num_scale);
    fprintf(file, "%lf\n", myGLWidget->edit_num_turn);

    // цвета
    fprintf(file, "%f\n", myGLWidget->rV);
    fprintf(file, "%f\n", myGLWidget->gV);
    fprintf(file, "%f\n", myGLWidget->bV);
    fprintf(file, "%f\n", myGLWidget->rP);
    fprintf(file, "%f\n", myGLWidget->gP);
    fprintf(file, "%f\n", myGLWidget->bP);
    fprintf(file, "%f\n", myGLWidget->rF);
    fprintf(file, "%f\n", myGLWidget->gF);
    fprintf(file, "%f\n", myGLWidget->bF);

    // тип вершин рёбер
    fprintf(file, "%d\n", myGLWidget->flag_type_v);
    fprintf(file, "%d\n", myGLWidget->flag_type_p);

    // размер вершин, рёбер
    fprintf(file, "%f\n", myGLWidget->Vert_size);
    fprintf(file, "%f\n", myGLWidget->Poly_size);

    // тип проекции
    fprintf(file, "%d\n", myGLWidget->progetction_type);

    QMessageBox::information(this, tr("Настройки"),
                             tr("Файл с настройками успешно сохранён"));

  } else {
    // perror("Ошибка при закрытии файла");
    QMessageBox::information(this, tr("Настройки"),
                             tr("Файл с настройками не удалось сохранить"));
  }
  fclose(file);
}

// загрузка настроек
void MainWindow::on_action_3_triggered() {
  QString currentDirPath = QCoreApplication::applicationDirPath();
  int index = currentDirPath.indexOf("/3DViewer");
  if (index != -1) {
    currentDirPath = currentDirPath.left(index + 9);
  }
  currentDirPath.push_back("/conf.txt");
  std::string str_path = currentDirPath.toStdString();
  char char_path[255] = "\0";
  strlcpy(char_path, str_path.c_str(), str_path.length() + 1);

  FILE *file = fopen(char_path, "r");

  if (file) {
    // сдвиг, масштаб, поворот
    fscanf(file, "%lf\n", &myGLWidget->edit_num_sdvig);
    fscanf(file, "%lf\n", &myGLWidget->edit_num_scale);
    fscanf(file, "%lf\n", &myGLWidget->edit_num_turn);
    ui->lineEdit_sdvig->setText(QString::number(myGLWidget->edit_num_sdvig));
    ui->lineEdit_scale->setText(QString::number(myGLWidget->edit_num_scale));
    ui->lineEdit_turn->setText(QString::number(myGLWidget->edit_num_turn));

    // цвета
    fscanf(file, "%f\n", &myGLWidget->rV);
    fscanf(file, "%f\n", &myGLWidget->gV);
    fscanf(file, "%f\n", &myGLWidget->bV);
    fscanf(file, "%f\n", &myGLWidget->rP);
    fscanf(file, "%f\n", &myGLWidget->gP);
    fscanf(file, "%f\n", &myGLWidget->bP);
    fscanf(file, "%f\n", &myGLWidget->rF);
    fscanf(file, "%f\n", &myGLWidget->gF);
    fscanf(file, "%f\n", &myGLWidget->bF);

    // тип вершин рёбер
    fscanf(file, "%d\n", &myGLWidget->flag_type_v);
    fscanf(file, "%d\n", &myGLWidget->flag_type_p);

    // размер вершин, рёбер
    fscanf(file, "%f\n", &myGLWidget->Vert_size);
    ui->label_vertex_2->setText(QString::number(myGLWidget->Vert_size));
    fscanf(file, "%f\n", &myGLWidget->Poly_size);
    ui->label_poly_size->setText(QString::number(myGLWidget->Poly_size));

    // тип проекции
    fscanf(file, "%d\n", &myGLWidget->progetction_type);

    QMessageBox::information(this, tr("Настройки"),
                             tr("Файл с настройками успешно загружен"));
  } else {
    // perror("Ошибка при открытии файла");
    QMessageBox::information(this, tr("Настройки"),
                             tr("Файл с настройками не удалось загрузить"));
  }
  fclose(file);
}

void MainWindow::on_recordButton_screen_clicked() {
  if (!ui->label_name->text().isEmpty()) {
    QString file = QFileDialog::getSaveFileName(this, "Save as...", "name.bmp",
                                                "BMP (*.bmp);; JPEG (*.jpeg)");
    myGLWidget->grabFramebuffer().save(file, NULL, 100);
  } else {
    QMessageBox::information(this, tr("Ошибка"), tr("Отсутствует obj файл!"));
  }
}

void MainWindow::on_recordButton_gif_clicked() {
  if (!ui->label_name->text().isEmpty()) {
    QMessageBox::information(this, tr("Запись Gif"), tr("Запись Gif"));
    gif = new QGifImage;
    gif->setDefaultDelay(100);
    gif_timer->start(100);
  } else {
    QMessageBox::information(this, tr("Ошибка"), tr("Отсутствует obj файл!"));
  }
}
void MainWindow::createGif() {
  if (gif->frameCount() < 50) {
    QImage frame = myGLWidget->grabFramebuffer();
    gif->addFrame(frame.scaled(640, 480));
    return;
  }
  gif_timer->stop();
  QString currentDirPath = QCoreApplication::applicationDirPath();
  int index = currentDirPath.indexOf("/3DViewer");
  if (index != -1) {
    currentDirPath = currentDirPath.left(index + 9);
  }

  currentDirPath.push_back("/" + ui->label_name->text() + ".gif");

  std::string str_path = currentDirPath.toStdString();
  char char_path[255] = "\0";
  strlcpy(char_path, str_path.c_str(), str_path.length() + 1);

  gif->save(char_path);
}
