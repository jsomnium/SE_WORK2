#ifndef USER_H
#define USER_H

// ��� ����
#include "BikeRentalSystem.h"

// User ����
class User {
protected:
	string id;
	string pw;
public:
	User() : id(""), pw("") {};
	User(string id, string pw);
};

#endif