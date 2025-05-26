#ifndef ENROLLBIKEUI_H
#define ENROLLBIKEUI_H

// ��� ����
#include "EnrollBike.h"
#include "BikeRentalSystem.h"

// ������ ��� �ٿ���� Ŭ����
class EnrollBikeUI
{
private:
	EnrollBike* EnrollBikeControl;

public:
	EnrollBikeUI(EnrollBike* EnrollBikeControl) : EnrollBikeControl(EnrollBikeControl) {}; // ������
	void InputEnrollInfo(string& id, string& name, ifstream& in_fp);
	void OutputEnrollInfo(string& id, string& name, ofstream& out_fp);
};

#endif