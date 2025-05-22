#include "Member.h"
#include <string>
using namespace std;

// ������
Member::Member(const string& id, const string& pw, const string& phone)
    : id(id), pw(pw), phone(phone) {}

/// <summary>
/// ID getter
/// </summary>
/// <returns>id : string</returns>
string Member::getID() const {
    return id;
}

/// <summary>
/// PW getter
/// </summary>
/// <returns>pw : string</returns>
string Member::getPW() const {
    return pw;
}

/// <summary>
/// phone getter
/// </summary>
/// <returns>phone : string</returns>
string Member::getPhone() const {
    return phone;
}

/// <summary>
/// �α��� �� �Է��� id�� pw�� ����
/// </summary>
/// <param name="inputID">�Է��� id</param>
/// <param name="inputPW">�Է��� pw</param>
/// <returns>�α��� ���� ���� : bool</returns>
bool Member::authenticate(const string& inputID, const string& inputPW) const {
    return id == inputID && pw == inputPW;
}