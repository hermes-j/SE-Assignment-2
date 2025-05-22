#include "BikeCollection.h"

/// <summary>
/// ������ �߰�. ������ ��Ͽ�
/// </summary>
/// <param name="bike">input Bike</param>
void BikeCollection::addBike(Bike* bike) {
	bikes.push_back(bike);
}

/// <summary>
/// ������ID�� �����Ÿ� ã�� ��ȯ. �뿩 �� ���
/// </summary>
/// <param name="bikeID"></param>
/// <returns>�ش� �����Ű� �ִٸ� Bike*, ���ٸ� nullptr</returns>
Bike* BikeCollection::findBikeByID(const string& bikeID) const {
	for (Bike* bike : bikes) {
		if (bike->getBikeID() == bikeID) {
			return bike;
		}
	}
	return nullptr;
}