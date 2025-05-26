#include "BikeRepo.h"
#ifndef ENROLLBIKE_H
#define ENROLLBIKE_H

class EnrollBike
{
private:
	BikeRepo* bikeRepo;
public:
	EnrollBike(BikeRepo* bikeRepo) : bikeRepo(bikeRepo) {}; // ������
	void EnrollNewBike(string& id, string& name);
};

#endif