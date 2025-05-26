#include "Login.h"

void Login::LoginSystem(string& id, string& pw, User& currentUser)
{
	// 관리자 계정 확인
	if (id == "admin" && pw == "admin")
	{
		currentUser = User(id, pw);
		return;
	}

	// 멤버 계정 확인
	if (memberRepo->IsRealMember(id, pw))
	{
		currentUser = User(id, pw);
		// 로그인 정보 저장
	}
}
