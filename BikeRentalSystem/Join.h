#ifndef JOIN_H
#define JOIN_H

// ��� ����
#include "BikeRentalSystem.h"
#include "memberRepo.h"
#include "Member.h"

// �Լ� ����
// ���� ����
// Ŭ���� ����

// 1.1 ȸ������ ���
class Join {
private:
	MemberRepo* memberRepo;
public:
	Join(MemberRepo* memberRepo) : memberRepo(memberRepo) {};
	void AddNewMember(string id, string pw, string phoneNum);
};

#endif