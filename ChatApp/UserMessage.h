#pragma once
#include <string>


class UserMessage
{
	std::string user;
	std::string message;

public:
	UserMessage() {}
	UserMessage(const std::string& usr, const std::string& msg) : user{usr}, message{msg} {}
	std::string getUser() const { return this->user; }
	std::string getMsg() const { return this->message; }
};

