#include "EnrollBike.h"
#include "BikeRentalSystem.h"
#include "Bike.h"

// 자전거 등록하기
void EnrollBike::EnrollNewBike(string& id, string& name)
{
	Bike* bike = new Bike(id, name); // 입력받은 값을 기반으로 자전거 생성
	this->bikeRepo->EnrollNewBike(bike); // 생성된 bike를 bikeRepo에 추가함
}
