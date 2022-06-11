#pragma once

#include <QWidget>
#include "ui_ChatWindow.h"
#include "Observer.h"
#include "ChatSession.h"
#include <string>

class ChatWindow : public QWidget, public Observer
{
	Q_OBJECT

public:
	ChatWindow(const std::string& name, ChatSession& ss, QWidget *parent = Q_NULLPTR);
	~ChatWindow();
	void update() override;
	void sendMessage();

private:
	Ui::ChatWindow ui;
	std::string user;
	ChatSession& session;

	void connectSignalsAndSlots();

};
