#include "BikeRentalSystem.h"
#include "JoinUI.h"
#include "Join.h"
#include "MemberRepo.h"
#include "Login.h"
#include "LoginUI.h"
#include "Logout.h"
#include "LogoutUI.h"
#include "BikeRepo.h"
#include "EnrollBike.h"
#include "EnrollBikeUI.h"
#include "Rent.h"
#include "RentUI.h"
#include "Admin.h"

void doTask(ifstream& in_fp, ofstream& out_fp)
{
    // ����� �����ϱ� ���� �ʿ��� Ŭ���� ����
    MemberRepo memberRepo;// ��� ��� ���� ����
    Member currentUser; // ���� �α����� ��� ���� ����
    BikeRepo bikeRepo; // ��� ������ ���� ����

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

                // ���� ����
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

                // ���� ����
                break;
            }
            }
            break;
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1: // "3.1 ������ ���" �޴� �κ�
            {
                // �ʿ��� Ŭ���� ����
                EnrollBike EnrollBikeControl(&bikeRepo);
                EnrollBikeUI EnrollBikeUI(&EnrollBikeControl);
                string id, name;

                // [�ٿ����] �Է¹ޱ�
                EnrollBikeUI.InputEnrollInfo(id, name, in_fp);

                // [��Ʈ��] ���� ����
                EnrollBikeControl.EnrollNewBike(id, name);

                // [�ٿ����] ���
                EnrollBikeUI.OutputEnrollInfo(id, name, out_fp);

                // ���� ����
                break;
            }
            }
            break;
        }
        case 4:
        {
            switch (menu_level_2)
            {
            case 1:  // "4.1 ������ �뿩" �޴� �κ�
            {
                // �ʿ��� Ŭ���� ����
                Rent RentControl;
                RentUI RentUI(&RentControl);
                string id, name;
                //Bike bike;

                // [�ٿ����] �Է¹ޱ�
                RentUI.InputRentInfo(id, in_fp);

                // [��Ʈ��] ���� ����
                RentControl.RentBike(id, name, currentUser, bikeRepo);

                // [�ٿ����] ���
                RentUI.OutputRentInfo(id, name, out_fp);

                // ���� ����
                break;
            }
            }
            break;
        }
        case 5:
        {
            switch (menu_level_2)
            {
            case 1:   // "5.1. ������ �뿩 ����Ʈ" �޴� �κ�
            {
                // �ʿ��� Ŭ���� ����

                // [�ٿ����]

                // [��Ʈ��]

                // [�ٿ����]

                // ���� ����
                break;;
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