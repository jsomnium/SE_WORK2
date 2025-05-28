#include "LogoutUI.h"

// 로그아웃 출력 로직
void LogoutUI::OutputLogoutResult(string& id, ofstream& out_fp)
{
	out_fp << "2.2. 로그아웃" << endl;
	out_fp << "> " << id << endl << endl;
}
