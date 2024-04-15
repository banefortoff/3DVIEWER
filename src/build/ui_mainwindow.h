/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "mainwindow.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QWidget *centralwidget;
    MyGLWidget *openGLWidget_1;
    QWidget *widget;
    QLabel *label_name;
    QLabel *label_vertex;
    QLabel *label_polygons;
    QLabel *label_name_0;
    QLabel *label_vertex_0;
    QLabel *label_polygons_0;
    QWidget *widget_2;
    QLabel *label_info;
    QPushButton *pushButton_sdvig_minus;
    QPushButton *pushButton_sdvig_plus;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_sdvig_x;
    QRadioButton *radioButton_sdvig_y;
    QRadioButton *radioButton_sdvig_z;
    QLineEdit *lineEdit_sdvig;
    QWidget *widget_3;
    QLabel *label_info_7;
    QPushButton *pushButton_turn_minus;
    QPushButton *pushButton_turn_plus;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *radioButton_turn_x;
    QRadioButton *radioButton_turn_y;
    QRadioButton *radioButton_turn_z;
    QLineEdit *lineEdit_turn;
    QWidget *widget_4;
    QLabel *label_info_8;
    QPushButton *pushButton_scale_minus;
    QPushButton *pushButton_scale_plus;
    QLineEdit *lineEdit_scale;
    QWidget *widget_5;
    QPushButton *colorButton_v;
    QPushButton *colorButton_p;
    QPushButton *colorButton_f;
    QLabel *label_info_9;
    QWidget *widget_6;
    QPushButton *v_type_Button_s;
    QPushButton *v_type_Button_n;
    QPushButton *v_type_Button_c;
    QLabel *label_info_10;
    QWidget *widget_7;
    QLabel *label_info_11;
    QPushButton *pushButton_vertex_size_minus;
    QPushButton *pushButton_vertex_size_plus;
    QLabel *label_vertex_2;
    QWidget *widget_8;
    QLabel *label_info_12;
    QPushButton *pushButton_poly_size_minus;
    QPushButton *pushButton_poly_size_plus;
    QLabel *label_poly_size;
    QWidget *widget_9;
    QPushButton *p_type_Button_s;
    QPushButton *p_type_Button_d;
    QLabel *label_info_13;
    QWidget *widget_10;
    QPushButton *typeButton_parallel;
    QPushButton *typeButton_central;
    QLabel *label_info_14;
    QWidget *widget_11;
    QPushButton *recordButton_screen;
    QPushButton *recordButton_gif;
    QLabel *label_info_15;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1480, 910);
        MainWindow->setMinimumSize(QSize(1480, 910));
        MainWindow->setMaximumSize(QSize(1480, 910));
        action = new QAction(MainWindow);
        action->setObjectName("action");
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        action_3 = new QAction(MainWindow);
        action_3->setObjectName("action_3");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        openGLWidget_1 = new MyGLWidget(centralwidget);
        openGLWidget_1->setObjectName("openGLWidget_1");
        openGLWidget_1->setGeometry(QRect(250, 10, 981, 860));
        openGLWidget_1->setMinimumSize(QSize(981, 860));
        openGLWidget_1->setMaximumSize(QSize(981, 860));
        openGLWidget_1->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 231, 181));
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"	background-color: black;\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"}"));
        label_name = new QLabel(widget);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(90, 20, 131, 41));
        label_name->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_name->setAlignment(Qt::AlignCenter);
        label_vertex = new QLabel(widget);
        label_vertex->setObjectName("label_vertex");
        label_vertex->setGeometry(QRect(90, 70, 131, 41));
        label_vertex->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_vertex->setAlignment(Qt::AlignCenter);
        label_polygons = new QLabel(widget);
        label_polygons->setObjectName("label_polygons");
        label_polygons->setGeometry(QRect(90, 120, 131, 41));
        label_polygons->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_polygons->setAlignment(Qt::AlignCenter);
        label_name_0 = new QLabel(widget);
        label_name_0->setObjectName("label_name_0");
        label_name_0->setGeometry(QRect(10, 20, 71, 41));
        label_name_0->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_name_0->setAlignment(Qt::AlignCenter);
        label_vertex_0 = new QLabel(widget);
        label_vertex_0->setObjectName("label_vertex_0");
        label_vertex_0->setGeometry(QRect(10, 70, 71, 41));
        label_vertex_0->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_vertex_0->setAlignment(Qt::AlignCenter);
        label_polygons_0 = new QLabel(widget);
        label_polygons_0->setObjectName("label_polygons_0");
        label_polygons_0->setGeometry(QRect(10, 120, 71, 41));
        label_polygons_0->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_polygons_0->setAlignment(Qt::AlignCenter);
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(10, 200, 231, 191));
        widget_2->setStyleSheet(QString::fromUtf8("#widget_2 {\n"
"	background-color: black;\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"}"));
        label_info = new QLabel(widget_2);
        label_info->setObjectName("label_info");
        label_info->setGeometry(QRect(10, 20, 211, 41));
        label_info->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_info->setAlignment(Qt::AlignCenter);
        pushButton_sdvig_minus = new QPushButton(widget_2);
        pushButton_sdvig_minus->setObjectName("pushButton_sdvig_minus");
        pushButton_sdvig_minus->setGeometry(QRect(20, 130, 41, 41));
        pushButton_sdvig_minus->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        pushButton_sdvig_plus = new QPushButton(widget_2);
        pushButton_sdvig_plus->setObjectName("pushButton_sdvig_plus");
        pushButton_sdvig_plus->setGeometry(QRect(170, 130, 41, 41));
        pushButton_sdvig_plus->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(widget_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(-20, 70, 271, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_sdvig_x = new QRadioButton(layoutWidget);
        radioButton_sdvig_x->setObjectName("radioButton_sdvig_x");
        radioButton_sdvig_x->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);\n"
"    min-width: 40px;\n"
"    max-width: 40px;\n"
"    min-height: 40px;\n"
"    max-height: 40px;"));

        horizontalLayout->addWidget(radioButton_sdvig_x);

        radioButton_sdvig_y = new QRadioButton(layoutWidget);
        radioButton_sdvig_y->setObjectName("radioButton_sdvig_y");
        radioButton_sdvig_y->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);\n"
