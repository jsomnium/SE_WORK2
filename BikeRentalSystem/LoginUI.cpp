#include "BikeRentalSystem.h"
#include "LoginUI.h"

void LoginUI::InputLoginInfo(string& id, string& pw, ifstream& in_fp)
{
	in_fp >> id >> pw;
}

void LoginUI::OutputLoginResult(string& id, string& pw, ofstream& out_fp)
{
	out_fp << "2.1. ·Î±×ÀÎ" << endl;
	out_fp << "> " << id << " " << pw << " " << endl;
}