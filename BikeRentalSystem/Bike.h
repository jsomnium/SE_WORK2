#ifndef BIKE_H
#define BIKE_H
#include "BikeRentalSystem.h"

class Bike
{
private:
	string id;
	string name;

public:
	Bike(string id, string name) : id(id), name(name) {}; // 持失切
	Bike() : id(""), name("") {}; // 奄沙 持失切

	string GetId();
	string GetName();
};

#endif
