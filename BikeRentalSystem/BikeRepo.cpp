#include "BikeRepo.h"

// bikeRepo의 배열에 자전거 넣기
void BikeRepo::EnrollNewBike(Bike* bike)
{
	bikes.push_back(bike);
}

// bikeRepo에서 실제 Bike 찾기
Bike* BikeRepo::FindBike(string& id)
{
	for (auto& bike : bikes) {
		if (bike->GetId() == id) {
			return bike;
		}
	}
	return nullptr;
}