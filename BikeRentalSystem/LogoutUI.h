#ifndef LOGINUIUI_H
#define LOGINUIUI_H
#include "Logout.h"

// 로그아웃 바운더리 클래스
class LogoutUI 
{
private:
	Logout* logoutControl;
public:
	LogoutUI(Logout* logoutControl) : logoutControl(logoutControl) {}; // 생성자 정의
	void OutputLogoutResult(string& id, ofstream& out_fp); // 출력
};
#endif