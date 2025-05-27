#include "RegisterBicycleUI.h"
#include <iostream>
#include <fstream>

extern std::ifstream in_fp;
extern std::ofstream out_fp;

RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle& reg, LoginSession& session) : reg(reg), session(session) {}

// �Լ��̸� : submitBicycleRegistration
// ��� : bikeID, productName�� �޾� RegisterBicycle ��ü�� registerBicycle �Լ� ȣ���ϰ� ��� ����� ���.
// �������� : ����
// ��ȯ�� : ����
void RegisterBicycleUI::submitBicycleRegistration() {
    std::string bikeID, productName;
    in_fp >> bikeID >> productName;

    bool success = reg.registerBicycle(bikeID, productName);
    if (success) {
        showRegisterBicycle(bikeID, productName);
    }
    else {
        out_fp << "3.1. ������ ���\n";
        out_fp << "> ������ ��� ����\n";
        out_fp.flush();
    }
}

// �Լ��̸� : startInterface
// ��� : ������ ��� UI ���(�̹� ���������� ��� x)
// �������� : ����
// ��ȯ�� : ����
void RegisterBicycleUI::startInterface() {}

// �Լ��̸� : showRegisterBicycle
// ��� : ������ ��� ��� ���
// �������� : const std::string& bikeID, const std::string& productName
// ��ȯ�� : ����
void RegisterBicycleUI::showRegisterBicycle(const std::string& bikeID, const std::string& productName) {
    out_fp << "3.1. ������ ���\n";
    out_fp << "> " << bikeID << " " << productName << "\n";
    out_fp.flush();
}
