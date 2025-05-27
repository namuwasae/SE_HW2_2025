#include <iostream>
#include <fstream>
#include <string>
#include "RegisterUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "ReferRentalUI.h"
#include "RentalBicycleUI.h"
#include "RegisterBicycleUI.h"
#include "Member.h"
#include "MemberRepository.h"
#include "LoginSession.h"
#include "Logout.h" 
#include "BicycleRepository.h"
#include "RegisterBicycle.h"
#include "ReportRental.h"
#include "RentalBicycle.h"

// 파일 이름 선언부
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언부
void doTask();
void program_exit();

// 파일 포인터 선언부
std::ofstream out_fp;
std::ifstream in_fp;

// 포인터 선언부
RegisterUI* regUI;
LoginUI* loginUI;
LogoutUI* logoutUI;
RegisterBicycleUI* registerBicycleUI;
RentalBicycleUI* rentalBicycleUI;
ReferRentalUI* referRentalUI;

// 메인 함수
int main() {
    // 파일 입출력을 위한 초기화
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    MemberRepository repo;         // 메인을 실행하는 동안 유지되는 MemberRepository 객체
    LoginSession session;          // 로그인 세션 관리 객체
    Register reg(repo);            // 메인을 실행하는 동안 유지되는 Register 객체
    Login login(repo, session);    // 메인을 실행하는 동안 유지되는 Login 객체
    Logout logout(session);        // 메인을 실행하는 동안 유지되는 Logout 객체

    BicycleRepository bicycleRepo; // 메인을 실행하는 동안 유지되는 BicycleRepository 객체
    RegisterBicycle registerBicycle(bicycleRepo, session); // 메인을 실행하는 동안 유지되는 RegisterBicycle 객체

    ReportRental reportRental(bicycleRepo, session); // 메인을 실행하는 동안 유지되는 ReportRental 객체
    RentalBicycle rentalBicycle(bicycleRepo, reportRental, session); // 메인을 실행하는 동안 유지되는 RentalBicycle 객체
    ReferRental referRental(reportRental, session);
    regUI = new RegisterUI(reg);
    loginUI = new LoginUI(login);
    logoutUI = new LogoutUI(logout);
    registerBicycleUI = new RegisterBicycleUI(registerBicycle, session);
    rentalBicycleUI = new RentalBicycleUI(rentalBicycle);
    referRentalUI = new ReferRentalUI(referRental);

    doTask();

    out_fp.close();
    in_fp.close();

    // 동적 할당 객체 해제
    delete regUI;
    delete loginUI;
    delete logoutUI;
    delete registerBicycleUI;
    delete rentalBicycleUI;
    delete referRentalUI;

    return 0;
}

// 함수이름 : doTask
// 기능 : 메뉴 파싱 구현 및 메뉴 관련 함수 호출
// 전달인자 : 없음
// 반환값 : 없음
void doTask() {
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit) {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1 >> menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1) {
        case 1: {
            switch (menu_level_2) {
            case 1: { // "1.1. 회원가입" 메뉴
                regUI->submitMemberRegistration();
                break;
            }
            }
            break;
        }
        case 2: {
            switch (menu_level_2) {
            case 1: { // "2.1. 로그인" 메뉴
                loginUI->submitLogin();
                break;
            }
            case 2: { // "2.2. 로그아웃" 메뉴
                logoutUI->callLogout();
                break;
            }
            }
            break;
        }
        case 3: {
            switch (menu_level_2) {
            case 1: { // "3.1. 자전거 등록" 메뉴
                registerBicycleUI->submitBicycleRegistration();
                break;
            }
            }
            break;
        }
        case 4: {
            switch (menu_level_2) {
            case 1: { // "4.1. 자전거 대여" 메뉴
                rentalBicycleUI->submitBikeID();
                break;
            }
            }
            break;
        }
        case 5: {
            switch (menu_level_2) {
            case 1: { // "5.1. 자전거 대여 리스트 조회" 메뉴
                referRentalUI->startReferRental();
                break;
            }
            }
            break;
        }
        case 6: {
            switch (menu_level_2) {
            case 1: { // "6.1. 종료" 메뉴
                program_exit();
                is_program_exit = 1;
                break;
            }
            }
            break;
        }
        }
    }
}

// 함수이름 : program_exit
// 기능 : 프로그램 종료 시 출력
// 전달인자 : 없음
// 반환값 : 없음
void program_exit() {
    out_fp << "6.1. 종료\n";
    out_fp.flush();
}
