#include "LoginUI.h"
#include <iostream>
#include <fstream>

extern std::ifstream in_fp;
extern std::ofstream out_fp;

// �Լ��̸� : startInterface()
// ��� : ȸ������ ȭ�� ���(output.txt�� ���Ŀ� ���߱� ���� startInterface()�� ���� �������� �ʾ���).
// �������� : ����
// ��ȯ�� : ����
void LoginUI::startInterface() {}

LoginUI::LoginUI(Login& login) : login(login) {}

// �Լ��̸� : submitLogin()
// ��� : id, pw�� �޾� Login ��ü�� authenticate �Լ� ȣ���ϰ� �α��� ����� ���.
// �������� : ����.
// ��ȯ�� : ����.
void LoginUI::submitLogin() {
    std::string id, pw;
    in_fp >> id >> pw;
    bool success = login.authenticate(id, pw); // authenticate �Լ� ȣ��
    showLoginResult(success, id, pw);         // showLoginResult �Լ� ȣ��
}

// �Լ��̸� : showLoginResult()
// ��� : �α��� ��� ���
// �������� : bool success, const std::string& id, const std::string& pw
// ��ȯ�� : ����
void LoginUI::showLoginResult(bool success, const std::string& id, const std::string& pw) {
    out_fp << "2.1. �α���\n";
    if (success) {
        out_fp << "> " << id << " " << pw << "\n";
    }
    else {
        out_fp << "> �α��� ����\n";
    }
    out_fp.flush();
}