"    min-width: 40px;\n"
"    max-width: 40px;\n"
"    min-height: 40px;\n"
"    max-height: 40px;"));

        horizontalLayout->addWidget(radioButton_sdvig_y);

        radioButton_sdvig_z = new QRadioButton(layoutWidget);
        radioButton_sdvig_z->setObjectName("radioButton_sdvig_z");
        radioButton_sdvig_z->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);\n"
"    min-width: 40px;\n"
"    max-width: 40px;\n"
"    min-height: 40px;\n"
"    max-height: 40px;"));

        horizontalLayout->addWidget(radioButton_sdvig_z);

        lineEdit_sdvig = new QLineEdit(widget_2);
        lineEdit_sdvig->setObjectName("lineEdit_sdvig");
        lineEdit_sdvig->setGeometry(QRect(70, 130, 91, 41));
        lineEdit_sdvig->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        lineEdit_sdvig->setAlignment(Qt::AlignCenter);
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(10, 400, 231, 191));
        widget_3->setStyleSheet(QString::fromUtf8("#widget_3\n"
" {\n"
"	background-color: black;\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"}"));
        label_info_7 = new QLabel(widget_3);
        label_info_7->setObjectName("label_info_7");
        label_info_7->setGeometry(QRect(10, 20, 211, 41));
        label_info_7->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_info_7->setAlignment(Qt::AlignCenter);
        pushButton_turn_minus = new QPushButton(widget_3);
        pushButton_turn_minus->setObjectName("pushButton_turn_minus");
        pushButton_turn_minus->setGeometry(QRect(20, 130, 41, 41));
        pushButton_turn_minus->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        pushButton_turn_plus = new QPushButton(widget_3);
        pushButton_turn_plus->setObjectName("pushButton_turn_plus");
        pushButton_turn_plus->setGeometry(QRect(170, 130, 41, 41));
        pushButton_turn_plus->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        layoutWidget_7 = new QWidget(widget_3);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(-20, 70, 271, 51));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        radioButton_turn_x = new QRadioButton(layoutWidget_7);
        radioButton_turn_x->setObjectName("radioButton_turn_x");
        radioButton_turn_x->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);\n"
"    min-width: 40px;\n"
"    max-width: 40px;\n"
"    min-height: 40px;\n"
"    max-height: 40px;"));

        horizontalLayout_7->addWidget(radioButton_turn_x);

        radioButton_turn_y = new QRadioButton(layoutWidget_7);
        radioButton_turn_y->setObjectName("radioButton_turn_y");
        radioButton_turn_y->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);\n"
"    min-width: 40px;\n"
"    max-width: 40px;\n"
"    min-height: 40px;\n"
"    max-height: 40px;"));

        horizontalLayout_7->addWidget(radioButton_turn_y);

        radioButton_turn_z = new QRadioButton(layoutWidget_7);
        radioButton_turn_z->setObjectName("radioButton_turn_z");
        radioButton_turn_z->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);\n"
