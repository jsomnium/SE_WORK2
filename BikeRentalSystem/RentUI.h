#include "Rent.h"
#include "BikeRentalSystem.h"
#ifndef RENTUI_H
#define RENTUI_H

class RentUI
{
private:
	Rent* RentControl;
public:
	RentUI(Rent* RentControl) : RentControl(RentControl){}; // »ý¼ºÀÚ
	void InputRentInfo(string& id, ifstream& in_fp);
	void OutputRentInfo(string& id, string& name, ofstream& out_fp);
};

#endif