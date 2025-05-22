#pragma once
#include "Rentals.h"
#include "Session.h"
#include <vector>

/// <summary>
/// RentalInfo Control Class
/// </summary>
class RentalInfoControl {
private:
	vector<Rental>* rentalList;
	Session* session;
public:
	RentalInfoControl(vector<Rental>* rentalList, Session* session)
		: rentalList(rentalList), session(session) {}
	void showRentals();
};