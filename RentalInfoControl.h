#pragma once
#include "RentalCollection.h"
#include "Session.h"
#include <vector>

/// <summary>
/// RentalInfo Control Class
/// </summary>
class RentalInfoControl {
private:
	RentalCollection* rentalCollection;
	Session* session;
public:
	RentalInfoControl(RentalCollection* rentalCollection, Session* session)
		: rentalCollection(rentalCollection), session(session) {}
	void showRentals();
};