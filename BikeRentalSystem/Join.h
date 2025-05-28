#ifndef JOIN_H
#define JOIN_H

// 헤더 선언
#include "BikeRentalSystem.h"
#include "memberRepo.h"
#include "Member.h"

// 회원가입 컨트롤 클래스
class Join {
private:
	MemberRepo* memberRepo;
public:
	Join(MemberRepo* memberRepo) : memberRepo(memberRepo) {}; // 생성자
	void AddNewMember(string id, string pw, string phoneNum);
};

#endif