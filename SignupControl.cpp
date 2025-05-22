#include "SignupControl.h"

/// <summary>
/// 회원가입. member 정보를 등록
/// </summary>
/// <param name="id">입력된 id</param>
/// <param name="pw">입력된 비밀번호</param>
/// <param name="phone">입력된 전화번호</param>
void SignupControl::Signup(const string& id, const string& pw, const string& phone) {
	memberCollection->addMember(new Member(id, pw, phone));
}