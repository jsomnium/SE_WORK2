#include "RentUI.h"

// 자전거 대여 입력 로직
void RentUI::InputRentInfo(string& id, ifstream& in_fp)
{
	in_fp >> id;
}

// 자전거 대여 출력 로직
void RentUI::OutputRentInfo(string& id, string& name, ofstream& out_fp)
{
	out_fp << "4.1. 자전거 대여" << endl;
	out_fp << "> " << id << " " << name << endl << endl;
	// 가장 최근에 대여한 자전거의 정보
}
