#include "AddBikeControl.h"

/// <summary>
/// ������ ������ ���
/// </summary>
/// <param name="bikeID">�Էµ� ������ id</param>
/// <param name="model">�Էµ� ������ �𵨸�</param>
void AddBikeControl::AddBike(const string& bikeID, const string& model) {
	bikeList->emplace_back(bikeID, model);
}