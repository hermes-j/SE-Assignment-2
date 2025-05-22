/*
	Bike Entity Class
*/
#pragma once
#include <string>
using namespace std;

class Bike {
private:
	int bikeID;
	string model;
public:
	int getBikeID() { return bikeID; }
	string getmodel() { return model; }
};