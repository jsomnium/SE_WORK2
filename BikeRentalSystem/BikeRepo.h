#ifndef BIKEREPO_H
#define BIKEREPO_H

// 헤더 선언
#include "BikeRentalSystem.h"
#include "Bike.h"
#include <vector>

// Bike들을 vector로 저장하는 BikeRepo 클래스
class BikeRepo {
private:
	vector<Bike*> bikes;
public:
	void EnrollNewBike(Bike* bike); // 배열에 새로운 Bike 등록하기
	Bike* FindBike(string& id); // id 기반으로 Bike 찾기
};

#endif