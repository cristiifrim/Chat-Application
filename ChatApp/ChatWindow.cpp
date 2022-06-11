#include "ChatWindow.h"

ChatWindow::ChatWindow(const std::string& name, ChatSession& ss, QWidget *parent)
	: QWidget(parent), user{name}, session{ss}
{
	this->session.registerObserver(this);
	ui.setupUi(this);
	connectSignalsAndSlots();
	this->setWindowTitle(QString::fromStdString(name));
}

ChatWindow::~ChatWindow()
{
}

void ChatWindow::update()
{
	this->ui.listWidget->clear();
	for (auto it : this->session.getMessages())
		this->ui.listWidget->addItem(QString::fromStdString(it.getUser() + ": " + it.getMsg()));
}

void ChatWindow::sendMessage()
{
	std::string msg = this->ui.msgEdit->text().toStdString();
	this->session.addMessage(this->user, msg);
}

void ChatWindow::connectSignalsAndSlots()
{
	QObject::connect(this->ui.msgSend, &QAbstractButton::clicked, this, &ChatWindow::sendMessage);
}
