#pragma once
#include "BikeCollection.h"
#include "RentalCollection.h"
#include "Session.h"
#include <vector>

/// <summary>
/// RentBike Control Class
/// </summary>
class RentBikeControl {
private:
	BikeCollection* bikeCollection;
	RentalCollection* rentalCollection;
	Session* session;
public:
	RentBikeControl(BikeCollection* bikeCollection, RentalCollection* rentalCollection, Session* session) 
		: bikeCollection(bikeCollection), rentalCollection(rentalCollection), session(session) {}
	void rentBike(const string& bikeID);
};