"    min-width: 40px;\n"
"    max-width: 40px;\n"
"    min-height: 40px;\n"
"    max-height: 40px;"));

        horizontalLayout_7->addWidget(radioButton_turn_z);

        lineEdit_turn = new QLineEdit(widget_3);
        lineEdit_turn->setObjectName("lineEdit_turn");
        lineEdit_turn->setGeometry(QRect(70, 130, 91, 41));
        lineEdit_turn->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        lineEdit_turn->setAlignment(Qt::AlignCenter);
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(10, 600, 231, 131));
        widget_4->setStyleSheet(QString::fromUtf8("#widget_4\n"
" {\n"
"	background-color: black;\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"}"));
        label_info_8 = new QLabel(widget_4);
        label_info_8->setObjectName("label_info_8");
        label_info_8->setGeometry(QRect(10, 20, 211, 41));
        label_info_8->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_info_8->setAlignment(Qt::AlignCenter);
        pushButton_scale_minus = new QPushButton(widget_4);
        pushButton_scale_minus->setObjectName("pushButton_scale_minus");
        pushButton_scale_minus->setGeometry(QRect(20, 70, 41, 41));
        pushButton_scale_minus->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        pushButton_scale_plus = new QPushButton(widget_4);
        pushButton_scale_plus->setObjectName("pushButton_scale_plus");
        pushButton_scale_plus->setGeometry(QRect(170, 70, 41, 41));
        pushButton_scale_plus->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        lineEdit_scale = new QLineEdit(widget_4);
        lineEdit_scale->setObjectName("lineEdit_scale");
        lineEdit_scale->setGeometry(QRect(70, 70, 91, 41));
        lineEdit_scale->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        lineEdit_scale->setAlignment(Qt::AlignCenter);
        widget_5 = new QWidget(centralwidget);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(1240, 10, 231, 141));
        widget_5->setStyleSheet(QString::fromUtf8("#widget_5\n"
" {\n"
"	background-color: black;\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"}"));
        colorButton_v = new QPushButton(widget_5);
        colorButton_v->setObjectName("colorButton_v");
        colorButton_v->setGeometry(QRect(10, 70, 61, 51));
        colorButton_v->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        colorButton_p = new QPushButton(widget_5);
        colorButton_p->setObjectName("colorButton_p");
        colorButton_p->setGeometry(QRect(140, 70, 81, 51));
        colorButton_p->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        colorButton_f = new QPushButton(widget_5);
        colorButton_f->setObjectName("colorButton_f");
        colorButton_f->setGeometry(QRect(80, 70, 51, 51));
        colorButton_f->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_info_9 = new QLabel(widget_5);
        label_info_9->setObjectName("label_info_9");
        label_info_9->setGeometry(QRect(10, 20, 211, 41));
        label_info_9->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_info_9->setAlignment(Qt::AlignCenter);
        widget_6 = new QWidget(centralwidget);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(1240, 160, 231, 141));
        widget_6->setStyleSheet(QString::fromUtf8("#widget_6\n"
" {\n"
"	background-color: black;\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"}"));
        v_type_Button_s = new QPushButton(widget_6);
        v_type_Button_s->setObjectName("v_type_Button_s");
        v_type_Button_s->setGeometry(QRect(10, 70, 61, 51));
        v_type_Button_s->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        v_type_Button_n = new QPushButton(widget_6);
        v_type_Button_n->setObjectName("v_type_Button_n");
        v_type_Button_n->setGeometry(QRect(140, 70, 81, 51));
        v_type_Button_n->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        v_type_Button_c = new QPushButton(widget_6);
        v_type_Button_c->setObjectName("v_type_Button_c");
        v_type_Button_c->setGeometry(QRect(80, 70, 51, 51));
        v_type_Button_c->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_info_10 = new QLabel(widget_6);
        label_info_10->setObjectName("label_info_10");
        label_info_10->setGeometry(QRect(10, 20, 211, 41));
        label_info_10->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_info_10->setAlignment(Qt::AlignCenter);
        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName("widget_7");
        widget_7->setGeometry(QRect(1240, 460, 231, 131));
        widget_7->setStyleSheet(QString::fromUtf8("#widget_7\n"
" {\n"
"	background-color: black;\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"}"));
        label_info_11 = new QLabel(widget_7);
        label_info_11->setObjectName("label_info_11");
        label_info_11->setGeometry(QRect(10, 20, 211, 41));
        label_info_11->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_info_11->setAlignment(Qt::AlignCenter);
        pushButton_vertex_size_minus = new QPushButton(widget_7);
        pushButton_vertex_size_minus->setObjectName("pushButton_vertex_size_minus");
        pushButton_vertex_size_minus->setGeometry(QRect(20, 70, 41, 41));
        pushButton_vertex_size_minus->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        pushButton_vertex_size_plus = new QPushButton(widget_7);
        pushButton_vertex_size_plus->setObjectName("pushButton_vertex_size_plus");
        pushButton_vertex_size_plus->setGeometry(QRect(170, 70, 41, 41));
        pushButton_vertex_size_plus->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_vertex_2 = new QLabel(widget_7);
        label_vertex_2->setObjectName("label_vertex_2");
        label_vertex_2->setGeometry(QRect(70, 70, 91, 41));
        label_vertex_2->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_vertex_2->setAlignment(Qt::AlignCenter);
        widget_8 = new QWidget(centralwidget);
        widget_8->setObjectName("widget_8");
        widget_8->setGeometry(QRect(1240, 600, 231, 131));
        widget_8->setStyleSheet(QString::fromUtf8("#widget_8\n"
" {\n"
"	background-color: black;\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"}"));
        label_info_12 = new QLabel(widget_8);
        label_info_12->setObjectName("label_info_12");
        label_info_12->setGeometry(QRect(10, 20, 211, 41));
        label_info_12->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_info_12->setAlignment(Qt::AlignCenter);
        pushButton_poly_size_minus = new QPushButton(widget_8);
        pushButton_poly_size_minus->setObjectName("pushButton_poly_size_minus");
        pushButton_poly_size_minus->setGeometry(QRect(20, 70, 41, 41));
        pushButton_poly_size_minus->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        pushButton_poly_size_plus = new QPushButton(widget_8);
        pushButton_poly_size_plus->setObjectName("pushButton_poly_size_plus");
        pushButton_poly_size_plus->setGeometry(QRect(170, 70, 41, 41));
        pushButton_poly_size_plus->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_poly_size = new QLabel(widget_8);
        label_poly_size->setObjectName("label_poly_size");
        label_poly_size->setGeometry(QRect(70, 70, 91, 41));
        label_poly_size->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_poly_size->setAlignment(Qt::AlignCenter);
        widget_9 = new QWidget(centralwidget);
        widget_9->setObjectName("widget_9");
        widget_9->setGeometry(QRect(1240, 310, 231, 141));
        widget_9->setStyleSheet(QString::fromUtf8("#widget_9\n"
" {\n"
"	background-color: black;\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"}"));
        p_type_Button_s = new QPushButton(widget_9);
        p_type_Button_s->setObjectName("p_type_Button_s");
        p_type_Button_s->setGeometry(QRect(10, 70, 101, 51));
        p_type_Button_s->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        p_type_Button_d = new QPushButton(widget_9);
        p_type_Button_d->setObjectName("p_type_Button_d");
        p_type_Button_d->setGeometry(QRect(120, 70, 101, 51));
        p_type_Button_d->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_info_13 = new QLabel(widget_9);
        label_info_13->setObjectName("label_info_13");
        label_info_13->setGeometry(QRect(10, 20, 211, 41));
        label_info_13->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_info_13->setAlignment(Qt::AlignCenter);
        widget_10 = new QWidget(centralwidget);
        widget_10->setObjectName("widget_10");
        widget_10->setGeometry(QRect(1240, 740, 231, 131));
        widget_10->setStyleSheet(QString::fromUtf8("#widget_10\n"
" {\n"
"	background-color: black;\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"}"));
        typeButton_parallel = new QPushButton(widget_10);
        typeButton_parallel->setObjectName("typeButton_parallel");
        typeButton_parallel->setGeometry(QRect(10, 70, 101, 41));
        typeButton_parallel->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        typeButton_central = new QPushButton(widget_10);
        typeButton_central->setObjectName("typeButton_central");
        typeButton_central->setGeometry(QRect(120, 70, 101, 41));
        typeButton_central->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_info_14 = new QLabel(widget_10);
        label_info_14->setObjectName("label_info_14");
        label_info_14->setGeometry(QRect(10, 20, 211, 41));
        label_info_14->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_info_14->setAlignment(Qt::AlignCenter);
        widget_11 = new QWidget(centralwidget);
        widget_11->setObjectName("widget_11");
        widget_11->setGeometry(QRect(10, 740, 231, 131));
        widget_11->setStyleSheet(QString::fromUtf8("#widget_11\n"
" {\n"
"	background-color: black;\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"}"));
        recordButton_screen = new QPushButton(widget_11);
        recordButton_screen->setObjectName("recordButton_screen");
        recordButton_screen->setGeometry(QRect(10, 70, 101, 41));
        recordButton_screen->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        recordButton_gif = new QPushButton(widget_11);
        recordButton_gif->setObjectName("recordButton_gif");
        recordButton_gif->setGeometry(QRect(120, 70, 101, 41));
        recordButton_gif->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_info_15 = new QLabel(widget_11);
        label_info_15->setObjectName("label_info_15");
        label_info_15->setGeometry(QRect(10, 20, 211, 41));
        label_info_15->setStyleSheet(QString::fromUtf8("     background-color: rgb(87, 86, 88);\n"
"	border: 2px solid white;\n"
"     border-radius: 20px;\n"
"     color: rgb(255, 255, 255);"));
        label_info_15->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1480, 24));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu_2->addAction(action_2);
        menu_2->addAction(action_3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "3DViewer_v1.0", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273 \320\270\320\267 \320\272\320\260\321\202\320\276\320\273\320\276\320\263\320\260", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        label_name->setText(QString());
        label_vertex->setText(QString());
        label_polygons->setText(QString());
        label_name_0->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        label_vertex_0->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\210\320\270\320\275\321\213", nullptr));
        label_polygons_0->setText(QCoreApplication::translate("MainWindow", "\320\240\321\221\320\261\321\200\320\260", nullptr));
        label_info->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265 \320\274\320\276\320\264\320\265\320\273\320\270", nullptr));
        pushButton_sdvig_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_sdvig_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        radioButton_sdvig_x->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        radioButton_sdvig_y->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        radioButton_sdvig_z->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        lineEdit_sdvig->setText(QCoreApplication::translate("MainWindow", "0,25", nullptr));
        label_info_7->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202 \320\274\320\276\320\264\320\265\320\273\320\270", nullptr));
        pushButton_turn_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_turn_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        radioButton_turn_x->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        radioButton_turn_y->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        radioButton_turn_z->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        lineEdit_turn->setText(QCoreApplication::translate("MainWindow", "0,25", nullptr));
        label_info_8->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261", nullptr));
        pushButton_scale_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_scale_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        lineEdit_scale->setText(QCoreApplication::translate("MainWindow", "1,1", nullptr));
        colorButton_v->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\210\320\270\320\275", nullptr));
        colorButton_p->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\320\270\320\263\320\276\320\275\320\276\320\262", nullptr));
        colorButton_f->setText(QCoreApplication::translate("MainWindow", "\320\244\320\276\320\275\320\260", nullptr));
        label_info_9->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\206\320\262\320\265\321\202", nullptr));
        v_type_Button_s->setText(QCoreApplication::translate("MainWindow", "\320\232\320\262\320\260\320\264\321\200\320\260\321\202", nullptr));
        v_type_Button_n->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\201\321\203\321\202\321\201\320\262\320\270\320\265", nullptr));
        v_type_Button_c->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\321\203\320\263", nullptr));
        label_info_10->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217 \320\262\320\265\321\200\321\210\320\270\320\275", nullptr));
        label_info_11->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \321\200\320\260\320\267\320\274\320\265\321\200\320\260 \320\262\320\265\321\200\321\210\320\270\320\275", nullptr));
        pushButton_vertex_size_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_vertex_size_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_vertex_2->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_info_12->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \321\202\320\276\320\273\321\211\320\270\320\275\321\213 \321\200\321\221\320\261\320\265\321\200", nullptr));
        pushButton_poly_size_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_poly_size_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_poly_size->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        p_type_Button_s->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\273\320\276\321\210\320\275\320\260\321\217", nullptr));
        p_type_Button_d->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\320\275\320\272\321\202\320\270\321\200\320\275\320\260\321\217", nullptr));
        label_info_13->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\276\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217 \321\200\321\221\320\261\320\265\321\200", nullptr));
        typeButton_parallel->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\273\320\273\320\265\320\273\321\214\320\275\320\260\321\217", nullptr));
        typeButton_central->setText(QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\260\321\217", nullptr));
        label_info_14->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\202\320\270\320\277 \320\277\321\200\320\276\320\265\320\272\321\206\320\270\320\270", nullptr));
        recordButton_screen->setText(QCoreApplication::translate("MainWindow", "screenshot", nullptr));
        recordButton_gif->setText(QCoreApplication::translate("MainWindow", "gif", nullptr));
        label_info_15->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\321\214", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273 \320\274\320\276\320\264\320\265\320\273\320\270", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
