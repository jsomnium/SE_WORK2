#include "BikeRentalSystem.h"
#include "Join.h"
#include "MemberRepo.h"

// 1.1 ȸ������ - (1.2). AddNewMember()
void Join::AddNewMember(string id, string pw, string phoneNum) {
	Member* member = new Member(id, pw, phoneNum); // �Է¹��� ���� ������� ��� ����
	this->memberRepo->AddNewMember(member); // ������ member�� memberCollection�� �߰���
}