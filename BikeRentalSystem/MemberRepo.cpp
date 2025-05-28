#include "MemberRepo.h"
#include "Member.h"

// MemberRepo에 새로운 멤버 추가
void MemberRepo::AddNewMember(Member* member)
{
    members.push_back(member);
}

// MemberRepo에 있는 Member의 id가 일치하는지 확인하고 실제 member 반환
bool MemberRepo::IsRealMember(string& id, string& pw)
{
    for (Member* m : members) {
        if (m->GetID() == id && m->GetPw() == pw) {
            return true;
            // 해당하는 id와 pw가 한 개라도 있다면 true 반환
        }
    }
    return false;
}