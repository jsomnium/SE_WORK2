#include "RentalInfoUI.h"
#include "Member.h"

// 대여한 자전거 출력 로직
void RentalInfoUI::OutputRentedBikeList(vector<Bike*> bikes, ofstream& out_fp)
{
	out_fp << "5.1. 자전거 대여 리스트" << endl;

	// 모든 자전거에 대해서 Id와 Name 출력
	for (Bike* bike : bikes) {
		out_fp << "> " << bike->GetId() << " " << bike->GetName() << endl;
	}
	out_fp << endl;
}
