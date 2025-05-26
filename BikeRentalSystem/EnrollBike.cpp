#include "EnrollBike.h"
#include "BikeRentalSystem.h"
#include "Bike.h"

void EnrollBike::EnrollNewBike(string& id, string& name)
{
	Bike* bike = new Bike(id, name); // �Է¹��� ���� ������� ������ ����
	this->bikeRepo->EnrollNewBike(bike); // ������ bike�� bikeRepo�� �߰���
}
