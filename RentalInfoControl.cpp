#include "RentalInfoControl.h"
#include <iostream>
#include <algorithm> // ������ �뿩 ���� ����

/// <summary>
/// ������ �뿩 ���� ���. ������ ID ���� �������� �����Ѵ�.
/// </summary>
void RentalInfoControl::showRentals() {
	Member* currentUser = session->getCurrentUser();
	if (!currentUser) return; // �α��� ����

	vector<Rental*> userRentals;
	for (auto& rental : *rentalList) {
		if (rental.getMemberID() == currentUser->getID()) {
			userRentals.push_back(&rental);
		}
	}

	// bikeID ���� �������� ����
	sort(userRentals.begin(), userRentals.end(),
		[](Rental* a, Rental* b) {
			return a->getRentedBike()->getBikeID() < b->getRentedBike()->getBikeID();
		});

	// ���
	for (auto& rental : userRentals) {
		cout << rental->getRentedBike()->getBikeID() << " " << rental->getRentedBike()->getModel() << "\n";
	}
}