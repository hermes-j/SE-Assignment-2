#include "MemberCollection.h"
/// <summary>
/// ��� �߰�. ȸ�����Կ�
/// </summary>
/// <param name="member"></param>
void MemberCollection::addMember(Member* member) {
	members.push_back(member);
}

/// <summary>
/// �ش� id�� ����� ã�� ��ȯ
/// </summary>
/// <param name="id">�Է� id</param>
/// <returns>�ش� ����� �ִٸ� Member*, ���ٸ� nullptr</returns>
Member* MemberCollection::findByID(const string& id) const {
	for (Member* member : members) {
		if (member->getID() == id) return member;
	}
	return nullptr;
}