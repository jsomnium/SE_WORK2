#include "Rent.h"
#include "Member.h"
#include "BikeRepo.h"
#include "Bike.h"

// 자전거 대여 함수
void Rent::RentBike(string& id, string& name, Member& currentUser, BikeRepo& bikeRepo)
{
	// id를 기반으로 레포에서 자전거를 가져옴
	Bike* bike = bikeRepo.FindBike(id);
	name = bike->GetName();

	// 자전거 대여
	currentUser.RentBike(*bike);
}
