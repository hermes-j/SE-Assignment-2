#include "SignupControl.h"

/// <summary>
/// ȸ������. member ������ ���
/// </summary>
/// <param name="id">�Էµ� id</param>
/// <param name="pw">�Էµ� ��й�ȣ</param>
/// <param name="phone">�Էµ� ��ȭ��ȣ</param>
void SignupControl::Signup(const string& id, const string& pw, const string& phone) {
	memberList->emplace_back(id, pw, phone);
}