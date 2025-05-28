#include "RentalCollection.h"

// 자전거 콜렉션에 자전거 추가
void RentalCollection::RentBike(Bike& bike)
{
	// bike를 콜렉션에 추가함
	RentedBikes.push_back(&bike);
}

// 대여한 자전거 리스트 반환
vector<Bike*>& RentalCollection::GetAllRentedBikes()
{
	return RentedBikes;
}
