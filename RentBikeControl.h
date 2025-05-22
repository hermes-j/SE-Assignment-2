#pragma once
#include "Bike.h"
#include "Rentals.h"
#include "Session.h"
#include <vector>

/// <summary>
/// RentBike Control Class
/// </summary>
class RentBikeControl {
private:
	vector<Bike>* bikeList;
	vector<Rental>* rentalList;
	Session* session;
public:
	RentBikeControl(vector<Bike>* bikeList, vector<Rental>* rentalList, Session* session) 
		: bikeList(bikeList), rentalList(rentalList), session(session) {}
	void rentBike(const string& bikeID);
};
