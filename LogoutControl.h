#pragma once
#include "Session.h"

class LogoutControl {
private:
	Session* session;
public:
	LogoutControl(Session* session)
		: session(session) {}
	void logout();
};