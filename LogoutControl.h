#pragma once
#include "Session.h"

/// <summary>
/// Logout Control Class
/// </summary>
class LogoutControl {
private:
	Session* session;
public:
	LogoutControl(Session* session)
		: session(session) {}
	void logout();
};