#include "RentBikeControl.h"

/// <summary>
/// ������ ���.
/// �Էµ� id�� �����Ÿ� ã�� ��,
/// isRented�� Ȯ���Ͽ� �뿩 �����ϸ� �뿩 ó��. 
/// </summary>
/// <param name="bikeID"></param>
void RentBikeControl::rentBike(const string& bikeID) {
	Member* currentUser = session->getCurrentUser();
	if (!currentUser) return; // �α��� ����
	for (auto& bike : *bikeList) {
		if (bike.getBikeID() == bikeID
			&& !bike.getIsRented()) {
			bike.rent();
			rentalList->emplace_back(currentUser, &bike);
			return;
		}
	}
}