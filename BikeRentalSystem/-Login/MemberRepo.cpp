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
            // �ش��ϴ� id�� pw�� �� ���� �ִٸ� true ��ȯ
        }
    }
    return false;
}
