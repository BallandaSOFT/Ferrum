/****************************************************************************
** Meta object code from reading C++ file 'infowindowui.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Ferrum/infowindowui.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'infowindowui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
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
struct qt_meta_stringdata_CLASSInfoWindowUiENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSInfoWindowUiENDCLASS = QtMocHelpers::stringData(
    "InfoWindowUi",
    "PathInfo",
    "QList<qint64>",
    "",
    "FormatSize",
    "ChangeText"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSInfoWindowUiENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[13];
    char stringdata1[9];
    char stringdata2[14];
    char stringdata3[1];
    char stringdata4[11];
    char stringdata5[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSInfoWindowUiENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSInfoWindowUiENDCLASS_t qt_meta_stringdata_CLASSInfoWindowUiENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "InfoWindowUi"
        QT_MOC_LITERAL(13, 8),  // "PathInfo"
        QT_MOC_LITERAL(22, 13),  // "QList<qint64>"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 10),  // "FormatSize"
        QT_MOC_LITERAL(48, 10)   // "ChangeText"
    },
    "InfoWindowUi",
    "PathInfo",
    "QList<qint64>",
    "",
    "FormatSize",
    "ChangeText"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSInfoWindowUiENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    3, 0x0a,    1 /* Public */,
       4,    1,   35,    3, 0x0a,    3 /* Public */,
       5,    1,   38,    3, 0x08,    5 /* Private */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::LongLong,    3,
    QMetaType::Void, 0x80000000 | 2,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject InfoWindowUi::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSInfoWindowUiENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSInfoWindowUiENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSInfoWindowUiENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InfoWindowUi, std::true_type>,
        // method 'PathInfo'
        QtPrivate::TypeAndForceComplete<QVector<qint64>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        // method 'FormatSize'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'ChangeText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<qint64>, std::false_type>
    >,
    nullptr
} };

void InfoWindowUi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InfoWindowUi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QList<qint64> _r = _t->PathInfo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<qint64>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->FormatSize((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->ChangeText((*reinterpret_cast< std::add_pointer_t<QList<qint64>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<qint64> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *InfoWindowUi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InfoWindowUi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSInfoWindowUiENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int InfoWindowUi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
