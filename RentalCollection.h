#pragma once
#include <vector>
#include "Rental.h"

/// <summary>
/// Rental Collection Class
/// </summary>
class RentalCollection {
private:
	vector<Rental*> rentals;
public:
	RentalCollection() = default;
	void addRental(const string& memberID, Bike* bike);
	vector<Rental*> getSortedRentalsByMember(const string& memberID) const;
};