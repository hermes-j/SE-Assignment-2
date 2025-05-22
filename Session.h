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

	Member* getCurrentUser() const;
	void setCurrentUser(Member* user);
	void clearSession();
};