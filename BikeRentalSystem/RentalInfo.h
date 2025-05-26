#ifndef RENTALINFO_H
#define RENTALINFO_H

#include "Bike.h"
#include "Member.h"
#include <vector>

// 자전거 대여 정보 조회 컨트롤 클래스
class RentalInfo
{
public:
	vector<Bike*> GetRentedBikes(Member& currentUser);
};

#endif