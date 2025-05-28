#include "BikeRentalSystem.h"
#include "LoginUI.h"

// 입력받는 로직
void LoginUI::InputLoginInfo(string& id, string& pw, ifstream& in_fp)
{
	in_fp >> id >> pw;
}

// 출력하는 로직
void LoginUI::OutputLoginResult(string& id, string& pw, ofstream& out_fp)
{
	out_fp << "2.1. 로그인" << endl;
	out_fp << "> " << id << " " << pw << " " << endl << endl;
}