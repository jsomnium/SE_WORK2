#ifndef MEMBERREPO_H
#define MEMBERREPO_H

// ��� ����
#include "BikeRentalSystem.h"
#include <vector>
#include "Member.h"

class MemberRepo {
private:
	vector<Member*> members;
public:
	void AddNewMember(Member* member);
	bool IsRealMember(string& id, string& pw);
};

#endif