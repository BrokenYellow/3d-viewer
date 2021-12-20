/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnScale;
    QPushButton *btnMove;
    QFrame *line;
    QPushButton *btnRotate;
    QPushButton *btnImport;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_11;
    QLineEdit *txtDeltaY;
    QLineEdit *txtDeltaX;
    QLineEdit *txtDeltaZ;
    QLabel *label_16;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_12;
    QLineEdit *txtRotCenterX;
    QLineEdit *txtRotCenterY;
    QLineEdit *txtRotCenterZ;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *txtRotAngleOX;
    QLineEdit *txtRotAngleOY;
    QLineEdit *txtRotAngleOZ;
    QGraphicsView *graphicsView;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_13;
    QLineEdit *txtScaleCenterX;
    QLineEdit *txtScaleZ;
    QLineEdit *txtScaleCenterZ;
    QLineEdit *txtScaleY;
    QLabel *label_20;
    QLabel *label_19;
    QLineEdit *txtScaleX;
    QLineEdit *txtScaleCenterY;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(957, 696);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        btnScale = new QPushButton(centralwidget);
        btnScale->setObjectName(QStringLiteral("btnScale"));
        btnScale->setGeometry(QRect(110, 598, 151, 41));
        btnMove = new QPushButton(centralwidget);
        btnMove->setObjectName(QStringLiteral("btnMove"));
        btnMove->setGeometry(QRect(110, 159, 151, 41));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(270, 20, 20, 621));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        btnRotate = new QPushButton(centralwidget);
        btnRotate->setObjectName(QStringLiteral("btnRotate"));
        btnRotate->setGeometry(QRect(110, 380, 151, 41));
        btnImport = new QPushButton(centralwidget);
        btnImport->setObjectName(QStringLiteral("btnImport"));
        btnImport->setGeometry(QRect(20, 20, 241, 41));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 78, 241, 61));
        gridLayout_11 = new QGridLayout(gridLayoutWidget);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        txtDeltaY = new QLineEdit(gridLayoutWidget);
        txtDeltaY->setObjectName(QStringLiteral("txtDeltaY"));

        gridLayout_11->addWidget(txtDeltaY, 1, 1, 1, 1);

        txtDeltaX = new QLineEdit(gridLayoutWidget);
        txtDeltaX->setObjectName(QStringLiteral("txtDeltaX"));

        gridLayout_11->addWidget(txtDeltaX, 1, 0, 1, 1);

        txtDeltaZ = new QLineEdit(gridLayoutWidget);
        txtDeltaZ->setObjectName(QStringLiteral("txtDeltaZ"));

        gridLayout_11->addWidget(txtDeltaZ, 1, 2, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_11->addWidget(label_16, 0, 0, 1, 3);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 238, 241, 121));
        gridLayout_12 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        txtRotCenterX = new QLineEdit(gridLayoutWidget_2);
        txtRotCenterX->setObjectName(QStringLiteral("txtRotCenterX"));

        gridLayout_12->addWidget(txtRotCenterX, 1, 0, 1, 1);

        txtRotCenterY = new QLineEdit(gridLayoutWidget_2);
        txtRotCenterY->setObjectName(QStringLiteral("txtRotCenterY"));

        gridLayout_12->addWidget(txtRotCenterY, 1, 1, 1, 1);

        txtRotCenterZ = new QLineEdit(gridLayoutWidget_2);
        txtRotCenterZ->setObjectName(QStringLiteral("txtRotCenterZ"));

        gridLayout_12->addWidget(txtRotCenterZ, 1, 2, 1, 1);

        label_17 = new QLabel(gridLayoutWidget_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_12->addWidget(label_17, 0, 0, 1, 3);

        label_18 = new QLabel(gridLayoutWidget_2);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_12->addWidget(label_18, 2, 0, 1, 3);

        txtRotAngleOX = new QLineEdit(gridLayoutWidget_2);
        txtRotAngleOX->setObjectName(QStringLiteral("txtRotAngleOX"));

        gridLayout_12->addWidget(txtRotAngleOX, 3, 0, 1, 1);

        txtRotAngleOY = new QLineEdit(gridLayoutWidget_2);
        txtRotAngleOY->setObjectName(QStringLiteral("txtRotAngleOY"));

        gridLayout_12->addWidget(txtRotAngleOY, 3, 1, 1, 1);

        txtRotAngleOZ = new QLineEdit(gridLayoutWidget_2);
        txtRotAngleOZ->setObjectName(QStringLiteral("txtRotAngleOZ"));

        gridLayout_12->addWidget(txtRotAngleOZ, 3, 2, 1, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(300, 20, 631, 621));
        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(20, 448, 241, 131));
        gridLayout_13 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        txtScaleCenterX = new QLineEdit(gridLayoutWidget_3);
        txtScaleCenterX->setObjectName(QStringLiteral("txtScaleCenterX"));

        gridLayout_13->addWidget(txtScaleCenterX, 1, 0, 1, 1);

        txtScaleZ = new QLineEdit(gridLayoutWidget_3);
        txtScaleZ->setObjectName(QStringLiteral("txtScaleZ"));

        gridLayout_13->addWidget(txtScaleZ, 3, 2, 1, 1);

        txtScaleCenterZ = new QLineEdit(gridLayoutWidget_3);
        txtScaleCenterZ->setObjectName(QStringLiteral("txtScaleCenterZ"));

        gridLayout_13->addWidget(txtScaleCenterZ, 1, 2, 1, 1);

        txtScaleY = new QLineEdit(gridLayoutWidget_3);
        txtScaleY->setObjectName(QStringLiteral("txtScaleY"));

        gridLayout_13->addWidget(txtScaleY, 3, 1, 1, 1);

        label_20 = new QLabel(gridLayoutWidget_3);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_13->addWidget(label_20, 2, 0, 1, 3);

        label_19 = new QLabel(gridLayoutWidget_3);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_13->addWidget(label_19, 0, 0, 1, 3);

        txtScaleX = new QLineEdit(gridLayoutWidget_3);
        txtScaleX->setObjectName(QStringLiteral("txtScaleX"));

        gridLayout_13->addWidget(txtScaleX, 3, 0, 1, 1);

        txtScaleCenterY = new QLineEdit(gridLayoutWidget_3);
        txtScaleCenterY->setObjectName(QStringLiteral("txtScaleCenterY"));

        gridLayout_13->addWidget(txtScaleCenterY, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 957, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        btnScale->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", 0));
        btnMove->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\275\320\276\321\201", 0));
        btnRotate->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202", 0));
        btnImport->setText(QApplication::translate("MainWindow", "\320\230\320\274\320\277\320\276\321\200\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        label_16->setText(QApplication::translate("MainWindow", "\320\241\320\274\320\265\321\211\320\265\320\275\320\270\321\217 \320\277\320\276 \320\276\321\201\321\217\320\274", 0));
        label_17->setText(QApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 \320\277\320\276\320\262\320\276\321\200\320\276\321\202\320\260", 0));
        label_18->setText(QApplication::translate("MainWindow", "\320\243\320\263\320\273\321\213 \320\277\320\276\320\262\320\276\321\200\320\276\321\202\320\260 \320\262\320\276\320\272\321\200\321\203\320\263 \321\202\321\200\320\265\321\205 \320\276\321\201\320\265\320\271", 0));
        label_20->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\265\321\204\321\204\320\270\321\206\320\265\320\275\321\202\321\213 \320\274\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", 0));
        label_19->setText(QApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200 \320\274\320\260\321\201\321\210\321\202\320\260\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
