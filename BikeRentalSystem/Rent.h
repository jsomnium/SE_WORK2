#ifndef RENT_H
#define RENT_H

// 헤더 선언
#include "Member.h"
#include "BikeRepo.h"

// 자전거 대여 컨트롤 클래스
class Rent 
{
public:
	Rent() {};
	void RentBike(string& id, string& name, Member& currentUser, BikeRepo& bikeRepo);

};

#endif