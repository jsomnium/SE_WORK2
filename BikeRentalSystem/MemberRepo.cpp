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
            // �ش��ϴ� id�� pw�� �� ���� �ִٸ� true ��ȯ
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
