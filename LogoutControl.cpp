#include "LogoutControl.h"
#include <iostream>
using namespace std;

/// <summary>
/// 로그아웃. 
/// 현재 접속 중이었던 유저를 표시 후
/// clearSession()을 통해 로그인 세션을 초기화
/// </summary>
void LogoutControl::logout() {
	cout << session->getCurrentUser()->getID() << "\n\n";
	session->clearSession();
}