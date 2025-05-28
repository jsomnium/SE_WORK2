#include "RentalInfo.h"
#include "Bike.h"
#ifndef RENTALINFOUI_H
#define RENTALINFOUI_H

// 자전거 대여 정보 조회 바운더리 클래스
class RentalInfoUI
{
private:
	RentalInfo* rentalInfoControl;
public:
	RentalInfoUI(RentalInfo* rentalInfoControl) : rentalInfoControl(rentalInfoControl) {}; // 생성자
	void OutputRentedBikeList(vector<Bike*> bikes, ofstream& out);
};

#endif