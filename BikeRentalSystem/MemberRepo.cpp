#include "MemberRepo.h"
#include "Member.h"

void MemberRepo::AddNewMember(Member* member)
{
    members.push_back(member);
}

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

Member* MemberRepo::FindMember(string id, string pw)
{
    for (auto& member : members) {
        if (member->GetID() == id && member->GetPw() == pw) {
            return member;
        }
    }
    return nullptr;
}
