#include "BikeRentalSystem.h"
#include "MemberRepo.h"
#include "JoinUI.h"
#include "Join.h"

// �Է¹޴� ����
void JoinUI::InputJoinInfo(string& id, string& pw, string& phoneNum, ifstream& in_fp) {
    in_fp >> id >> pw >> phoneNum;
}

// ����ϴ� ����
void JoinUI::OutputJoinResult(string& id, string& pw, string& phoneNum, ofstream& out_fp) {
    out_fp << "1.1. ȸ������" << endl;
    out_fp << "> " << id << " " << pw << " " << phoneNum << endl;
}