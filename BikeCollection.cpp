#include "BikeCollection.h"

/// <summary>
/// 자전거 추가. 자전거 등록용
/// </summary>
/// <param name="bike">input Bike</param>
void BikeCollection::addBike(Bike* bike) {
	bikes.push_back(bike);
}

/// <summary>
/// 자전거ID로 자전거를 찾아 반환. 대여 시 사용
/// </summary>
/// <param name="bikeID"></param>
/// <returns>해당 자전거가 있다면 Bike*, 없다면 nullptr</returns>
Bike* BikeCollection::findBikeByID(const string& bikeID) const {
	for (Bike* bike : bikes) {
		if (bike->getBikeID() == bikeID) {
			return bike;
		}
	}
	return nullptr;
}