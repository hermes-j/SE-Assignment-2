#pragma once
#include "BikeCollection.h"
#include <vector>

/// <summary>
/// AddBike Control Class
/// </summary>
class AddBikeControl {
private:
	BikeCollection* bikeCollection;
public:
	AddBikeControl(BikeCollection* bikeCollection) : bikeCollection(bikeCollection) {}
	void AddBike(const string& bikeID, const string& model);
};