#include "BikeRentalSystem.h"
#include "Join.h"
#include "MemberRepo.h"

// 1.1 회원가입 - (1.2). AddNewMember()
void Join::AddNewMember(string id, string pw, string phoneNum) {
	Member* member = new Member(id, pw, phoneNum); // 입력받은 값을 기반으로 멤버 생성
	this->memberRepo->AddNewMember(member); // 생성된 member를 memberCollection에 추가함
}