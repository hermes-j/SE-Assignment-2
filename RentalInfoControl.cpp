#include "RentalInfoControl.h"
#include <iostream>
#include <algorithm> // 자전거 대여 정보 정렬

/// <summary>
/// 자전거 대여 정보 출력. 자전거 ID 기준 오름차순 정렬한다.
/// </summary>
void RentalInfoControl::showRentals() {
	Member* currentUser = session->getCurrentUser();
	if (!currentUser) return; // 로그인 안함

	vector<Rental*> userRentals;
	for (auto& rental : *rentalList) {
		if (rental.getMemberID() == currentUser->getID()) {
			userRentals.push_back(&rental);
		}
	}

	// bikeID 기준 오름차순 정렬
	sort(userRentals.begin(), userRentals.end(),
		[](Rental* a, Rental* b) {
			return a->getRentedBike()->getBikeID() < b->getRentedBike()->getBikeID();
		});

	// 출력
	for (auto& rental : userRentals) {
		cout << rental->getRentedBike()->getBikeID() << " " << rental->getRentedBike()->getModel() << "\n";
	}
}