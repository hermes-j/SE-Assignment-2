#include "Rentals.h"
#include <string>
using namespace std;

// »ı¼ºÀÚ
Rental::Rental(const string& memberID, Bike* bike)
	: memberID(memberID), rentedBike(bike) {}

/// <summary>
/// renter id getter
/// </summary>
/// <returns>id : string</returns>
string Rental::getMemberID() const {
	return memberID;
}

/// <summary>
/// rented bike getter
/// </summary>
/// <returns>rentedBike : Bike*</returns>
Bike* Rental::getRentedBike() const {
	return rentedBike;
}