#include "RentalCollection.h"
#include <algorithm> // 자전거 대여 정보 정렬

void RentalCollection::addRental(const string& memberID, Bike* bike) {
	rentals.push_back(new Rental(memberID, bike));
}

vector<Rental*> RentalCollection::getSortedRentalsByMember(const string& memberID) const {
	vector<Rental*> result;
	for (auto* rental : rentals) {
		if (rental->getMemberID() == memberID) {
			result.push_back(rental);
		}
	}
	sort(result.begin(), result.end(),
		[](Rental* a, Rental* b) {
			return a->getRentedBike()->getBikeID() < b->getRentedBike()->getBikeID();
		});
	return result;
}