#include "RentBikeControl.h"
#include <iostream>
using namespace std;

/// <summary>
/// ������ ���.
/// �Էµ� id�� �����Ÿ� ã�� ��,
/// isRented�� Ȯ���Ͽ� �뿩 �����ϸ� �뿩 ó��. 
/// </summary>
/// <param name="bikeID"></param>
void RentBikeControl::rentBike(const string& bikeID) {
	Member* currentUser = session->getCurrentUser();
	if (!currentUser) return; // �α��� �ض�
	for (auto& bike : *bikeList) {
		if (bike.getBikeID() == bikeID
			&& !bike.getIsRented()) {
			bike.rent();
			rentalCollection->addRental(currentUser->getID(), &bike);
			cout << bike.getBikeID() << " " << bike.getModel() << "\n\n";
			return;
		}
	}
}