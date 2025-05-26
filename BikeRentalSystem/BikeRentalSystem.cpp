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
    // 기능을 수행하기 위해 필요한 클래스 생성
    MemberRepo memberRepo;// 모든 멤버 정보 저장
    Member currentUser; // 현재 로그인한 멤버 정보 저장
    BikeRepo bikeRepo; // 모든 자전거 정보 저장

    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1 >> menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1: // "1.1. 회원가입" 메뉴 부분
            {
                // 필요한 클래스 생성
                Join JoinControl(&memberRepo);
                JoinUI JoinUI(&JoinControl);
                string id, pw, phone;

                // [바운더리] 입력받기
                JoinUI.InputJoinInfo(id, pw, phone, in_fp);

                // [컨트롤] 로직 실행
                JoinControl.AddNewMember(id, pw, phone);

                // [바운더리] 출력
                JoinUI.OutputJoinResult(id, pw, phone, out_fp);

                // 수행 종료
                break;
            }
            }
            break;
        }
        case 2:
        {
            switch (menu_level_2)
            {
            case 1: // "2.1 로그인" 메뉴 부분
            {
                // 필요한 클래스 생성
                Login LoginControl(&memberRepo);
                LoginUI LoginUI(&LoginControl);
                string id, pw, phone;

                // [바운더리] 입력받기
                LoginUI.InputLoginInfo(id, pw, in_fp);

                // [컨트롤] 로직 실행
                LoginControl.LoginSystem(id, pw, currentUser);

                // [바운더리] 출력
                LoginUI.OutputLoginResult(id, pw, out_fp);

                // 수행 종료
                break;
            }
            case 2: // "2.2 로그아웃" 메뉴 부분
            {
                // 필요한 클래스 생성
                Logout LogoutControl;
                LogoutUI LogoutUI(&LogoutControl);
                string id;

                // [컨트롤] id 가져오기
                id = LogoutControl.GetCurUserId(currentUser);

                // [컨트롤] 로직 실행
                LogoutControl.LogoutSystem(currentUser);

                // [바운더리] 출력
                LogoutUI.OutputLogoutResult(id, out_fp);

                // 수행 종료
                break;
            }
            }
            break;
        }
        case 3:
        {
            switch (menu_level_2)
            {
            case 1: // "3.1 자전거 등록" 메뉴 부분
            {
                // 필요한 클래스 생성
                EnrollBike EnrollBikeControl(&bikeRepo);
                EnrollBikeUI EnrollBikeUI(&EnrollBikeControl);
                string id, name;

                // [바운더리] 입력받기
                EnrollBikeUI.InputEnrollInfo(id, name, in_fp);

                // [컨트롤] 로직 수행
                EnrollBikeControl.EnrollNewBike(id, name);

                // [바운더리] 출력
                EnrollBikeUI.OutputEnrollInfo(id, name, out_fp);

                // 수행 종료
                break;
            }
            }
            break;
        }
        case 4:
        {
            switch (menu_level_2)
            {
            case 1:  // "4.1 자전거 대여" 메뉴 부분
            {
                // 필요한 클래스 생성
                Rent RentControl;
                RentUI RentUI(&RentControl);
                string id, name;
                //Bike bike;

                // [바운더리] 입력받기
                RentUI.InputRentInfo(id, in_fp);

                // [컨트롤] 로직 수행
                RentControl.RentBike(id, name, currentUser, bikeRepo);

                // [바운더리] 출력
                RentUI.OutputRentInfo(id, name, out_fp);

                // 수행 종료
                break;
            }
            }
            break;
        }
        case 5:
        {
            switch (menu_level_2)
            {
            case 1:   // "5.1. 자전거 대여 리스트" 메뉴 부분
            {
                // 필요한 클래스 생성

                // [바운더리]

                // [컨트롤]

                // [바운더리]

                // 수행 종료
                break;;
            }
            }
            break;
        }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1:   // "6.1. 종료" 메뉴 부분
                // 이 부분 또한 use_case로 간주해서 구현한다.
            {
                out_fp << "6.1. 종료" << endl;
                is_program_exit = 1;
                break;;
            }
            }
            break;
        }
        }
    }
}