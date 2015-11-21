/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Open;
    QAction *action_Close;
    QAction *action_Clear;
    QAction *action_Refresh;
    QAction *action_export;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_data;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_settings;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *TextEdit_char;
    QPlainTextEdit *TextEdit_code;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_ports;
    QComboBox *comboBox_ports;
    QLabel *label_Baud;
    QComboBox *comboBox_Baud;
    QLabel *label_Databit;
    QComboBox *comboBox_Databit;
    QLabel *label_Parity;
    QComboBox *comboBox_Parity;
    QLabel *label_Stop;
    QComboBox *comboBox_Stopbit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_char;
    QLineEdit *lineEdit_lf;
    QPushButton *pushButton_charwn;
    QPushButton *pushButton_char;
    QSpinBox *spinBox_char;
    QPushButton *pushButton_run1;
    QLineEdit *lineEdit_code;
    QPushButton *pushButton_code;
    QSpinBox *spinBox_code;
    QPushButton *pushButton_run2;
    QWidget *tab_graph;
    QVBoxLayout *verticalLayout_6;
    QCustomPlot *plot;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(816, 634);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        action_Close = new QAction(MainWindow);
        action_Close->setObjectName(QStringLiteral("action_Close"));
        action_Close->setEnabled(false);
        action_Clear = new QAction(MainWindow);
        action_Clear->setObjectName(QStringLiteral("action_Clear"));
        action_Refresh = new QAction(MainWindow);
        action_Refresh->setObjectName(QStringLiteral("action_Refresh"));
        action_export = new QAction(MainWindow);
        action_export->setObjectName(QStringLiteral("action_export"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_data = new QWidget();
        tab_data->setObjectName(QStringLiteral("tab_data"));
        verticalLayout_5 = new QVBoxLayout(tab_data);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_settings = new QGroupBox(tab_data);
        groupBox_settings->setObjectName(QStringLiteral("groupBox_settings"));
        groupBox_settings->setMinimumSize(QSize(150, 60));
        verticalLayout_4 = new QVBoxLayout(groupBox_settings);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        TextEdit_char = new QPlainTextEdit(groupBox_settings);
        TextEdit_char->setObjectName(QStringLiteral("TextEdit_char"));
        QFont font;
        font.setFamily(QStringLiteral("Tahoma"));
        font.setKerning(true);
        TextEdit_char->setFont(font);
        TextEdit_char->setAcceptDrops(false);
#ifndef QT_NO_TOOLTIP
        TextEdit_char->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        TextEdit_char->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        TextEdit_char->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        TextEdit_char->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        TextEdit_char->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        TextEdit_char->setFrameShape(QFrame::StyledPanel);
        TextEdit_char->setFrameShadow(QFrame::Sunken);
        TextEdit_char->setDocumentTitle(QStringLiteral(""));
        TextEdit_char->setUndoRedoEnabled(false);
        TextEdit_char->setReadOnly(true);
        TextEdit_char->setPlainText(QStringLiteral(""));
        TextEdit_char->setTextInteractionFlags(Qt::TextSelectableByMouse);

        verticalLayout_4->addWidget(TextEdit_char);

        TextEdit_code = new QPlainTextEdit(groupBox_settings);
        TextEdit_code->setObjectName(QStringLiteral("TextEdit_code"));
        QFont font1;
        font1.setFamily(QStringLiteral("Tahoma"));
        TextEdit_code->setFont(font1);
        TextEdit_code->setAcceptDrops(false);
#ifndef QT_NO_TOOLTIP
        TextEdit_code->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        TextEdit_code->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        TextEdit_code->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        TextEdit_code->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        TextEdit_code->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        TextEdit_code->setUndoRedoEnabled(false);
        TextEdit_code->setReadOnly(true);
        TextEdit_code->setBackgroundVisible(false);
        TextEdit_code->setCenterOnScroll(false);

        verticalLayout_4->addWidget(TextEdit_code);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_ports = new QLabel(groupBox_settings);
        label_ports->setObjectName(QStringLiteral("label_ports"));

        horizontalLayout->addWidget(label_ports);

        comboBox_ports = new QComboBox(groupBox_settings);
        comboBox_ports->setObjectName(QStringLiteral("comboBox_ports"));

        horizontalLayout->addWidget(comboBox_ports);

        label_Baud = new QLabel(groupBox_settings);
        label_Baud->setObjectName(QStringLiteral("label_Baud"));
        label_Baud->setTextFormat(Qt::AutoText);

        horizontalLayout->addWidget(label_Baud);

        comboBox_Baud = new QComboBox(groupBox_settings);
        comboBox_Baud->setObjectName(QStringLiteral("comboBox_Baud"));

        horizontalLayout->addWidget(comboBox_Baud);

        label_Databit = new QLabel(groupBox_settings);
        label_Databit->setObjectName(QStringLiteral("label_Databit"));
        label_Databit->setMaximumSize(QSize(16777215, 16777214));

        horizontalLayout->addWidget(label_Databit);

        comboBox_Databit = new QComboBox(groupBox_settings);
        comboBox_Databit->setObjectName(QStringLiteral("comboBox_Databit"));

        horizontalLayout->addWidget(comboBox_Databit);

        label_Parity = new QLabel(groupBox_settings);
        label_Parity->setObjectName(QStringLiteral("label_Parity"));

        horizontalLayout->addWidget(label_Parity);

        comboBox_Parity = new QComboBox(groupBox_settings);
        comboBox_Parity->setObjectName(QStringLiteral("comboBox_Parity"));

        horizontalLayout->addWidget(comboBox_Parity);

        label_Stop = new QLabel(groupBox_settings);
        label_Stop->setObjectName(QStringLiteral("label_Stop"));

        horizontalLayout->addWidget(label_Stop);

        comboBox_Stopbit = new QComboBox(groupBox_settings);
        comboBox_Stopbit->setObjectName(QStringLiteral("comboBox_Stopbit"));

        horizontalLayout->addWidget(comboBox_Stopbit);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit_char = new QLineEdit(groupBox_settings);
        lineEdit_char->setObjectName(QStringLiteral("lineEdit_char"));
        lineEdit_char->setEnabled(false);
        lineEdit_char->setMinimumSize(QSize(150, 0));
        lineEdit_char->setFont(font1);

        horizontalLayout_2->addWidget(lineEdit_char);

        lineEdit_lf = new QLineEdit(groupBox_settings);
        lineEdit_lf->setObjectName(QStringLiteral("lineEdit_lf"));
        lineEdit_lf->setEnabled(false);
        lineEdit_lf->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_2->addWidget(lineEdit_lf);

        pushButton_charwn = new QPushButton(groupBox_settings);
        pushButton_charwn->setObjectName(QStringLiteral("pushButton_charwn"));
        pushButton_charwn->setEnabled(false);
        pushButton_charwn->setMaximumSize(QSize(41, 16777215));

        horizontalLayout_2->addWidget(pushButton_charwn);

        pushButton_char = new QPushButton(groupBox_settings);
        pushButton_char->setObjectName(QStringLiteral("pushButton_char"));
        pushButton_char->setEnabled(false);
        pushButton_char->setMaximumSize(QSize(41, 16777215));

        horizontalLayout_2->addWidget(pushButton_char);

        spinBox_char = new QSpinBox(groupBox_settings);
        spinBox_char->setObjectName(QStringLiteral("spinBox_char"));
        spinBox_char->setEnabled(true);
        spinBox_char->setMinimumSize(QSize(60, 0));
        spinBox_char->setMaximumSize(QSize(60, 16777215));
        spinBox_char->setMinimum(5);
        spinBox_char->setMaximum(100000);

        horizontalLayout_2->addWidget(spinBox_char);

        pushButton_run1 = new QPushButton(groupBox_settings);
        pushButton_run1->setObjectName(QStringLiteral("pushButton_run1"));
        pushButton_run1->setEnabled(false);
        pushButton_run1->setMinimumSize(QSize(30, 0));
        pushButton_run1->setMaximumSize(QSize(30, 16777214));
        pushButton_run1->setCheckable(true);
        pushButton_run1->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_run1);

        lineEdit_code = new QLineEdit(groupBox_settings);
        lineEdit_code->setObjectName(QStringLiteral("lineEdit_code"));
        lineEdit_code->setEnabled(false);
        lineEdit_code->setMinimumSize(QSize(30, 0));
        lineEdit_code->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(lineEdit_code);

        pushButton_code = new QPushButton(groupBox_settings);
        pushButton_code->setObjectName(QStringLiteral("pushButton_code"));
        pushButton_code->setEnabled(false);
        pushButton_code->setMaximumSize(QSize(41, 16777215));

        horizontalLayout_2->addWidget(pushButton_code);

        spinBox_code = new QSpinBox(groupBox_settings);
        spinBox_code->setObjectName(QStringLiteral("spinBox_code"));
        spinBox_code->setEnabled(true);
        spinBox_code->setMinimumSize(QSize(60, 0));
        spinBox_code->setMaximumSize(QSize(60, 16777215));
        spinBox_code->setMinimum(5);
        spinBox_code->setMaximum(100000);
        spinBox_code->setValue(10);

        horizontalLayout_2->addWidget(spinBox_code);

        pushButton_run2 = new QPushButton(groupBox_settings);
        pushButton_run2->setObjectName(QStringLiteral("pushButton_run2"));
        pushButton_run2->setEnabled(false);
        pushButton_run2->setMinimumSize(QSize(30, 0));
        pushButton_run2->setMaximumSize(QSize(30, 16777215));
        pushButton_run2->setCheckable(true);
        pushButton_run2->setFlat(true);

        horizontalLayout_2->addWidget(pushButton_run2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout->addWidget(groupBox_settings);


        verticalLayout_5->addLayout(verticalLayout);

        tabWidget->addTab(tab_data, QString());
        tab_graph = new QWidget();
        tab_graph->setObjectName(QStringLiteral("tab_graph"));
        verticalLayout_6 = new QVBoxLayout(tab_graph);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        plot = new QCustomPlot(tab_graph);
        plot->setObjectName(QStringLiteral("plot"));

        verticalLayout_6->addWidget(plot);

        tabWidget->addTab(tab_graph, QString());

        verticalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(action_Open);
        mainToolBar->addAction(action_Close);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Clear);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_Refresh);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_export);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "My Serial Monitor", 0));
        action_Open->setText(QApplication::translate("MainWindow", "Open Port", 0));
