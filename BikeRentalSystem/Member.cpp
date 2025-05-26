#include "Member.h"
#include "User.h"

// Member 생성자 정의
Member::Member(string id, string pw, string phoneNum): User(id, pw), phoneNum(phoneNum) {}
