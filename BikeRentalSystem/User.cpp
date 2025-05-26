#include "User.h"

// User 생성자 정의
User::User(string id, string pw) : id(id), pw(pw) {}

string User::GetID()
{
    return this->id;
}

string User::GetPw()
{
	return this->pw;
}
