#ifndef JOINUI_H
#define JOINUI_H

// 헤더 선언
#include "BikeRentalSystem.h"
#include "Join.h"
#include "MemberRepo.h"

// 함수 선언
class JoinUI {
private:
	Join* joinControl;
public:
	JoinUI(Join* joinControl) : joinControl(joinControl) {};
	void StartJoinInterface(MemberRepo* memberRepo, ifstream& in_fp, ofstream& out_fp);
	void InputJoinInfo(string& id, string& pw, string& phoneNum, ifstream& in_fp);
	void OutputJoinResult(string& id, string& pw, string& phoneNum, ofstream& out_fp);
};

#endif