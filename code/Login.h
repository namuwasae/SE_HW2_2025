#pragma once
#include <string>
#include "MemberRepository.h"
#include "LoginSession.h"

// Ŭ���� �̸� : Login
// ���� : �α��� ����� ó���ϴ� Ŭ����. �α��� ���� ����� ����.
class Login {
private:
    MemberRepository& repo;  // MemberRepository ��ü�� ������
    LoginSession& session;  // LoginSession ��ü�� ������

public:
    Login(MemberRepository& repo, LoginSession& session);
    bool authenticate(const std::string& id, const std::string& pw);  // �α��� ����
};
