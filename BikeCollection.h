#pragma once
#include <vector>
#include "Bike.h"

/// <summary>
/// Bike Collection Class
/// </summary>
class BikeCollection {
private:
	vector<Bike*> bikes;
public:
	BikeCollection() = default;
	void addBike(Bike* bike);
	Bike* findBikeByID(const string &bikeID) const;
};