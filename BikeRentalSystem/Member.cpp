#include "Member.h"
#include "User.h"

// Member ������ ����
Member::Member(string id, string pw, string phoneNum): User(id, pw), phoneNum(phoneNum) {}

void Member::RentBike(Bike& bike)
{
	rentalCollection.RentBike(bike);
}

RentalCollection Member::GetRentalCollection()
{
	return rentalCollection;
}
