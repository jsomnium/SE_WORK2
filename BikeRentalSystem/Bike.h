#ifndef BIKE_H
#define BIKE_H
#include "BikeRentalSystem.h"

// 자전거 정의
class Bike
{
private:
	string id;
	string name;

public:
	Bike(string id, string name) : id(id), name(name) {}; // 생성자
	Bike() : id(""), name("") {}; // 기본 생성자

	string GetId(); // id 반환
	string GetName(); // name 반환
};

#endif
