#pragma once
#include "Logout.h"

// Ŭ���� �̸� : LogoutUI
// ���� : �α׾ƿ� UI ���� Ŭ����. �α׾ƿ� ��û�� ó���ϰ� ����� ���.
class LogoutUI {
private:
    Logout& logout;  // Logout ��ü�� ������

public:
    void showInterface();  // �α׾ƿ� UI ���
    LogoutUI(Logout& logout);  // ������
    void callLogout();  // �α׾ƿ� Ȯ�� �� ó��
    void showLogoutResult(const std::string& id);  // �α׾ƿ� ��� ���
};
