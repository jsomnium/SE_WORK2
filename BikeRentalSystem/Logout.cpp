#include "Logout.h"
#include "User.h"

// �α׾ƿ� ����
void Logout::LogoutSystem(User currentUser)
{
	currentUser = User(); // �⺻ �����ڷ� ����
}

string Logout::GetCurUserId(User currentUser)
{
	return currentUser.GetID();
}
