#include "AddBikeControl.h"

/// <summary>
/// 자전거 정보를 등록
/// </summary>
/// <param name="bikeID">입력된 자전거 id</param>
/// <param name="model">입력된 자전거 모델명</param>
void AddBikeControl::AddBike(const string& bikeID, const string& model) {
	bikeList->emplace_back(bikeID, model);
}