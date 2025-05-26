#include "BikeRepo.h"

// bikeRepo에 값 넣기
void BikeRepo::EnrollNewBike(Bike* bike)
{
	bikes.push_back(bike);
}
