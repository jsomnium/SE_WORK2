#include "RentalInfo.h"
#include "Bike.h"
#ifndef RENTALINFOUI_H
#define RENTALINFOUI_H

class RentalInfoUI
{
private:
	RentalInfo* rentalInfoControl;
public:
	RentalInfoUI(RentalInfo* rentalInfoControl) : rentalInfoControl(rentalInfoControl) {}; // ������
	void OutputRentedBikeList(vector<Bike*> bikes, ofstream& out);
};

#endif