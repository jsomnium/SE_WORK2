#ifndef BIKEREPO_H
#define BIKEREPO_H

// 헤더 선언
#include "BikeRentalSystem.h"
#include "Bike.h"
#include <vector>

class BikeRepo {
private:
	vector<Bike*> bikes;
public:
	void EnrollNewBike(Bike* bike);
};

#endif