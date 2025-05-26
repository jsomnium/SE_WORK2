#include "Rent.h"
#include "Member.h"
#include "BikeRepo.h"
#include "Bike.h"

// ������ �뿩 �Լ�
void Rent::RentBike(string& id, string& name, Member& currentUser, BikeRepo& bikeRepo)
{
	// id�� ������� �������� �����Ÿ� ������
	Bike* bike = bikeRepo.FindBike(id);
	name = bike->GetName();

	// ������ �뿩
	currentUser.RentBike(*bike);
}
