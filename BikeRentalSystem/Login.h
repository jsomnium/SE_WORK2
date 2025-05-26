#ifndef LOGIN_H
#define LOGIN_H

// 헤더 선언
#include "BikeRentalSystem.h"
#include "MemberRepo.h"

class Login {
private:
	MemberRepo* memberRepo;
public:
	Login(MemberRepo* memberRepo) : memberRepo(memberRepo) {}; // 생성자
	void LoginSystem(string& id, string& pw, User& curretUser);
};

#endif