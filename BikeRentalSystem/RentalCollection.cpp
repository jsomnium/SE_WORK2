#include "RentalCollection.h"

void RentalCollection::RentBike(Bike& bike)
{
	// bike를 콜렉션에 추가함
	RentedBikes.push_back(&bike);
}
