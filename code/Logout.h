#pragma once
#include <string>
#include "LoginSession.h"

// Ŭ���� �̸� : Logout
// ���� : �α׾ƿ� ����� ó���ϴ� Ŭ����. �α׾ƿ� ó�� ����� ����.
class Logout {
private:
    LoginSession& session;  // LoginSession ��ü�� ������

public:
    Logout(LoginSession& session);  // ������
    std::string logout();  // �α׾ƿ� ó��
};
