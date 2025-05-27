#pragma once
#include <string>
#include "LoginSession.h"

// 클래스 이름 : Logout
// 설명 : 로그아웃 기능을 처리하는 클래스. 로그아웃 처리 기능을 제공.
class Logout {
private:
    LoginSession& session;  // LoginSession 객체의 참조자

public:
    Logout(LoginSession& session);  // 생성자
    std::string logout();  // 로그아웃 처리
};
