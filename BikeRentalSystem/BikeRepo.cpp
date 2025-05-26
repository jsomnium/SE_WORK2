#include "BikeRepo.h"

// bikeRepo�� �� �ֱ�
void BikeRepo::EnrollNewBike(Bike* bike)
{
	bikes.push_back(bike);
}

Bike* BikeRepo::FindBike(string& id)
{
	for (auto& bike : bikes) {
		if (bike->GetId() == id) {
			return bike;
		}
	}
	return nullptr;
}