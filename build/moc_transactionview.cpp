/****************************************************************************
** Meta object code from reading C++ file 'transactionview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/transactionview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transactionview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransactionView_t {
    QByteArrayData data[21];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransactionView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransactionView_t qt_meta_stringdata_TransactionView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TransactionView"
QT_MOC_LITERAL(1, 16, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 43, 14), // "contextualMenu"
QT_MOC_LITERAL(5, 58, 16), // "dateRangeChanged"
QT_MOC_LITERAL(6, 75, 11), // "showDetails"
QT_MOC_LITERAL(7, 87, 11), // "copyAddress"
QT_MOC_LITERAL(8, 99, 9), // "editLabel"
QT_MOC_LITERAL(9, 109, 9), // "copyLabel"
QT_MOC_LITERAL(10, 119, 10), // "copyAmount"
QT_MOC_LITERAL(11, 130, 8), // "copyTxID"
QT_MOC_LITERAL(12, 139, 10), // "chooseDate"
QT_MOC_LITERAL(13, 150, 3), // "idx"
QT_MOC_LITERAL(14, 154, 10), // "chooseType"
QT_MOC_LITERAL(15, 165, 13), // "changedPrefix"
QT_MOC_LITERAL(16, 179, 6), // "prefix"
QT_MOC_LITERAL(17, 186, 13), // "changedAmount"
QT_MOC_LITERAL(18, 200, 6), // "amount"
QT_MOC_LITERAL(19, 207, 13), // "exportClicked"
QT_MOC_LITERAL(20, 221, 16) // "focusTransaction"

    },
    "TransactionView\0doubleClicked\0\0"
    "QModelIndex\0contextualMenu\0dateRangeChanged\0"
    "showDetails\0copyAddress\0editLabel\0"
    "copyLabel\0copyAmount\0copyTxID\0chooseDate\0"
    "idx\0chooseType\0changedPrefix\0prefix\0"
    "changedAmount\0amount\0exportClicked\0"
    "focusTransaction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransactionView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   92,    2, 0x08 /* Private */,
       5,    0,   95,    2, 0x08 /* Private */,
       6,    0,   96,    2, 0x08 /* Private */,
       7,    0,   97,    2, 0x08 /* Private */,
       8,    0,   98,    2, 0x08 /* Private */,
       9,    0,   99,    2, 0x08 /* Private */,
      10,    0,  100,    2, 0x08 /* Private */,
      11,    0,  101,    2, 0x08 /* Private */,
      12,    1,  102,    2, 0x0a /* Public */,
      14,    1,  105,    2, 0x0a /* Public */,
      15,    1,  108,    2, 0x0a /* Public */,
      17,    1,  111,    2, 0x0a /* Public */,
      19,    0,  114,    2, 0x0a /* Public */,
      20,    1,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void TransactionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionView *_t = static_cast<TransactionView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->contextualMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->dateRangeChanged(); break;
        case 3: _t->showDetails(); break;
        case 4: _t->copyAddress(); break;
        case 5: _t->editLabel(); break;
        case 6: _t->copyLabel(); break;
        case 7: _t->copyAmount(); break;
        case 8: _t->copyTxID(); break;
        case 9: _t->chooseDate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->chooseType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->changedPrefix((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->changedAmount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->exportClicked(); break;
        case 14: _t->focusTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TransactionView::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransactionView::doubleClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TransactionView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TransactionView.data,
      qt_meta_data_TransactionView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TransactionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransactionView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TransactionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void TransactionView::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
