#include "Bike.h"
#include <string>
using namespace std;

// ������
Bike::Bike(const string &bikeID, const string& model)
	: bikeID(bikeID), model(model), isRented(false) {}

/// <summary>
/// bike id getter
/// </summary>
/// <returns>bikeID : string</returns>
string Bike::getBikeID() const {
	return bikeID;
}

/// <summary>
/// bike model getter
/// </summary>
/// <returns>model : string</returns>
string Bike::getModel() const {
	return model;
}

/// <summary>
/// isRented getter
/// </summary>
/// <returns>isRented : bool</returns>
bool Bike::getIsRented() const {
	return isRented;
}

/// <summary>
/// �����Ÿ� �뿩�� ó��
/// </summary>
void Bike::rent() {
	isRented = true;
}