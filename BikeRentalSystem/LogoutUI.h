#ifndef LOGINUIUI_H
#define LOGINUIUI_H
#include "Logout.h"

class LogoutUI 
{
private:
	Logout* logoutControl;
public:
	LogoutUI(Logout* logoutControl) : logoutControl(logoutControl) {}; // ������ ����
	void OutputLogoutResult(string& id, ofstream& out_fp);
};
#endif