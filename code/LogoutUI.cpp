#include "LogoutUI.h"
#include <iostream>
#include <fstream>

extern std::ifstream in_fp;
extern std::ofstream out_fp;

LogoutUI::LogoutUI(Logout& logout) : logout(logout) {}

// �Լ��̸� : showInterface
// ��� : �α׾ƿ� UI ���(�̹� ���������� ��� x)
// �������� : ����
// ��ȯ�� : ����
void LogoutUI::showInterface() {}

// �Լ��̸� : callLogout
// ��� : logout class�� logout() �Լ� ȣ��. �α׾ƿ� ó�� �� �α׾ƿ� ��� ���.
// �������� : ����
// ��ȯ�� : ����
void LogoutUI::callLogout() {
    std::string id = logout.logout();  // Logout ��ü�� logout �Լ� ȣ��
    showLogoutResult(id);  // �α׾ƿ� ��� ���
}

// �Լ��̸� : showLogoutResult
// ��� : �α׾ƿ� ��� ���
// �������� : const std::string& id
// ��ȯ�� : ����
void LogoutUI::showLogoutResult(const std::string& id) {
    out_fp << "2.2. �α׾ƿ�\n";
    if (!id.empty()) {
        out_fp << "> " << id << "\n";
    }
    else {
        out_fp << "> �α׾ƿ� ����: �α��ε� ����ڰ� �����ϴ�\n";
    }
    out_fp.flush();
}