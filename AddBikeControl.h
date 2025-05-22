#pragma once
#include "Bike.h"
#include <vector>

/// <summary>
/// AddBike Control Class
/// </summary>
class AddBikeControl {
private:
	vector<Bike>* bikeList;
public:
	AddBikeControl(vector<Bike>* bikeList) : bikeList(bikeList) {}
	void AddBike(const string& bikeID, const string& model);
};