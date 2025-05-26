#ifndef LOGINUI_H
#define LOGINUI_H

// 헤더 선언
#include "Login.h"

// 로그인 바운더리 클래스
class LoginUI {
private:
	Login* loginControl;
public:
	LoginUI(Login* loginControl) : loginControl(loginControl) {}; // 생성자
	void InputLoginInfo(string& id, string& pw, ifstream& in_fp);
	void OutputLoginResult(string& id, string& pw, ofstream& out_fp);
};

#endif