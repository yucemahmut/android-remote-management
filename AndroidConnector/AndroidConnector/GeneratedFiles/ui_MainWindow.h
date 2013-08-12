/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AndroidConnectorClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AndroidConnectorClass)
    {
        if (AndroidConnectorClass->objectName().isEmpty())
            AndroidConnectorClass->setObjectName(QStringLiteral("AndroidConnectorClass"));
        AndroidConnectorClass->resize(600, 400);
        menuBar = new QMenuBar(AndroidConnectorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        AndroidConnectorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AndroidConnectorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AndroidConnectorClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(AndroidConnectorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        AndroidConnectorClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AndroidConnectorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AndroidConnectorClass->setStatusBar(statusBar);

        retranslateUi(AndroidConnectorClass);

        QMetaObject::connectSlotsByName(AndroidConnectorClass);
    } // setupUi

    void retranslateUi(QMainWindow *AndroidConnectorClass)
    {
        AndroidConnectorClass->setWindowTitle(QApplication::translate("AndroidConnectorClass", "AndroidConnector", 0));
    } // retranslateUi

};

namespace Ui {
    class AndroidConnectorClass: public Ui_AndroidConnectorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
