#pragma once
#include "Member.h"

/// <summary>
/// Session Entity Class
/// </summary>
class Session {
private:
	Member* currentUser;
public:
	Session();

	void setCurrentUser(Member* user);
	Member* getCurrentUser() const;
	void clearSession();
};