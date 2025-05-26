#ifndef JOIN_H
#define JOIN_H

// 헤더 선언
#include "BikeRentalSystem.h"
#include "memberRepo.h"
#include "Member.h"

// 함수 선언
// 변수 선언
// 클래스 선언

// 1.1 회원가입 기능
class Join {
private:
	MemberRepo* memberRepo;
public:
	Join(MemberRepo* memberRepo) : memberRepo(memberRepo) {};
	void AddNewMember(string id, string pw, string phoneNum);
};

#endif