#ifndef EXITUI_H
#define EXITUI_H

// ��� ����
#include "BikeRentalSystem.h"
#include "Exit.h"

// �Լ� ����

// ���� ��� ��Ʈ�� Ŭ����
class ExitUI {
private:
	Exit* exitControl;
public:
	ExitUI(Exit* exitControl) : exitControl(exitControl) {}; // ������
	void OutputExit(ofstream& out_fp);
};

#endif