#include "LoginControl.h"
#include <iostream>

/// <summary>
/// 로그인. authenticate 결과가 참일 경우 로그인 처리
/// </summary>
/// <param name="id">입력한 id</param>
/// <param name="pw">입력한 pw</param>
void LoginControl::login(const string& id, const string& pw) {
	for (auto& member : *memberList) {
		if (member.authenticate(id, pw)) {
			session->setCurrentUser(&member);
			return;
		}
	}
}