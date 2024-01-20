/****************************************************************************
** Meta object code from reading C++ file 'threadmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../DATN_LaneWhite/threadmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'threadmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThreadManager_t {
    QByteArrayData data[12];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThreadManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThreadManager_t qt_meta_stringdata_ThreadManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ThreadManager"
QT_MOC_LITERAL(1, 14, 10), // "updateView"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "Mat"
QT_MOC_LITERAL(4, 30, 5), // "frame"
QT_MOC_LITERAL(5, 36, 14), // "updateViewLane"
QT_MOC_LITERAL(6, 51, 9), // "frameLane"
QT_MOC_LITERAL(7, 61, 14), // "captureStopped"
QT_MOC_LITERAL(8, 76, 12), // "receiveFrame"
QT_MOC_LITERAL(9, 89, 16), // "receiveFrameLane"
QT_MOC_LITERAL(10, 106, 11), // "stopCapture"
QT_MOC_LITERAL(11, 118, 9) // "runCamera"

    },
    "ThreadManager\0updateView\0\0Mat\0frame\0"
    "updateViewLane\0frameLane\0captureStopped\0"
    "receiveFrame\0receiveFrameLane\0stopCapture\0"
    "runCamera"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThreadManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       7,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   56,    2, 0x0a /* Public */,
       9,    1,   59,    2, 0x0a /* Public */,
      10,    0,   62,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      11,    0,   63,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void ThreadManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThreadManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateView((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 1: _t->updateViewLane((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 2: _t->captureStopped(); break;
        case 3: _t->receiveFrame((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 4: _t->receiveFrameLane((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 5: _t->stopCapture(); break;
        case 6: _t->runCamera(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThreadManager::*)(Mat );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadManager::updateView)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ThreadManager::*)(Mat );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadManager::updateViewLane)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ThreadManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThreadManager::captureStopped)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ThreadManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ThreadManager.data,
    qt_meta_data_ThreadManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ThreadManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThreadManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThreadManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ThreadManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ThreadManager::updateView(Mat _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ThreadManager::updateViewLane(Mat _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ThreadManager::captureStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
