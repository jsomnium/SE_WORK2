#ifndef LOGOUT_H
#define LOGOUT_H

// ��� ����
#include "BikeRentalSystem.h"
#include "User.h"

// �α׾ƿ� ��Ʈ�� ����
class Logout {
public:
	void LogoutSystem(User currentUser);
	string GetCurUserId(User currentUser);
};

#endif