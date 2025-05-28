#ifndef MEMBERREPO_H
#define MEMBERREPO_H

// 헤더 선언
#include "BikeRentalSystem.h"
#include <vector>
#include "Member.h"

// Member를 vector로 저장하는 MemberRepo 클래스
class MemberRepo {
private:
	vector<Member*> members;
public:
	void AddNewMember(Member* member); // 새로운 멤버 추가
	bool IsRealMember(string& id, string& pw); // 실제 MemberRepo에 등록된 Member인지 체크
};

#endif