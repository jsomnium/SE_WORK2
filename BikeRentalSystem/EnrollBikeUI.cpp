#include "EnrollBikeUI.h"

// ������ ��� ���� �Է¹ޱ�
void EnrollBikeUI::InputEnrollInfo(string& id, string& name, ifstream& in_fp)
{
	in_fp >> id >> name;
}

// ������ ��� ���� ����ϱ�
void EnrollBikeUI::OutputEnrollInfo(string& id, string& name, ofstream& out_fp)
{
	out_fp << "3.1. ������ ���" << endl;
	out_fp << "> " << id << " " << name << " " << endl << endl;
}
