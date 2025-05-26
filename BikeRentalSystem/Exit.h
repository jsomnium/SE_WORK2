#ifndef EXIT_H
#define EXIT_H

// 헤더 선언
#include "BikeRentalSystem.h"
#include "memberRepo.h"
#include "Member.h"

// 함수 선언

// 종료 기능 컨트롤 클래스
class Exit {
public:
	void ExitSystem(int& is_program_exit);
};

#endif