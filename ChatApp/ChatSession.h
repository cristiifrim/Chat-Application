#pragma once
#include "UserMessage.h"
#include <vector>
#include "Subject.h"

class ChatSession : public Subject
{
	std::vector<UserMessage> repo;
public:
	void addMessage(const std::string& user, const std::string& msg);
	std::vector<UserMessage> getMessages() const { return this->repo; }
};

