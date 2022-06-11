/********************************************************************************
** Form generated from reading UI file 'ChatWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindow
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QGridLayout *gridLayout;
    QPushButton *msgSend;
    QLineEdit *msgEdit;

    void setupUi(QWidget *ChatWindow)
    {
        if (ChatWindow->objectName().isEmpty())
            ChatWindow->setObjectName(QString::fromUtf8("ChatWindow"));
        ChatWindow->resize(312, 440);
        verticalLayout = new QVBoxLayout(ChatWindow);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(ChatWindow);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        msgSend = new QPushButton(ChatWindow);
        msgSend->setObjectName(QString::fromUtf8("msgSend"));
        msgSend->setStyleSheet(QString::fromUtf8("font: 700 italic 11pt \"Segoe UI\";"));

        gridLayout->addWidget(msgSend, 0, 1, 1, 1);

        msgEdit = new QLineEdit(ChatWindow);
        msgEdit->setObjectName(QString::fromUtf8("msgEdit"));

        gridLayout->addWidget(msgEdit, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(ChatWindow);

        QMetaObject::connectSlotsByName(ChatWindow);
    } // setupUi

    void retranslateUi(QWidget *ChatWindow)
    {
        ChatWindow->setWindowTitle(QCoreApplication::translate("ChatWindow", "ChatWindow", nullptr));
        msgSend->setText(QCoreApplication::translate("ChatWindow", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatWindow: public Ui_ChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
