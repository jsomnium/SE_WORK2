#ifndef LOGINUI_H
#define LOGINUI_H

// ��� ����
#include "Login.h"

// �α��� �ٿ���� Ŭ����
class LoginUI {
private:
	Login* loginControl;
public:
	LoginUI(Login* loginControl) : loginControl(loginControl) {}; // ������
	void InputLoginInfo(string& id, string& pw, ifstream& in_fp);
	void OutputLoginResult(string& id, string& pw, ofstream& out_fp);
};

#endif