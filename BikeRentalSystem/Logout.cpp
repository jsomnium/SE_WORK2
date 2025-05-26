#include "Logout.h"
#include "User.h"

// 로그아웃 로직
void Logout::LogoutSystem(User currentUser)
{
	currentUser = User(); // 기본 생성자로 리셋
}

string Logout::GetCurUserId(User currentUser)
{
	return currentUser.GetID();
}
