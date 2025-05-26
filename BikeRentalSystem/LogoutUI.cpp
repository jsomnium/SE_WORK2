#include "LogoutUI.h"

void LogoutUI::OutputLogoutResult(string& id, ofstream& out_fp)
{
	out_fp << "2.2. ·Î±×¾Æ¿ô" << endl;
	out_fp << "> " << id << endl;
}
