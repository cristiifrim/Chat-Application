#include "Subject.h"

void Subject::registerObserver(Observer* obs)
{
	repo.push_back(obs);
}

void Subject::unregisterObserver(Observer* obs)
{
	for (int i = 0; i < repo.size(); ++i) {
		if (repo[i] == obs) {
			repo.erase(repo.begin() + i);
			return;
		}
	}
}

void Subject::notifiy()
{
	for (auto it : repo)
		it->update();
}


