#ifndef RENTALINFO_H
#define RENTALINFO_H

#include "Bike.h"
#include "Member.h"
#include <vector>

// ������ �뿩 ���� ��ȸ ��Ʈ�� Ŭ����
class RentalInfo
{
public:
	vector<Bike*> GetRentedBikes(Member& currentUser);
};

#endif