#include "LogoutControl.h"

/// <summary>
/// 로그아웃. clearSession()을 통해 로그인 세션을 초기화
/// </summary>
void LogoutControl::logout() {
	session->clearSession();
}