#ifndef QT_NO_TOOLTIP
        action_Open->setToolTip(QApplication::translate("MainWindow", "Open Port", 0));
#endif // QT_NO_TOOLTIP
        action_Close->setText(QApplication::translate("MainWindow", "Close Port", 0));
#ifndef QT_NO_TOOLTIP
        action_Close->setToolTip(QApplication::translate("MainWindow", "Close port.", 0));
#endif // QT_NO_TOOLTIP
        action_Clear->setText(QApplication::translate("MainWindow", "Clear", 0));
        action_Refresh->setText(QApplication::translate("MainWindow", "Refresh", 0));
        action_export->setText(QApplication::translate("MainWindow", "Export", 0));
        groupBox_settings->setTitle(QString());
        label_ports->setText(QApplication::translate("MainWindow", "Ports :", 0));
        label_Baud->setText(QApplication::translate("MainWindow", "Baud :", 0));
        label_Databit->setText(QApplication::translate("MainWindow", "Data :", 0));
        label_Parity->setText(QApplication::translate("MainWindow", "Parity :", 0));
        label_Stop->setText(QApplication::translate("MainWindow", "Stop :", 0));
        lineEdit_char->setText(QApplication::translate("MainWindow", "TEXT", 0));
#ifndef QT_NO_STATUSTIP
        lineEdit_lf->setStatusTip(QApplication::translate("MainWindow", "Line Feed Chars", 0));
