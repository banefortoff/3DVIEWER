/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../3DViewer/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMyGLWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMyGLWidgetENDCLASS = QtMocHelpers::stringData(
    "MyGLWidget",
    "setXRotation",
    "",
    "angle",
    "setYRotation",
    "setZRotation",
    "paintPoly",
    "paintVert"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMyGLWidgetENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[13];
    char stringdata5[13];
    char stringdata6[10];
    char stringdata7[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMyGLWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMyGLWidgetENDCLASS_t qt_meta_stringdata_CLASSMyGLWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MyGLWidget"
        QT_MOC_LITERAL(11, 12),  // "setXRotation"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 5),  // "angle"
        QT_MOC_LITERAL(31, 12),  // "setYRotation"
        QT_MOC_LITERAL(44, 12),  // "setZRotation"
        QT_MOC_LITERAL(57, 9),  // "paintPoly"
        QT_MOC_LITERAL(67, 9)   // "paintVert"
    },
    "MyGLWidget",
    "setXRotation",
    "",
    "angle",
    "setYRotation",
    "setZRotation",
    "paintPoly",
    "paintVert"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMyGLWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x0a,    1 /* Public */,
       4,    1,   47,    2, 0x0a,    3 /* Public */,
       5,    1,   50,    2, 0x0a,    5 /* Public */,
       6,    0,   53,    2, 0x0a,    7 /* Public */,
       7,    0,   54,    2, 0x0a,    8 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MyGLWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSMyGLWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMyGLWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMyGLWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MyGLWidget, std::true_type>,
        // method 'setXRotation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setYRotation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setZRotation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'paintPoly'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'paintVert'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MyGLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyGLWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setXRotation((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->setYRotation((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->setZRotation((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->paintPoly(); break;
        case 4: _t->paintVert(); break;
        default: ;
        }
    }
}

const QMetaObject *MyGLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyGLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMyGLWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int MyGLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "sdvig",
    "",
    "turn",
    "scale",
    "choose_color",
    "choose_type_v",
    "choose_size_v",
    "choose_size_p",
    "choose_type_p",
    "choose_type_proj",
    "on_action_triggered",
    "on_action_2_triggered",
    "on_action_3_triggered",
    "on_recordButton_screen_clicked",
    "on_recordButton_gif_clicked",
    "createGif"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[11];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[6];
    char stringdata5[13];
    char stringdata6[14];
    char stringdata7[14];
    char stringdata8[14];
    char stringdata9[14];
    char stringdata10[17];
    char stringdata11[20];
    char stringdata12[22];
    char stringdata13[22];
    char stringdata14[31];
    char stringdata15[28];
    char stringdata16[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 5),  // "sdvig"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 4),  // "turn"
        QT_MOC_LITERAL(23, 5),  // "scale"
        QT_MOC_LITERAL(29, 12),  // "choose_color"
        QT_MOC_LITERAL(42, 13),  // "choose_type_v"
        QT_MOC_LITERAL(56, 13),  // "choose_size_v"
        QT_MOC_LITERAL(70, 13),  // "choose_size_p"
        QT_MOC_LITERAL(84, 13),  // "choose_type_p"
        QT_MOC_LITERAL(98, 16),  // "choose_type_proj"
        QT_MOC_LITERAL(115, 19),  // "on_action_triggered"
        QT_MOC_LITERAL(135, 21),  // "on_action_2_triggered"
        QT_MOC_LITERAL(157, 21),  // "on_action_3_triggered"
        QT_MOC_LITERAL(179, 30),  // "on_recordButton_screen_clicked"
        QT_MOC_LITERAL(210, 27),  // "on_recordButton_gif_clicked"
        QT_MOC_LITERAL(238, 9)   // "createGif"
    },
    "MainWindow",
    "sdvig",
    "",
    "turn",
    "scale",
    "choose_color",
    "choose_type_v",
    "choose_size_v",
    "choose_size_p",
    "choose_type_p",
    "choose_type_proj",
    "on_action_triggered",
    "on_action_2_triggered",
    "on_action_3_triggered",
    "on_recordButton_screen_clicked",
    "on_recordButton_gif_clicked",
    "createGif"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x0a,    1 /* Public */,
       3,    0,  105,    2, 0x0a,    2 /* Public */,
       4,    0,  106,    2, 0x0a,    3 /* Public */,
       5,    0,  107,    2, 0x0a,    4 /* Public */,
       6,    0,  108,    2, 0x0a,    5 /* Public */,
       7,    0,  109,    2, 0x0a,    6 /* Public */,
       8,    0,  110,    2, 0x0a,    7 /* Public */,
       9,    0,  111,    2, 0x0a,    8 /* Public */,
      10,    0,  112,    2, 0x0a,    9 /* Public */,
      11,    0,  113,    2, 0x08,   10 /* Private */,
      12,    0,  114,    2, 0x08,   11 /* Private */,
      13,    0,  115,    2, 0x08,   12 /* Private */,
      14,    0,  116,    2, 0x08,   13 /* Private */,
      15,    0,  117,    2, 0x08,   14 /* Private */,
      16,    0,  118,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'sdvig'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'turn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scale'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_color'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_type_v'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_size_v'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_size_p'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_type_p'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choose_type_proj'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_2_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_3_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_recordButton_screen_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_recordButton_gif_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createGif'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sdvig(); break;
        case 1: _t->turn(); break;
        case 2: _t->scale(); break;
        case 3: _t->choose_color(); break;
        case 4: _t->choose_type_v(); break;
        case 5: _t->choose_size_v(); break;
        case 6: _t->choose_size_p(); break;
        case 7: _t->choose_type_p(); break;
        case 8: _t->choose_type_proj(); break;
        case 9: _t->on_action_triggered(); break;
        case 10: _t->on_action_2_triggered(); break;
        case 11: _t->on_action_3_triggered(); break;
        case 12: _t->on_recordButton_screen_clicked(); break;
        case 13: _t->on_recordButton_gif_clicked(); break;
        case 14: _t->createGif(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
