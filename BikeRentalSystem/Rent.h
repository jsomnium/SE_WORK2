#ifndef RENT_H
#define RENT_H

// ��� ����
#include "Member.h"
#include "BikeRepo.h"

// ������ �뿩 ��Ʈ�� Ŭ����
class Rent 
{
public:
	Rent() {};
	void RentBike(string& id, string& name, Member& currentUser, BikeRepo& bikeRepo);

};

#endif