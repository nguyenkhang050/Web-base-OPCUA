/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OPCUAClient_Qt/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[112];
    char stringdata0[2270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "UpdateTimerTick"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "IOAlarmTick"
QT_MOC_LITERAL(4, 40, 5), // "Clock"
QT_MOC_LITERAL(5, 46, 13), // "ServerTimeout"
QT_MOC_LITERAL(6, 60, 10), // "JogRBTimer"
QT_MOC_LITERAL(7, 71, 8), // "ReadData"
QT_MOC_LITERAL(8, 80, 10), // "UA_Client*"
QT_MOC_LITERAL(9, 91, 6), // "client"
QT_MOC_LITERAL(10, 98, 5), // "Alarm"
QT_MOC_LITERAL(11, 104, 13), // "ReadDeltaData"
QT_MOC_LITERAL(12, 118, 6), // "ReadDI"
QT_MOC_LITERAL(13, 125, 6), // "ReadDO"
QT_MOC_LITERAL(14, 132, 9), // "DisplayDI"
QT_MOC_LITERAL(15, 142, 9), // "DisplayDO"
QT_MOC_LITERAL(16, 152, 10), // "JogProcess"
QT_MOC_LITERAL(17, 163, 6), // "number"
QT_MOC_LITERAL(18, 170, 9), // "SetSttbar"
QT_MOC_LITERAL(19, 180, 4), // "bset"
QT_MOC_LITERAL(20, 185, 11), // "CheckCMDAck"
QT_MOC_LITERAL(21, 197, 13), // "HistoryEvents"
QT_MOC_LITERAL(22, 211, 19), // "on_btnStart_clicked"
QT_MOC_LITERAL(23, 231, 18), // "on_btnStop_clicked"
QT_MOC_LITERAL(24, 250, 20), // "on_btnJ1_neg_pressed"
QT_MOC_LITERAL(25, 271, 21), // "on_btnJ1_neg_released"
QT_MOC_LITERAL(26, 293, 20), // "on_btnJ1_pos_pressed"
QT_MOC_LITERAL(27, 314, 21), // "on_btnJ1_pos_released"
QT_MOC_LITERAL(28, 336, 20), // "on_btnJ2_neg_pressed"
QT_MOC_LITERAL(29, 357, 21), // "on_btnJ2_neg_released"
QT_MOC_LITERAL(30, 379, 20), // "on_btnJ2_pos_pressed"
QT_MOC_LITERAL(31, 400, 21), // "on_btnJ2_pos_released"
QT_MOC_LITERAL(32, 422, 20), // "on_btnJ3_neg_pressed"
QT_MOC_LITERAL(33, 443, 21), // "on_btnJ3_neg_released"
QT_MOC_LITERAL(34, 465, 20), // "on_btnJ3_pos_pressed"
QT_MOC_LITERAL(35, 486, 21), // "on_btnJ3_pos_released"
QT_MOC_LITERAL(36, 508, 20), // "on_btnJ4_neg_pressed"
QT_MOC_LITERAL(37, 529, 21), // "on_btnJ4_neg_released"
QT_MOC_LITERAL(38, 551, 20), // "on_btnJ4_pos_pressed"
QT_MOC_LITERAL(39, 572, 21), // "on_btnJ4_pos_released"
QT_MOC_LITERAL(40, 594, 20), // "on_btnJ5_neg_pressed"
QT_MOC_LITERAL(41, 615, 21), // "on_btnJ5_neg_released"
QT_MOC_LITERAL(42, 637, 20), // "on_btnJ5_pos_pressed"
QT_MOC_LITERAL(43, 658, 21), // "on_btnJ5_pos_released"
QT_MOC_LITERAL(44, 680, 20), // "on_btnJ6_neg_pressed"
QT_MOC_LITERAL(45, 701, 21), // "on_btnJ6_neg_released"
QT_MOC_LITERAL(46, 723, 20), // "on_btnJ6_pos_pressed"
QT_MOC_LITERAL(47, 744, 21), // "on_btnJ6_pos_released"
QT_MOC_LITERAL(48, 766, 31), // "on_chbCoords_currentTextChanged"
QT_MOC_LITERAL(49, 798, 4), // "arg1"
QT_MOC_LITERAL(50, 803, 22), // "on_btnSendProg_clicked"
QT_MOC_LITERAL(51, 826, 23), // "on_btnSpeed_low_clicked"
QT_MOC_LITERAL(52, 850, 23), // "on_btnSpeed_med_clicked"
QT_MOC_LITERAL(53, 874, 24), // "on_btnSpeed_high_clicked"
QT_MOC_LITERAL(54, 899, 23), // "on_btnSpeed_top_clicked"
QT_MOC_LITERAL(55, 923, 23), // "on_btnWriteProg_clicked"
QT_MOC_LITERAL(56, 947, 22), // "on_btnCompProg_clicked"
QT_MOC_LITERAL(57, 970, 30), // "on_comboBox_currentTextChanged"
QT_MOC_LITERAL(58, 1001, 21), // "on_btnDataAdd_clicked"
QT_MOC_LITERAL(59, 1023, 24), // "on_btnSendPoints_clicked"
QT_MOC_LITERAL(60, 1048, 30), // "on_tabJPointList_1_itemClicked"
QT_MOC_LITERAL(61, 1079, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(62, 1097, 4), // "item"
QT_MOC_LITERAL(63, 1102, 30), // "on_tabWPointList_1_itemClicked"
QT_MOC_LITERAL(64, 1133, 30), // "on_tabJPointList_2_itemClicked"
QT_MOC_LITERAL(65, 1164, 30), // "on_tabJPointList_3_itemClicked"
QT_MOC_LITERAL(66, 1195, 30), // "on_tabJPointList_4_itemClicked"
QT_MOC_LITERAL(67, 1226, 30), // "on_tabWPointList_2_itemClicked"
QT_MOC_LITERAL(68, 1257, 30), // "on_tabWPointList_3_itemClicked"
QT_MOC_LITERAL(69, 1288, 30), // "on_tabWPointList_4_itemClicked"
QT_MOC_LITERAL(70, 1319, 24), // "on_chbDIgr1_stateChanged"
QT_MOC_LITERAL(71, 1344, 24), // "on_chbDIgr2_stateChanged"
QT_MOC_LITERAL(72, 1369, 24), // "on_chbDIgr3_stateChanged"
QT_MOC_LITERAL(73, 1394, 24), // "on_chbDIgr4_stateChanged"
QT_MOC_LITERAL(74, 1419, 24), // "on_chbDIgr5_stateChanged"
QT_MOC_LITERAL(75, 1444, 24), // "on_chbDIgr6_stateChanged"
QT_MOC_LITERAL(76, 1469, 24), // "on_chbDIgr7_stateChanged"
QT_MOC_LITERAL(77, 1494, 24), // "on_chbDIgr8_stateChanged"
QT_MOC_LITERAL(78, 1519, 24), // "on_chbDIgr9_stateChanged"
QT_MOC_LITERAL(79, 1544, 25), // "on_chbDIgr10_stateChanged"
QT_MOC_LITERAL(80, 1570, 21), // "on_btnDataDel_clicked"
QT_MOC_LITERAL(81, 1592, 21), // "on_btnOpenPts_clicked"
QT_MOC_LITERAL(82, 1614, 20), // "on_btnSaveIP_clicked"
QT_MOC_LITERAL(83, 1635, 26), // "on_cbEnableDO_stateChanged"
QT_MOC_LITERAL(84, 1662, 24), // "on_chbDOgr1_stateChanged"
QT_MOC_LITERAL(85, 1687, 24), // "on_chbDOgr2_stateChanged"
QT_MOC_LITERAL(86, 1712, 24), // "on_chbDOgr3_stateChanged"
QT_MOC_LITERAL(87, 1737, 24), // "on_chbDOgr4_stateChanged"
QT_MOC_LITERAL(88, 1762, 24), // "on_chbDOgr5_stateChanged"
QT_MOC_LITERAL(89, 1787, 24), // "on_chbDOgr6_stateChanged"
QT_MOC_LITERAL(90, 1812, 24), // "on_chbDOgr7_stateChanged"
QT_MOC_LITERAL(91, 1837, 24), // "on_chbDOgr8_stateChanged"
QT_MOC_LITERAL(92, 1862, 24), // "on_chbDOgr9_stateChanged"
QT_MOC_LITERAL(93, 1887, 25), // "on_chbDOgr10_stateChanged"
QT_MOC_LITERAL(94, 1913, 17), // "on_btnDO1_toggled"
QT_MOC_LITERAL(95, 1931, 7), // "checked"
QT_MOC_LITERAL(96, 1939, 17), // "on_btnDO2_toggled"
QT_MOC_LITERAL(97, 1957, 17), // "on_btnDO3_toggled"
QT_MOC_LITERAL(98, 1975, 17), // "on_btnDO4_toggled"
QT_MOC_LITERAL(99, 1993, 17), // "on_btnDO5_toggled"
QT_MOC_LITERAL(100, 2011, 17), // "on_btnDO6_toggled"
QT_MOC_LITERAL(101, 2029, 17), // "on_btnDO7_toggled"
QT_MOC_LITERAL(102, 2047, 17), // "on_btnDO8_toggled"
QT_MOC_LITERAL(103, 2065, 32), // "on_combSeclvl_currentTextChanged"
QT_MOC_LITERAL(104, 2098, 20), // "on_btnOkpass_clicked"
QT_MOC_LITERAL(105, 2119, 20), // "on_btnRunprg_clicked"
QT_MOC_LITERAL(106, 2140, 22), // "on_btnPauseprg_clicked"
QT_MOC_LITERAL(107, 2163, 21), // "on_btnStopprg_clicked"
QT_MOC_LITERAL(108, 2185, 20), // "on_btnRBMode_toggled"
QT_MOC_LITERAL(109, 2206, 21), // "on_btnRBCLock_toggled"
QT_MOC_LITERAL(110, 2228, 21), // "on_btnRBServo_toggled"
QT_MOC_LITERAL(111, 2250, 19) // "on_btnSimRB_clicked"

    },
    "MainWindow\0UpdateTimerTick\0\0IOAlarmTick\0"
    "Clock\0ServerTimeout\0JogRBTimer\0ReadData\0"
    "UA_Client*\0client\0Alarm\0ReadDeltaData\0"
    "ReadDI\0ReadDO\0DisplayDI\0DisplayDO\0"
    "JogProcess\0number\0SetSttbar\0bset\0"
    "CheckCMDAck\0HistoryEvents\0on_btnStart_clicked\0"
    "on_btnStop_clicked\0on_btnJ1_neg_pressed\0"
    "on_btnJ1_neg_released\0on_btnJ1_pos_pressed\0"
    "on_btnJ1_pos_released\0on_btnJ2_neg_pressed\0"
    "on_btnJ2_neg_released\0on_btnJ2_pos_pressed\0"
    "on_btnJ2_pos_released\0on_btnJ3_neg_pressed\0"
    "on_btnJ3_neg_released\0on_btnJ3_pos_pressed\0"
    "on_btnJ3_pos_released\0on_btnJ4_neg_pressed\0"
    "on_btnJ4_neg_released\0on_btnJ4_pos_pressed\0"
    "on_btnJ4_pos_released\0on_btnJ5_neg_pressed\0"
    "on_btnJ5_neg_released\0on_btnJ5_pos_pressed\0"
    "on_btnJ5_pos_released\0on_btnJ6_neg_pressed\0"
    "on_btnJ6_neg_released\0on_btnJ6_pos_pressed\0"
    "on_btnJ6_pos_released\0"
    "on_chbCoords_currentTextChanged\0arg1\0"
    "on_btnSendProg_clicked\0on_btnSpeed_low_clicked\0"
    "on_btnSpeed_med_clicked\0"
    "on_btnSpeed_high_clicked\0"
    "on_btnSpeed_top_clicked\0on_btnWriteProg_clicked\0"
    "on_btnCompProg_clicked\0"
    "on_comboBox_currentTextChanged\0"
    "on_btnDataAdd_clicked\0on_btnSendPoints_clicked\0"
    "on_tabJPointList_1_itemClicked\0"
    "QTableWidgetItem*\0item\0"
    "on_tabWPointList_1_itemClicked\0"
    "on_tabJPointList_2_itemClicked\0"
    "on_tabJPointList_3_itemClicked\0"
    "on_tabJPointList_4_itemClicked\0"
    "on_tabWPointList_2_itemClicked\0"
    "on_tabWPointList_3_itemClicked\0"
    "on_tabWPointList_4_itemClicked\0"
    "on_chbDIgr1_stateChanged\0"
    "on_chbDIgr2_stateChanged\0"
    "on_chbDIgr3_stateChanged\0"
    "on_chbDIgr4_stateChanged\0"
    "on_chbDIgr5_stateChanged\0"
    "on_chbDIgr6_stateChanged\0"
    "on_chbDIgr7_stateChanged\0"
    "on_chbDIgr8_stateChanged\0"
    "on_chbDIgr9_stateChanged\0"
    "on_chbDIgr10_stateChanged\0"
    "on_btnDataDel_clicked\0on_btnOpenPts_clicked\0"
    "on_btnSaveIP_clicked\0on_cbEnableDO_stateChanged\0"
    "on_chbDOgr1_stateChanged\0"
    "on_chbDOgr2_stateChanged\0"
    "on_chbDOgr3_stateChanged\0"
    "on_chbDOgr4_stateChanged\0"
    "on_chbDOgr5_stateChanged\0"
    "on_chbDOgr6_stateChanged\0"
    "on_chbDOgr7_stateChanged\0"
    "on_chbDOgr8_stateChanged\0"
    "on_chbDOgr9_stateChanged\0"
    "on_chbDOgr10_stateChanged\0on_btnDO1_toggled\0"
    "checked\0on_btnDO2_toggled\0on_btnDO3_toggled\0"
    "on_btnDO4_toggled\0on_btnDO5_toggled\0"
    "on_btnDO6_toggled\0on_btnDO7_toggled\0"
    "on_btnDO8_toggled\0on_combSeclvl_currentTextChanged\0"
    "on_btnOkpass_clicked\0on_btnRunprg_clicked\0"
    "on_btnPauseprg_clicked\0on_btnStopprg_clicked\0"
    "on_btnRBMode_toggled\0on_btnRBCLock_toggled\0"
    "on_btnRBServo_toggled\0on_btnSimRB_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     102,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  524,    2, 0x0a /* Public */,
       3,    0,  525,    2, 0x0a /* Public */,
       4,    0,  526,    2, 0x0a /* Public */,
       5,    0,  527,    2, 0x0a /* Public */,
       6,    0,  528,    2, 0x0a /* Public */,
       7,    1,  529,    2, 0x0a /* Public */,
      10,    1,  532,    2, 0x0a /* Public */,
      11,    1,  535,    2, 0x0a /* Public */,
      12,    1,  538,    2, 0x0a /* Public */,
      13,    1,  541,    2, 0x0a /* Public */,
      14,    0,  544,    2, 0x0a /* Public */,
      15,    0,  545,    2, 0x0a /* Public */,
      16,    1,  546,    2, 0x0a /* Public */,
      18,    1,  549,    2, 0x0a /* Public */,
      20,    0,  552,    2, 0x0a /* Public */,
      21,    0,  553,    2, 0x0a /* Public */,
      22,    0,  554,    2, 0x08 /* Private */,
      23,    0,  555,    2, 0x08 /* Private */,
      24,    0,  556,    2, 0x08 /* Private */,
      25,    0,  557,    2, 0x08 /* Private */,
      26,    0,  558,    2, 0x08 /* Private */,
      27,    0,  559,    2, 0x08 /* Private */,
      28,    0,  560,    2, 0x08 /* Private */,
      29,    0,  561,    2, 0x08 /* Private */,
      30,    0,  562,    2, 0x08 /* Private */,
      31,    0,  563,    2, 0x08 /* Private */,
      32,    0,  564,    2, 0x08 /* Private */,
      33,    0,  565,    2, 0x08 /* Private */,
      34,    0,  566,    2, 0x08 /* Private */,
      35,    0,  567,    2, 0x08 /* Private */,
      36,    0,  568,    2, 0x08 /* Private */,
      37,    0,  569,    2, 0x08 /* Private */,
      38,    0,  570,    2, 0x08 /* Private */,
      39,    0,  571,    2, 0x08 /* Private */,
      40,    0,  572,    2, 0x08 /* Private */,
      41,    0,  573,    2, 0x08 /* Private */,
      42,    0,  574,    2, 0x08 /* Private */,
      43,    0,  575,    2, 0x08 /* Private */,
      44,    0,  576,    2, 0x08 /* Private */,
      45,    0,  577,    2, 0x08 /* Private */,
      46,    0,  578,    2, 0x08 /* Private */,
      47,    0,  579,    2, 0x08 /* Private */,
      48,    1,  580,    2, 0x08 /* Private */,
      50,    0,  583,    2, 0x08 /* Private */,
      51,    0,  584,    2, 0x08 /* Private */,
      52,    0,  585,    2, 0x08 /* Private */,
      53,    0,  586,    2, 0x08 /* Private */,
      54,    0,  587,    2, 0x08 /* Private */,
      55,    0,  588,    2, 0x08 /* Private */,
      56,    0,  589,    2, 0x08 /* Private */,
      57,    1,  590,    2, 0x08 /* Private */,
      58,    0,  593,    2, 0x08 /* Private */,
      59,    0,  594,    2, 0x08 /* Private */,
      60,    1,  595,    2, 0x08 /* Private */,
      63,    1,  598,    2, 0x08 /* Private */,
      64,    1,  601,    2, 0x08 /* Private */,
      65,    1,  604,    2, 0x08 /* Private */,
      66,    1,  607,    2, 0x08 /* Private */,
      67,    1,  610,    2, 0x08 /* Private */,
      68,    1,  613,    2, 0x08 /* Private */,
      69,    1,  616,    2, 0x08 /* Private */,
      70,    1,  619,    2, 0x08 /* Private */,
      71,    1,  622,    2, 0x08 /* Private */,
      72,    1,  625,    2, 0x08 /* Private */,
      73,    1,  628,    2, 0x08 /* Private */,
      74,    1,  631,    2, 0x08 /* Private */,
      75,    1,  634,    2, 0x08 /* Private */,
      76,    1,  637,    2, 0x08 /* Private */,
      77,    1,  640,    2, 0x08 /* Private */,
      78,    1,  643,    2, 0x08 /* Private */,
      79,    1,  646,    2, 0x08 /* Private */,
      80,    0,  649,    2, 0x08 /* Private */,
      81,    0,  650,    2, 0x08 /* Private */,
      82,    0,  651,    2, 0x08 /* Private */,
      83,    1,  652,    2, 0x08 /* Private */,
      84,    1,  655,    2, 0x08 /* Private */,
      85,    1,  658,    2, 0x08 /* Private */,
      86,    1,  661,    2, 0x08 /* Private */,
      87,    1,  664,    2, 0x08 /* Private */,
      88,    1,  667,    2, 0x08 /* Private */,
      89,    1,  670,    2, 0x08 /* Private */,
      90,    1,  673,    2, 0x08 /* Private */,
      91,    1,  676,    2, 0x08 /* Private */,
      92,    1,  679,    2, 0x08 /* Private */,
      93,    1,  682,    2, 0x08 /* Private */,
      94,    1,  685,    2, 0x08 /* Private */,
      96,    1,  688,    2, 0x08 /* Private */,
      97,    1,  691,    2, 0x08 /* Private */,
      98,    1,  694,    2, 0x08 /* Private */,
      99,    1,  697,    2, 0x08 /* Private */,
     100,    1,  700,    2, 0x08 /* Private */,
     101,    1,  703,    2, 0x08 /* Private */,
     102,    1,  706,    2, 0x08 /* Private */,
     103,    1,  709,    2, 0x08 /* Private */,
     104,    0,  712,    2, 0x08 /* Private */,
     105,    0,  713,    2, 0x08 /* Private */,
     106,    0,  714,    2, 0x08 /* Private */,
     107,    0,  715,    2, 0x08 /* Private */,
     108,    1,  716,    2, 0x08 /* Private */,
     109,    1,  719,    2, 0x08 /* Private */,
     110,    1,  722,    2, 0x08 /* Private */,
     111,    0,  725,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Bool,   19,
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
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 61,   62,
    QMetaType::Void, 0x80000000 | 61,   62,
    QMetaType::Void, 0x80000000 | 61,   62,
    QMetaType::Void, 0x80000000 | 61,   62,
    QMetaType::Void, 0x80000000 | 61,   62,
    QMetaType::Void, 0x80000000 | 61,   62,
    QMetaType::Void, 0x80000000 | 61,   62,
    QMetaType::Void, 0x80000000 | 61,   62,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void, QMetaType::Bool,   95,
    QMetaType::Void, QMetaType::Bool,   95,
    QMetaType::Void, QMetaType::Bool,   95,
    QMetaType::Void, QMetaType::Bool,   95,
    QMetaType::Void, QMetaType::Bool,   95,
    QMetaType::Void, QMetaType::Bool,   95,
    QMetaType::Void, QMetaType::Bool,   95,
    QMetaType::Void, QMetaType::Bool,   95,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   95,
    QMetaType::Void, QMetaType::Bool,   95,
    QMetaType::Void, QMetaType::Bool,   95,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdateTimerTick(); break;
        case 1: _t->IOAlarmTick(); break;
        case 2: _t->Clock(); break;
        case 3: _t->ServerTimeout(); break;
        case 4: _t->JogRBTimer(); break;
        case 5: _t->ReadData((*reinterpret_cast< UA_Client*(*)>(_a[1]))); break;
        case 6: _t->Alarm((*reinterpret_cast< UA_Client*(*)>(_a[1]))); break;
        case 7: _t->ReadDeltaData((*reinterpret_cast< UA_Client*(*)>(_a[1]))); break;
        case 8: _t->ReadDI((*reinterpret_cast< UA_Client*(*)>(_a[1]))); break;
        case 9: _t->ReadDO((*reinterpret_cast< UA_Client*(*)>(_a[1]))); break;
        case 10: _t->DisplayDI(); break;
        case 11: _t->DisplayDO(); break;
        case 12: _t->JogProcess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->SetSttbar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->CheckCMDAck(); break;
        case 15: _t->HistoryEvents(); break;
        case 16: _t->on_btnStart_clicked(); break;
        case 17: _t->on_btnStop_clicked(); break;
        case 18: _t->on_btnJ1_neg_pressed(); break;
        case 19: _t->on_btnJ1_neg_released(); break;
        case 20: _t->on_btnJ1_pos_pressed(); break;
        case 21: _t->on_btnJ1_pos_released(); break;
        case 22: _t->on_btnJ2_neg_pressed(); break;
        case 23: _t->on_btnJ2_neg_released(); break;
        case 24: _t->on_btnJ2_pos_pressed(); break;
        case 25: _t->on_btnJ2_pos_released(); break;
        case 26: _t->on_btnJ3_neg_pressed(); break;
        case 27: _t->on_btnJ3_neg_released(); break;
        case 28: _t->on_btnJ3_pos_pressed(); break;
        case 29: _t->on_btnJ3_pos_released(); break;
        case 30: _t->on_btnJ4_neg_pressed(); break;
        case 31: _t->on_btnJ4_neg_released(); break;
        case 32: _t->on_btnJ4_pos_pressed(); break;
        case 33: _t->on_btnJ4_pos_released(); break;
        case 34: _t->on_btnJ5_neg_pressed(); break;
        case 35: _t->on_btnJ5_neg_released(); break;
        case 36: _t->on_btnJ5_pos_pressed(); break;
        case 37: _t->on_btnJ5_pos_released(); break;
        case 38: _t->on_btnJ6_neg_pressed(); break;
        case 39: _t->on_btnJ6_neg_released(); break;
        case 40: _t->on_btnJ6_pos_pressed(); break;
        case 41: _t->on_btnJ6_pos_released(); break;
        case 42: _t->on_chbCoords_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 43: _t->on_btnSendProg_clicked(); break;
        case 44: _t->on_btnSpeed_low_clicked(); break;
        case 45: _t->on_btnSpeed_med_clicked(); break;
        case 46: _t->on_btnSpeed_high_clicked(); break;
        case 47: _t->on_btnSpeed_top_clicked(); break;
        case 48: _t->on_btnWriteProg_clicked(); break;
        case 49: _t->on_btnCompProg_clicked(); break;
        case 50: _t->on_comboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 51: _t->on_btnDataAdd_clicked(); break;
        case 52: _t->on_btnSendPoints_clicked(); break;
        case 53: _t->on_tabJPointList_1_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 54: _t->on_tabWPointList_1_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 55: _t->on_tabJPointList_2_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 56: _t->on_tabJPointList_3_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 57: _t->on_tabJPointList_4_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 58: _t->on_tabWPointList_2_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 59: _t->on_tabWPointList_3_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 60: _t->on_tabWPointList_4_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 61: _t->on_chbDIgr1_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 62: _t->on_chbDIgr2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 63: _t->on_chbDIgr3_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 64: _t->on_chbDIgr4_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 65: _t->on_chbDIgr5_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 66: _t->on_chbDIgr6_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 67: _t->on_chbDIgr7_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 68: _t->on_chbDIgr8_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 69: _t->on_chbDIgr9_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 70: _t->on_chbDIgr10_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 71: _t->on_btnDataDel_clicked(); break;
        case 72: _t->on_btnOpenPts_clicked(); break;
        case 73: _t->on_btnSaveIP_clicked(); break;
        case 74: _t->on_cbEnableDO_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 75: _t->on_chbDOgr1_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 76: _t->on_chbDOgr2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 77: _t->on_chbDOgr3_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 78: _t->on_chbDOgr4_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 79: _t->on_chbDOgr5_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 80: _t->on_chbDOgr6_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 81: _t->on_chbDOgr7_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 82: _t->on_chbDOgr8_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 83: _t->on_chbDOgr9_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 84: _t->on_chbDOgr10_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 85: _t->on_btnDO1_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 86: _t->on_btnDO2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 87: _t->on_btnDO3_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 88: _t->on_btnDO4_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 89: _t->on_btnDO5_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 90: _t->on_btnDO6_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 91: _t->on_btnDO7_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 92: _t->on_btnDO8_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 93: _t->on_combSeclvl_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 94: _t->on_btnOkpass_clicked(); break;
        case 95: _t->on_btnRunprg_clicked(); break;
        case 96: _t->on_btnPauseprg_clicked(); break;
        case 97: _t->on_btnStopprg_clicked(); break;
        case 98: _t->on_btnRBMode_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 99: _t->on_btnRBCLock_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 100: _t->on_btnRBServo_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 101: _t->on_btnSimRB_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 102)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 102;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 102)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 102;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
