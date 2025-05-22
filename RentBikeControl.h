#pragma once
#include "Bike.h"
#include "RentalCollection.h"
#include "Session.h"
#include <vector>

/// <summary>
/// RentBike Control Class
/// </summary>
class RentBikeControl {
private:
	vector<Bike>* bikeList;
	RentalCollection* rentalCollection;
	Session* session;
public:
	RentBikeControl(vector<Bike>* bikeList, RentalCollection* rentalCollection, Session* session) 
		: bikeList(bikeList), rentalCollection(rentalCollection), session(session) {}
	void rentBike(const string& bikeID);
};
