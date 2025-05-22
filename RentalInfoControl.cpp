#include "RentalInfoControl.h"
#include <iostream>

/// <summary>
/// ������ �뿩 ���� ���. ������ ID ���� �������� �����Ѵ�.
/// </summary>
void RentalInfoControl::showRentals() {
	Member* currentUser = session->getCurrentUser();
	if (!currentUser) return; // �α��� ����

	vector<Rental*> rentalList = rentalCollection->getSortedRentalsByMember(currentUser->getID());
	
	// ���
	for (Rental* rental : rentalList) {
		cout << "> " << rental->getRentedBike()->getBikeID() << " " << rental->getRentedBike()->getModel() << "\n";
	}
	cout << "\n";
}