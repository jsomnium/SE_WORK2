#ifndef MEMBER_H
#define MEMBER_H

// ��� ����
#include "BikeRentalSystem.h"
#include "User.h"
#include "RentalCollection.h"

// User�� ����ϴ� Member ����
class Member : public User {
private:
	string phoneNum;
	RentalCollection rentalCollection; // has-a ����
public:
	Member() : User("", ""), phoneNum("") {}; // �⺻ ������
	Member(string id, string pw, string phoneNum); // ������ ����

	void RentBike(Bike& bike);
};

#endif