#ifndef LOGIN_H
#define LOGIN_H

// ��� ����
#include "BikeRentalSystem.h"
#include "MemberRepo.h"

class Login {
private:
	MemberRepo* memberRepo;
public:
	Login(MemberRepo* memberRepo) : memberRepo(memberRepo) {}; // ������
	void LoginSystem(string& id, string& pw, User& curretUser);
};

#endif