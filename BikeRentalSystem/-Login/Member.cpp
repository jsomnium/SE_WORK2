#include "Member.h"
#include "User.h"

// Member 생성자 정의
Member::Member(string id, string pw, string phoneNum): User(id, pw), phoneNum(phoneNum) {}

string Member::GetMemberID()
{
	return this->id;
}

string Member::GetMemberPw()
{
	return this->pw;
}
