#pragma once
#include <string>
using namespace std;

/// <summary>
/// Bike Entity Class
/// </summary>
class Bike {
private:
	string bikeID;
	string model;
	bool isRented;
public:
	Bike(const string& bikeID, const string& model);
	string getBikeID() const;
	string getModel() const;
	bool getIsRented() const;
	void rent();
	//void returnBike();
};