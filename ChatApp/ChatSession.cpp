#include "ChatSession.h"

void ChatSession::addMessage(const std::string& user, const std::string& msg)
{
	UserMessage message{ user, msg };
	this->repo.push_back(message);
	this->notifiy();
}
