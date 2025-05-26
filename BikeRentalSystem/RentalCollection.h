#ifndef RENTALCOLLECTION_H
#define RENTALCOLLECTION_H

#include "Bike.h"
#include <vector>

class RentalCollection {
private:
	vector<Bike*> RentedBikes;
public:
	void RentBike(Bike& bike);
};

#endif