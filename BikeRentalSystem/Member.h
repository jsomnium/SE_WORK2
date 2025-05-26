#ifndef MEMBER_H
#define MEMBER_H

// 헤더 선언
#include "BikeRentalSystem.h"
#include "User.h"
#include "RentalCollection.h"

// User를 상속하는 Member 정의
class Member : public User {
private:
	string phoneNum;
	RentalCollection rentalCollection; // has-a 관계
public:
	Member() : User("", ""), phoneNum("") {}; // 기본 생성자
	Member(string id, string pw, string phoneNum); // 생성자 정의

	void RentBike(Bike& bike);
};

#endif