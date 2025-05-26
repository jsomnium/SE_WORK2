#include "BikeRentalSystem.h"
#include "MemberRepo.h"
#include "JoinUI.h"
#include "Join.h"

// 1.1 회원가입 - (1). StartJoinInterface()
void JoinUI::StartJoinInterface(MemberRepo* memberRepo, ifstream& in_fp, ofstream& out_fp) {
    // 타입 정의
    string id, pw, phoneNum;

    // (1.1) 입력 : ID, Password, 전화번호를 파일로부터 읽음
    InputJoinInfo(id, pw, phoneNum, in_fp);

    // (1.2) 컨트롤에게 멤버 생성 수행
    this->joinControl->AddNewMember(id, pw, phoneNum);

    // (3) 출력
    OutputJoinResult(id, pw, phoneNum, out_fp);
}

void JoinUI::InputJoinInfo(string& id, string& pw, string& phoneNum, ifstream& in_fp) {
    in_fp >> id >> pw >> phoneNum;
}

void JoinUI::OutputJoinResult(string& id, string& pw, string& phoneNum, ofstream& out_fp) {
    out_fp << "1.1. 회원가입" << endl;
    out_fp << "> " << id << " " << pw << " " << phoneNum << endl;
}