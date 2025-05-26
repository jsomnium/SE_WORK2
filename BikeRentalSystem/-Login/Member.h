#ifndef MEMBER_H
#define MEMBER_H

// 헤더 선언
#include "BikeRentalSystem.h"
#include "User.h"

// User를 상속하는 Member 정의
class Member : public User {
private:
	string phoneNum;
public:
	Member(string id, string pw, string phoneNum); // 생성자 정의
	string GetMemberID();
	string GetMemberPw();
};

#endif