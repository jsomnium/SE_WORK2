#include "BikeRentalSystem.h"
#include "JoinUI.h"
#include "Join.h"
#include "MemberRepo.h"
#include "Login.h"
#include "LoginUI.h"
#include "Logout.h"
#include "LogoutUI.h"

void doTask(ifstream& in_fp, ofstream& out_fp)
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
                // �ʿ��� Ŭ���� ����
                Join JoinControl(&memberRepo);
                JoinUI JoinUI(&JoinControl);
                string id, pw, phone;

                // [�ٿ����] �Է¹ޱ�
                JoinUI.InputJoinInfo(id, pw, phone, in_fp);

                // [��Ʈ��] ���� ����
                JoinControl.AddNewMember(id, pw, phone);

                // [�ٿ����] ���
                JoinUI.OutputJoinResult(id, pw, phone, out_fp);

                // ���� ����
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
                // �ʿ��� Ŭ���� ����
                Login LoginControl(&memberRepo);
                LoginUI LoginUI(&LoginControl);
                string id, pw, phone;

                // [�ٿ����] �Է¹ޱ�
                LoginUI.InputLoginInfo(id, pw, in_fp);

                // [��Ʈ��] ���� ����
                LoginControl.LoginSystem(id, pw, currentUser);

                // [�ٿ����] ���
                LoginUI.OutputLoginResult(id, pw, out_fp);
                break;
            }
            case 2: // "2.2 �α׾ƿ�" �޴� �κ�
            {
                // �ʿ��� Ŭ���� ����
                Logout LogoutControl;
                LogoutUI LogoutUI(&LogoutControl);
                string id;

                // [��Ʈ��] id ��������
                id = LogoutControl.GetCurUserId(currentUser);

                // [��Ʈ��] ���� ����
                LogoutControl.LogoutSystem(currentUser);

                // [�ٿ����] ���
                LogoutUI.OutputLogoutResult(id, out_fp);
                break;
            }
            }
            break;
        }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1:   // "6.1. ����" �޴� �κ�
                // �� �κ� ���� use_case�� �����ؼ� �����Ѵ�.
            {
                out_fp << "6.1. ����" << endl;
                is_program_exit = 1;
                break;;
            }
            }
            break;
        }
        }
    }
}