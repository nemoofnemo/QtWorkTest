/****************************************************************************
** Meta object code from reading C++ file 'UploadHandoutDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UploadHandoutDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UploadHandoutDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UploadHandoutDialog_t {
    QByteArrayData data[24];
    char stringdata0[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UploadHandoutDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UploadHandoutDialog_t qt_meta_stringdata_UploadHandoutDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "UploadHandoutDialog"
QT_MOC_LITERAL(1, 20, 15), // "deleteItemEvent"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 54, 4), // "item"
QT_MOC_LITERAL(5, 59, 7), // "addItem"
QT_MOC_LITERAL(6, 67, 8), // "FileType"
QT_MOC_LITERAL(7, 76, 4), // "type"
QT_MOC_LITERAL(8, 81, 8), // "filename"
QT_MOC_LITERAL(9, 90, 10), // "deleteItem"
QT_MOC_LITERAL(10, 101, 15), // "clearListWidget"
QT_MOC_LITERAL(11, 117, 13), // "onItemClicked"
QT_MOC_LITERAL(12, 131, 17), // "resetSelectedItem"
QT_MOC_LITERAL(13, 149, 9), // "showImage"
QT_MOC_LITERAL(14, 159, 4), // "path"
QT_MOC_LITERAL(15, 164, 27), // "onPresentationButtonClicked"
QT_MOC_LITERAL(16, 192, 30), // "onProgressBarLeftButtonClicked"
QT_MOC_LITERAL(17, 223, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(18, 238, 12), // "QMouseEvent*"
QT_MOC_LITERAL(19, 251, 5), // "event"
QT_MOC_LITERAL(20, 257, 15), // "mousePressEvent"
QT_MOC_LITERAL(21, 273, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(22, 291, 10), // "closeEvent"
QT_MOC_LITERAL(23, 302, 12) // "QCloseEvent*"

    },
    "UploadHandoutDialog\0deleteItemEvent\0"
    "\0QListWidgetItem*\0item\0addItem\0FileType\0"
    "type\0filename\0deleteItem\0clearListWidget\0"
    "onItemClicked\0resetSelectedItem\0"
    "showImage\0path\0onPresentationButtonClicked\0"
    "onProgressBarLeftButtonClicked\0"
    "mouseMoveEvent\0QMouseEvent*\0event\0"
    "mousePressEvent\0mouseReleaseEvent\0"
    "closeEvent\0QCloseEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UploadHandoutDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   82,    2, 0x0a /* Public */,
       9,    1,   87,    2, 0x0a /* Public */,
      10,    0,   90,    2, 0x0a /* Public */,
      11,    1,   91,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    1,   95,    2, 0x0a /* Public */,
      15,    0,   98,    2, 0x0a /* Public */,
      16,    0,   99,    2, 0x0a /* Public */,
      17,    1,  100,    2, 0x0a /* Public */,
      20,    1,  103,    2, 0x0a /* Public */,
      21,    1,  106,    2, 0x0a /* Public */,
      22,    1,  109,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,    8,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 23,   19,

       0        // eod
};

void UploadHandoutDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UploadHandoutDialog *_t = static_cast<UploadHandoutDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteItemEvent((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->addItem((*reinterpret_cast< FileType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->deleteItem((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->clearListWidget(); break;
        case 4: _t->onItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->resetSelectedItem(); break;
        case 6: _t->showImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onPresentationButtonClicked(); break;
        case 8: _t->onProgressBarLeftButtonClicked(); break;
        case 9: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 10: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 11: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 12: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UploadHandoutDialog::*_t)(QListWidgetItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UploadHandoutDialog::deleteItemEvent)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject UploadHandoutDialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UploadHandoutDialog.data,
      qt_meta_data_UploadHandoutDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UploadHandoutDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UploadHandoutDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UploadHandoutDialog.stringdata0))
        return static_cast<void*>(const_cast< UploadHandoutDialog*>(this));
    return QWidget::qt_metacast(_clname);
}

int UploadHandoutDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void UploadHandoutDialog::deleteItemEvent(QListWidgetItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
