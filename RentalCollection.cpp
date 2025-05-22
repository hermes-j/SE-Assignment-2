#include "RentalCollection.h"
#include <algorithm> // 자전거 대여 정보 정렬

/// <summary>
/// 대여 정보 추가
/// </summary>
/// <param name="memberID">대여자 ID</param>
/// <param name="bike">대여하는 자전거</param>
void RentalCollection::addRental(const string& memberID, Bike* bike) {
	rentals.push_back(new Rental(memberID, bike));
	bike->rent();
}

/// <summary>
/// 특정 사용자가 대여한 자전거를 ID 오름차순 정렬하여 반환
/// </summary>
/// <param name="memberID">사용자 ID (주로 현재 로그인 유저)</param>
/// <returns>대여 자전거 목록 : vector<Rental*></returns>
vector<Rental*> RentalCollection::getSortedRentalsByMember(const string& memberID) const {
	vector<Rental*> result;

	// 사용자의 대여 목록만 뽑아서
	for (auto* rental : rentals) {
		if (rental->getMemberID() == memberID) {
			result.push_back(rental);
		}
	}

	// 정렬 후
	sort(result.begin(), result.end(),
		[](Rental* a, Rental* b) {
			return a->getRentedBike()->getBikeID() < b->getRentedBike()->getBikeID();
		});
	
	// 반환
	return result;
}