#pragma once
#include "Login.h"

// Ŭ���� �̸� : LoginUI
// ���� : �α��� UI ���� Ŭ����. �α��� ��û�� ó���ϰ� ����� ���.
class LoginUI {
private:
    Login& login;  // Login ��ü�� ������

public:
    void startInterface();
    LoginUI(Login& login); // ������
    void submitLogin();  // �α��� ��û ó��
    void showLoginResult(bool success, const std::string& id, const std::string& pw);  // �α��� ��� ���
};
