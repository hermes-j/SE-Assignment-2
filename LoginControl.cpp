#include "LoginControl.h"
#include <iostream>

/// <summary>
/// �α���. authenticate ����� ���� ��� �α��� ó��
/// </summary>
/// <param name="id">�Է��� id</param>
/// <param name="pw">�Է��� pw</param>
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