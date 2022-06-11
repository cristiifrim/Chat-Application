#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_chatapp.h"

class ChatApp : public QMainWindow
{
    Q_OBJECT

public:
    ChatApp(QWidget *parent = Q_NULLPTR);

private:
    Ui::ChatAppClass ui;
};
