#pragma once
#include <vector>
#include "Observer.h"

class Subject
{
	std::vector<Observer*> repo;

public:
	void registerObserver(Observer* obs);
	void unregisterObserver(Observer* obs);
	void notifiy();
};

