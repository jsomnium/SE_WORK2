#include "Member.h"
#include "User.h"

// Member ������ ����
Member::Member(string id, string pw, string phoneNum): User(id, pw), phoneNum(phoneNum) {}
