/********************************************************************************
** Form generated from reading UI file 'chatapp.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATAPP_H
#define UI_CHATAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatAppClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ChatAppClass)
    {
        if (ChatAppClass->objectName().isEmpty())
            ChatAppClass->setObjectName(QString::fromUtf8("ChatAppClass"));
        ChatAppClass->resize(600, 400);
        menuBar = new QMenuBar(ChatAppClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        ChatAppClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ChatAppClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ChatAppClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ChatAppClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ChatAppClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ChatAppClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ChatAppClass->setStatusBar(statusBar);

        retranslateUi(ChatAppClass);

        QMetaObject::connectSlotsByName(ChatAppClass);
    } // setupUi

    void retranslateUi(QMainWindow *ChatAppClass)
    {
        ChatAppClass->setWindowTitle(QCoreApplication::translate("ChatAppClass", "ChatApp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatAppClass: public Ui_ChatAppClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATAPP_H
