#include "RentUI.h"

void RentUI::InputRentInfo(string& id, ifstream& in_fp)
{
	in_fp >> id;
}

void RentUI::OutputRentInfo(string& id, string& name, ofstream& out_fp)
{
	out_fp << "4.1. ������ �뿩" << endl;
	out_fp << "> " << id << " " << name << endl << endl;
	// ���� �ֱٿ� �뿩�� �������� ����
	
}
