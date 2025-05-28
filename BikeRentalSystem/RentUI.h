#include "Rent.h"
#include "BikeRentalSystem.h"
#ifndef RENTUI_H
#define RENTUI_H

// 자전거 대여 바운더리 클래스
class RentUI
{
private:
	Rent* rentControl;
public:
	RentUI(Rent* rentControl) : rentControl(rentControl){}; // 생성자
	void InputRentInfo(string& id, ifstream& in_fp); // 입력
	void OutputRentInfo(string& id, string& name, ofstream& out_fp); // 출력
};

#endif