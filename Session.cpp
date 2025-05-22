#include "Session.h"

Session::Session() : currentUser(nullptr) {}

// »ý¼ºÀÚ
void Session::setCurrentUser(Member* user) {
	currentUser = user;
}

/// <summary>
/// current user getter
/// </summary>
/// <returns>currentUser : Member*</returns>
Member* Session::getCurrentUser() const {
	return currentUser;
}

/// <summary>
/// clear session for logout
/// </summary>
void Session::clearSession() {
	currentUser = nullptr;
}