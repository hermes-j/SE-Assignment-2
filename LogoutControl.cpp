#include "LogoutControl.h"

/// <summary>
/// �α׾ƿ�. clearSession()�� ���� �α��� ������ �ʱ�ȭ
/// </summary>
void LogoutControl::logout() {
	session->clearSession();
}