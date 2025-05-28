#ifndef RENTALCOLLECTION_H
#define RENTALCOLLECTION_H

#include "Bike.h"
#include <vector>

// Bike와 Member를 위한 Collection 클래스
class RentalCollection {
private:
	vector<Bike*> RentedBikes;
public:
	void RentBike(Bike& bike); // 새로운 자전거 대여하여 Collection에 등록
	vector<Bike*>& GetAllRentedBikes(); // 현재 멤버가 대여한 모든 자전거 리스트 반환
};

#endif