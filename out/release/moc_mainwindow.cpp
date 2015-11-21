/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata[342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 37), // "on_comboBox_ports_currentInde..."
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 5), // "index"
QT_MOC_LITERAL(4, 56, 24), // "on_action_Open_triggered"
QT_MOC_LITERAL(5, 81, 25), // "on_action_Close_triggered"
QT_MOC_LITERAL(6, 107, 26), // "on_pushButton_char_clicked"
QT_MOC_LITERAL(7, 134, 11), // "on_readData"
QT_MOC_LITERAL(8, 146, 4), // "data"
QT_MOC_LITERAL(9, 151, 26), // "on_pushButton_code_clicked"
QT_MOC_LITERAL(10, 178, 25), // "on_action_Clear_triggered"
QT_MOC_LITERAL(11, 204, 26), // "on_pushButton_run1_clicked"
QT_MOC_LITERAL(12, 231, 26), // "on_pushButton_run2_clicked"
QT_MOC_LITERAL(13, 258, 27), // "on_action_Refresh_triggered"
QT_MOC_LITERAL(14, 286, 26), // "on_action_export_triggered"
QT_MOC_LITERAL(15, 313, 28) // "on_pushButton_charwn_clicked"

    },
    "MainWindow\0on_comboBox_ports_currentIndexChanged\0"
    "\0index\0on_action_Open_triggered\0"
    "on_action_Close_triggered\0"
    "on_pushButton_char_clicked\0on_readData\0"
    "data\0on_pushButton_code_clicked\0"
    "on_action_Clear_triggered\0"
    "on_pushButton_run1_clicked\0"
    "on_pushButton_run2_clicked\0"
    "on_action_Refresh_triggered\0"
    "on_action_export_triggered\0"
    "on_pushButton_charwn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    0,   77,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    1,   80,    2, 0x08 /* Private */,
       9,    0,   83,    2, 0x08 /* Private */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_comboBox_ports_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_action_Open_triggered(); break;
        case 2: _t->on_action_Close_triggered(); break;
        case 3: _t->on_pushButton_char_clicked(); break;
        case 4: _t->on_readData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_code_clicked(); break;
        case 6: _t->on_action_Clear_triggered(); break;
        case 7: _t->on_pushButton_run1_clicked(); break;
        case 8: _t->on_pushButton_run2_clicked(); break;
        case 9: _t->on_action_Refresh_triggered(); break;
        case 10: _t->on_action_export_triggered(); break;
        case 11: _t->on_pushButton_charwn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
