#ifndef JOINUI_H
#define JOINUI_H

// 헤더 선언
#include "BikeRentalSystem.h"
#include "Join.h"
#include "MemberRepo.h"

// 회원가입 바운더리 클래스
class JoinUI {
private:
	Join* joinControl;
public:
	JoinUI(Join* joinControl) : joinControl(joinControl) {}; // 생성자
	void InputJoinInfo(string& id, string& pw, string& phoneNum, ifstream& in_fp); // 입력
	void OutputJoinResult(string& id, string& pw, string& phoneNum, ofstream& out_fp); // 출력
};

#endif