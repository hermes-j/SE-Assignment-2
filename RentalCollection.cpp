#include "RentalCollection.h"
#include <algorithm> // ������ �뿩 ���� ����

/// <summary>
/// �뿩 ���� �߰�
/// </summary>
/// <param name="memberID">�뿩�� ID</param>
/// <param name="bike">�뿩�ϴ� ������</param>
void RentalCollection::addRental(const string& memberID, Bike* bike) {
	rentals.push_back(new Rental(memberID, bike));
	bike->rent();
}

/// <summary>
/// Ư�� ����ڰ� �뿩�� �����Ÿ� ID �������� �����Ͽ� ��ȯ
/// </summary>
/// <param name="memberID">����� ID (�ַ� ���� �α��� ����)</param>
/// <returns>�뿩 ������ ��� : vector<Rental*></returns>
vector<Rental*> RentalCollection::getSortedRentalsByMember(const string& memberID) const {
	vector<Rental*> result;

	// ������� �뿩 ��ϸ� �̾Ƽ�
	for (auto* rental : rentals) {
		if (rental->getMemberID() == memberID) {
			result.push_back(rental);
		}
	}

	// ���� ��
	sort(result.begin(), result.end(),
		[](Rental* a, Rental* b) {
			return a->getRentedBike()->getBikeID() < b->getRentedBike()->getBikeID();
		});
	
	// ��ȯ
	return result;
}