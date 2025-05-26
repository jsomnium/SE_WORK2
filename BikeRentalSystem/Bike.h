#ifndef BIKE_H
#define BIKE_H
#include "BikeRentalSystem.h"

class Bike
{
private:
	string id;
	string name;

public:
	Bike(string id, string name) : id(id), name(name) {}; // »ý¼ºÀÚ
	string GetId();
	string GetName();
	void GetBikeInfo();
};

#endif