#endif // QT_NO_STATUSTIP
        lineEdit_lf->setText(QApplication::translate("MainWindow", "10", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_charwn->setToolTip(QApplication::translate("MainWindow", "Send Code Without Line Feed", 0));
#endif // QT_NO_TOOLTIP
        pushButton_charwn->setText(QApplication::translate("MainWindow", "Send", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_char->setToolTip(QApplication::translate("MainWindow", "Send Code With Line Feed", 0));
#endif // QT_NO_TOOLTIP
        pushButton_char->setText(QApplication::translate("MainWindow", "Send", 0));
#ifndef QT_NO_TOOLTIP
        spinBox_char->setToolTip(QApplication::translate("MainWindow", "Interval", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton_run1->setToolTip(QApplication::translate("MainWindow", "Repeatedly Send Line Code With Line Feed", 0));
#endif // QT_NO_TOOLTIP
        pushButton_run1->setText(QApplication::translate("MainWindow", "Run", 0));
        lineEdit_code->setInputMask(QApplication::translate("MainWindow", "1", 0));
#ifndef QT_NO_TOOLTIP
        pushButton_code->setToolTip(QApplication::translate("MainWindow", "Send Integert Code", 0));
#endif // QT_NO_TOOLTIP
        pushButton_code->setText(QApplication::translate("MainWindow", "Send", 0));
#ifndef QT_NO_TOOLTIP
        spinBox_code->setToolTip(QApplication::translate("MainWindow", "Interval", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton_run2->setToolTip(QApplication::translate("MainWindow", "Repeatedly Send Integer Code", 0));
#endif // QT_NO_TOOLTIP
        pushButton_run2->setText(QApplication::translate("MainWindow", "Run", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_data), QApplication::translate("MainWindow", "Data", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_graph), QApplication::translate("MainWindow", "Graph", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
