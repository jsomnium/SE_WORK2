#include "BikeRepo.h"
#ifndef ENROLLBIKE_H
#define ENROLLBIKE_H

// 자전거 등록 컨트롤 클래스
class EnrollBike
{
private:
	BikeRepo* bikeRepo;
public:
	EnrollBike(BikeRepo* bikeRepo) : bikeRepo(bikeRepo) {}; // 생성자
	void EnrollNewBike(string& id, string& name);
};

#endif