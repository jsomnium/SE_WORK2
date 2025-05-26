#include "BikeRentalSystem.h"
#include "MemberRepo.h"
#include "JoinUI.h"
#include "Join.h"

// 1.1 ȸ������ - (1). StartJoinInterface()
void JoinUI::StartJoinInterface(MemberRepo* memberRepo, ifstream& in_fp, ofstream& out_fp) {
    // Ÿ�� ����
    string id, pw, phoneNum;

    // (1.1) �Է� : ID, Password, ��ȭ��ȣ�� ���Ϸκ��� ����
    InputJoinInfo(id, pw, phoneNum, in_fp);

    // (1.2) ��Ʈ�ѿ��� ��� ���� ����
    this->joinControl->AddNewMember(id, pw, phoneNum);

    // (3) ���
    OutputJoinResult(id, pw, phoneNum, out_fp);
}

void JoinUI::InputJoinInfo(string& id, string& pw, string& phoneNum, ifstream& in_fp) {
    in_fp >> id >> pw >> phoneNum;
}

void JoinUI::OutputJoinResult(string& id, string& pw, string& phoneNum, ofstream& out_fp) {
    out_fp << "1.1. ȸ������" << endl;
    out_fp << "> " << id << " " << pw << " " << phoneNum << endl;
}