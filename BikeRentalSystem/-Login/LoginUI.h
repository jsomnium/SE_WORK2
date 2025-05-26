#include "Login.h"
#ifndef LOGINUI_H
#define LOGINUI_H

class LoginUI {
private:
	Login* loginControl;
public:
	LoginUI(Login* loginControl) : loginControl(loginControl) {}; // »ý¼ºÀÚ
	void InputLoginInfo(string& id, string& pw, ifstream& in_fp);
	void OutputLoginResult(string& id, string& pw, ofstream& out_fp);
};

#endif