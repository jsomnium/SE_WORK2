#include "BikeRentalSystem.h"
#include "MemberRepo.h"
#include "JoinUI.h"
#include "Join.h"

// 입력받는 로직
void JoinUI::InputJoinInfo(string& id, string& pw, string& phoneNum, ifstream& in_fp) {
    in_fp >> id >> pw >> phoneNum;
}

// 출력하는 로직
void JoinUI::OutputJoinResult(string& id, string& pw, string& phoneNum, ofstream& out_fp) {
    out_fp << "1.1. 회원가입" << endl;
    out_fp << "> " << id << " " << pw << " " << phoneNum << endl << endl;
}