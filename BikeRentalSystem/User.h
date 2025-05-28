#ifndef USER_H
#define USER_H

// 헤더 선언
#include "BikeRentalSystem.h"

// User 클래스
class User {
protected:
	string id;
	string pw;
public:
	User() : id(""), pw("") {}; // 기본 생성자
	User(string id, string pw); // 입력받는 생성자
	string GetID(); // id 반환
	string GetPw(); // pw 반환
};

#endif