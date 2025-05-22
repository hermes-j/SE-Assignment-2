#include "Session.h"

// 생성자
Session::Session() : currentUser(nullptr) {}

/// <summary>
/// set current user. 로그인용
/// </summary>
/// <param name="user"></param>
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