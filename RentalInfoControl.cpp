#include "RentalInfoControl.h"
#include <iostream>

/// <summary>
/// 자전거 대여 정보 출력. 자전거 ID 기준 오름차순 정렬한다.
/// </summary>
void RentalInfoControl::showRentals() {
	Member* currentUser = session->getCurrentUser();
	if (!currentUser) return; // 로그인 안함

	vector<Rental*> rentalList = rentalCollection->getSortedRentalsByMember(currentUser->getID());
	
	// 출력
	for (Rental* rental : rentalList) {
		cout << "> " << rental->getRentedBike()->getBikeID() << " " << rental->getRentedBike()->getModel() << "\n";
	}
	cout << "\n";
}