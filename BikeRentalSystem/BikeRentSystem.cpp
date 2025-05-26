#include "BikeRentalSystem.h"
#include "JoinUI.h"
#include "Join.h"
#include "MemberRepo.h"

void doTask(ifstream& in_fp, ofstream& out_fp)
{
    // 기능을 수행하기 위한 컨트롤, 바운더리, 콜렉션 클래스 생성
    MemberRepo memberRepo;
    User currentUser; // 현재 로그인한 유저 정보 저장

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
                // 해당 기능 수행
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
            case 1: // "2.1 로그인" 메뉴 부분
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