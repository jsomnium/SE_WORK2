#ifndef EXITUI_H
#define EXITUI_H

// 헤더 선언
#include "BikeRentalSystem.h"
#include "Exit.h"

// 함수 선언

// 종료 기능 컨트롤 클래스
class ExitUI {
private:
	Exit* exitControl;
public:
	ExitUI(Exit* exitControl) : exitControl(exitControl) {}; // 생성자
	void OutputExit(ofstream& out_fp);
};

#endif