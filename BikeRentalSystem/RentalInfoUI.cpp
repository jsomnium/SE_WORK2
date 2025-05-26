#include "RentalInfoUI.h"
#include "Member.h"

void RentalInfoUI::OutputRentedBikeList(vector<Bike*> bikes, ofstream& out_fp)
{
	out_fp << "5.1. ������ �뿩 ����Ʈ" << endl;

	// ��� �����ſ� ���ؼ� Id�� Name ���
	for (Bike* bike : bikes) {
		out_fp << "> " << bike->GetId() << " " << bike->GetName() << endl;
	}
	out_fp << endl;
}
