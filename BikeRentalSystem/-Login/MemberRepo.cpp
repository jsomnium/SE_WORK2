#include "MemberRepo.h"

void MemberRepo::AddNewMember(Member* member)
{
    members.push_back(member);
}

bool MemberRepo::IsRealMember(string& id, string& pw)
{
    for (Member* m : members) {
        if (m->GetMemberID() == id && m->GetMemberPw() == pw) {
            return true;
            // 해당하는 id와 pw가 한 개라도 있다면 true 반환
        }
    }
    return false;
}
