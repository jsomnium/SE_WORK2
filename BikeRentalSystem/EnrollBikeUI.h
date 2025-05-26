#ifndef ENROLLBIKEUI_H
#define ENROLLBIKEUI_H

// 헤더 선언
#include "EnrollBike.h"
#include "BikeRentalSystem.h"

// 자전거 등록 바운더리 클래스
class EnrollBikeUI
{
private:
	EnrollBike* EnrollBikeControl;

public:
	EnrollBikeUI(EnrollBike* EnrollBikeControl) : EnrollBikeControl(EnrollBikeControl) {}; // 생성자
	void InputEnrollInfo(string& id, string& name, ifstream& in_fp);
	void OutputEnrollInfo(string& id, string& name, ofstream& out_fp);
};

#endif