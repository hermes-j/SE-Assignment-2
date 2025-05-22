#include "RentBikeControl.h"
#include <iostream>
using namespace std;

/// <summary>
/// 자전거 등록.
/// 입력된 id의 자전거를 찾은 후,
/// isRented를 확인하여 대여 가능하면 대여 처리. 
/// </summary>
/// <param name="bikeID"></param>
void RentBikeControl::rentBike(const string& bikeID) {
	Member* currentUser = session->getCurrentUser();
	if (!currentUser) return; // 로그인 해라
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