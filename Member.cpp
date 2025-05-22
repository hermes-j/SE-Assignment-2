#include "Member.h"
#include <string>
using namespace std;

// 생성자
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
/// 로그인 시 입력한 id와 pw의 검증
/// </summary>
/// <param name="inputID">입력한 id</param>
/// <param name="inputPW">입력한 pw</param>
/// <returns>로그인 성공 여부 : bool</returns>
bool Member::authenticate(const string& inputID, const string& inputPW) const {
    return id == inputID && pw == inputPW;
}