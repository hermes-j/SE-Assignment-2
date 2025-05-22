#include "LoginControl.h"
#include <iostream>

/// <summary>
/// 로그인. authenticate 결과가 참일 경우 로그인 처리
/// </summary>
/// <param name="id">입력한 id</param>
/// <param name="pw">입력한 pw</param>
void LoginControl::login(const string& id, const string& pw) {
	if (id == "admin" && pw == "admin") {
		Member* admin = new Member("admin", "admin", "");
		session->setCurrentUser(admin);
		return;
	}
	Member* member = memberCollection->findByID(id);
	if (member->authenticate(id, pw)) {
		session->setCurrentUser(member);
		return;
	}
	return;
}