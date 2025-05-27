#pragma once
#include <string>
#include "MemberRepository.h"
#include "LoginSession.h"

// 클래스 이름 : Login
// 설명 : 로그인 기능을 처리하는 클래스. 로그인 인증 기능을 제공.
class Login {
private:
    MemberRepository& repo;  // MemberRepository 객체의 참조자
    LoginSession& session;  // LoginSession 객체의 참조자

public:
    Login(MemberRepository& repo, LoginSession& session);
    bool authenticate(const std::string& id, const std::string& pw);  // 로그인 인증
};
