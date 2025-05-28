#include "Member.h"
#include "User.h"

// Member 생성자 정의
Member::Member(string id, string pw, string phoneNum): User(id, pw), phoneNum(phoneNum) {}

// Collcetion에 자전거 등록
void Member::RentBike(Bike& bike)
{
	rentalCollection.RentBike(bike);
}

// 해당 Collection 반환
RentalCollection Member::GetRentalCollection()
{
	return rentalCollection;
}
