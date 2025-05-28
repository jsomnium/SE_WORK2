#include "EnrollBikeUI.h"

// 자전거 등록 정보 입력받기
void EnrollBikeUI::InputEnrollInfo(string& id, string& name, ifstream& in_fp)
{
	in_fp >> id >> name;
}

// 자전거 등록 정보 출력하기
void EnrollBikeUI::OutputEnrollInfo(string& id, string& name, ofstream& out_fp)
{
	out_fp << "3.1. 자전거 등록" << endl;
	out_fp << "> " << id << " " << name << " " << endl << endl;
}
