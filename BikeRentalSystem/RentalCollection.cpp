#include "RentalCollection.h"

void RentalCollection::RentBike(Bike& bike)
{
	// bike�� �ݷ��ǿ� �߰���
	RentedBikes.push_back(&bike);
}

vector<Bike*>& RentalCollection::GetAllRentedBikes()
{
	return RentedBikes;
}
