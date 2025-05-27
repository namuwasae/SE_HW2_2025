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

// ���� �̸� �����
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� �����
void doTask();
void program_exit();

// ���� ������ �����
std::ofstream out_fp;
std::ifstream in_fp;

// ������ �����
RegisterUI* regUI;
LoginUI* loginUI;
LogoutUI* logoutUI;
RegisterBicycleUI* registerBicycleUI;
RentalBicycleUI* rentalBicycleUI;
ReferRentalUI* referRentalUI;

// ���� �Լ�
int main() {
    // ���� ������� ���� �ʱ�ȭ
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    MemberRepository repo;         // ������ �����ϴ� ���� �����Ǵ� MemberRepository ��ü
    LoginSession session;          // �α��� ���� ���� ��ü
    Register reg(repo);            // ������ �����ϴ� ���� �����Ǵ� Register ��ü
    Login login(repo, session);    // ������ �����ϴ� ���� �����Ǵ� Login ��ü
    Logout logout(session);        // ������ �����ϴ� ���� �����Ǵ� Logout ��ü

    BicycleRepository bicycleRepo; // ������ �����ϴ� ���� �����Ǵ� BicycleRepository ��ü
    RegisterBicycle registerBicycle(bicycleRepo, session); // ������ �����ϴ� ���� �����Ǵ� RegisterBicycle ��ü

    ReportRental reportRental(bicycleRepo, session); // ������ �����ϴ� ���� �����Ǵ� ReportRental ��ü
    RentalBicycle rentalBicycle(bicycleRepo, reportRental, session); // ������ �����ϴ� ���� �����Ǵ� RentalBicycle ��ü
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

    // ���� �Ҵ� ��ü ����
    delete regUI;
    delete loginUI;
    delete logoutUI;
    delete registerBicycleUI;
    delete rentalBicycleUI;
    delete referRentalUI;

    return 0;
}

// �Լ��̸� : doTask
// ��� : �޴� �Ľ� ���� �� �޴� ���� �Լ� ȣ��
// �������� : ����
// ��ȯ�� : ����
void doTask() {
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit) {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        in_fp >> menu_level_1 >> menu_level_2;

        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1) {
        case 1: {
            switch (menu_level_2) {
            case 1: { // "1.1. ȸ������" �޴�
                regUI->submitMemberRegistration();
                break;
            }
            }
            break;
        }
        case 2: {
            switch (menu_level_2) {
            case 1: { // "2.1. �α���" �޴�
                loginUI->submitLogin();
                break;
            }
            case 2: { // "2.2. �α׾ƿ�" �޴�
                logoutUI->callLogout();
                break;
            }
            }
            break;
        }
        case 3: {
            switch (menu_level_2) {
            case 1: { // "3.1. ������ ���" �޴�
                registerBicycleUI->submitBicycleRegistration();
                break;
            }
            }
            break;
        }
        case 4: {
            switch (menu_level_2) {
            case 1: { // "4.1. ������ �뿩" �޴�
                rentalBicycleUI->submitBikeID();
                break;
            }
            }
            break;
        }
        case 5: {
            switch (menu_level_2) {
            case 1: { // "5.1. ������ �뿩 ����Ʈ ��ȸ" �޴�
                referRentalUI->startReferRental();
                break;
            }
            }
            break;
        }
        case 6: {
            switch (menu_level_2) {
            case 1: { // "6.1. ����" �޴�
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

// �Լ��̸� : program_exit
// ��� : ���α׷� ���� �� ���
// �������� : ����
// ��ȯ�� : ����
void program_exit() {
    out_fp << "6.1. ����\n";
    out_fp.flush();
}
