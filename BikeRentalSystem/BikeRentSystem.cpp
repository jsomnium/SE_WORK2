#include "BikeRentalSystem.h"
#include "JoinUI.h"
#include "Join.h"
#include "MemberRepo.h"

void doTask(ifstream &in_fp, ofstream &out_fp)
{
    // ����� �����ϱ� ���� ��Ʈ��, �ٿ����, �ݷ��� Ŭ���� ����
    MemberRepo memberRepo;
    User currentUser; // ���� �α����� ���� ���� ����

    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        in_fp >> menu_level_1 >> menu_level_2;

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1: // "1.1. ȸ������" �޴� �κ�
            {
                // �ش� ��� ����
                Join JoinControl(&memberRepo);
                JoinUI JoinUI(&JoinControl);
                JoinUI.StartJoinInterface(&memberRepo, in_fp, out_fp);
                break;
            }
            }
            break;
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1: // "2.1 �α���" �޴� �κ�
            {
                break;
            }
            }
            break;
        }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1: // "6.1. ����" �޴� �κ�
                    // �� �κ� ���� use_case�� �����ؼ� �����Ѵ�.
            {
                out_fp << "6.1. ����" << endl;
                is_program_exit = 1;
                break;
                ;
            }
            }
            break;
        }
        }
    }
}