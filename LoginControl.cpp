#include "LoginControl.h"
#include <iostream>

/// <summary>
/// �α���. authenticate ����� ���� ��� �α��� ó��
/// </summary>
/// <param name="id">�Է��� id</param>
/// <param name="pw">�Է��� pw</param>
void LoginControl::login(const string& id, const string& pw) {
	for (auto& member : *memberList) {
		if (member.authenticate(id, pw)) {
			session->setCurrentUser(&member);
			return;
		}
	}
}