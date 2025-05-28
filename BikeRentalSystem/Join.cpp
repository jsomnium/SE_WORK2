#include "BikeRentalSystem.h"
#include "Join.h"
#include "MemberRepo.h"

// 회원가입 시 memberRepo에 새로운 멤버 등록하기
void Join::AddNewMember(string id, string pw, string phoneNum) {
	Member* member = new Member(id, pw, phoneNum); // 입력받은 값을 기반으로 멤버 생성
	this->memberRepo->AddNewMember(member); // 생성된 member를 memberRepo에 추가함
}