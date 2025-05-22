#include "MemberCollection.h"
/// <summary>
/// 멤버 추가. 회원가입용
/// </summary>
/// <param name="member"></param>
void MemberCollection::addMember(Member* member) {
	members.push_back(member);
}

/// <summary>
/// 해당 id의 멤버를 찾아 반환
/// </summary>
/// <param name="id">입력 id</param>
/// <returns>해당 멤버가 있다면 Member*, 없다면 nullptr</returns>
Member* MemberCollection::findByID(const string& id) const {
	for (Member* member : members) {
		if (member->getID() == id) return member;
	}
	return nullptr;
}