#pragma once
#include <string>
#include "Bike.h"
using namespace std;

/// <summary>
/// Rental Entity Class
/// </summary>
class Rental {
private:
	string memberID;
	Bike* rentedBike;
public:
	Rental(const string& memberID, Bike* bike);
	
	string getMemberID() const;
	Bike* getRentedBike() const;
};