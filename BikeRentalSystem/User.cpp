#include "User.h"

// User 생성자 정의
User::User(string id, string pw) : id(id), pw(pw) {}

// id 반환
string User::GetID()
{
    return this->id;
}

// pw 반환
string User::GetPw()
{
	return this->pw;
}
