#ifndef MEMBER_H
#define MEMBER_H

// ��� ����
#include "BikeRentalSystem.h"
#include "User.h"

// User�� ����ϴ� Member ����
class Member : public User {
private:
	string phoneNum;
public:
	Member(string id, string pw, string phoneNum); // ������ ����
	string GetMemberID();
	string GetMemberPw();
};

#endif