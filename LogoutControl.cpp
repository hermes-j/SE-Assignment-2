#include "LogoutControl.h"
#include <iostream>
using namespace std;

/// <summary>
/// �α׾ƿ�. 
/// ���� ���� ���̾��� ������ ǥ�� ��
/// clearSession()�� ���� �α��� ������ �ʱ�ȭ
/// </summary>
void LogoutControl::logout() {
	cout << session->getCurrentUser()->getID() << "\n\n";
	session->clearSession();
}