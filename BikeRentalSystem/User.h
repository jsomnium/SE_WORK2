#ifndef USER_H
#define USER_H

// 헤더 선언
#include "BikeRentalSystem.h"

// User 정의
class User {
protected:
	string id;
	string pw;
public:
	User() : id(""), pw("") {};
	User(string id, string pw);
};

#endif