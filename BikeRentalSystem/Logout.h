#ifndef LOGOUT_H
#define LOGOUT_H

// 헤더 선언
#include "BikeRentalSystem.h"
#include "User.h"

// 로그아웃 컨트롤 클래스
class Logout {
public:
	void LogoutSystem(User currentUser);
	string GetCurUserId(User currentUser);
};

#endif