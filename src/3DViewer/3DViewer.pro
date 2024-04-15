QT       += core gui opengl openglwidgets

greaterThan(QT_MAJOR_VERSION, 5): QT += openglwidgets
isEqual(QT_MAJOR_VERSION, 5): LIBS += -IGLU

QMAKE_CXXFLAGS += -Wno-deprecated-declarations
QMAKE_CXXFLAGS += -Wno-unused-parameter
QMAKE_CXXFLAGS += -w

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

include(src/gifimage/qtgifimage.pri)

SOURCES += \
    ../s21_data.c \
    ../s21_matrix.c \
    ../s21_move.c \
    ../s21_polygon.c \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ../s21_data.h \
    ../s21_matrix.h \
    ../s21_polygon.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
