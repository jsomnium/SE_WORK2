#include "Login.h"

void Login::LoginSystem(string& id, string& pw, User& currentUser)
{
	// ������ ���� Ȯ��
	if (id == "admin" && pw == "admin")
	{
		currentUser = User(id, pw);
		return;
	}

	// ��� ���� Ȯ��
	if (memberRepo->IsRealMember(id, pw))
	{
		currentUser = User(id, pw);
		// �α��� ���� ����
	}
}
