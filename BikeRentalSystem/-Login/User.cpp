#include "User.h"

// User ������ ����
User::User(string id, string pw) : id(id), pw(pw) {}

string User::GetID()
{
    return this->id;
}

string User::GetPw()
{
	return this->pw;
}
