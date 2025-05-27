#pragma once
#include "Login.h"

// 클래스 이름 : LoginUI
// 설명 : 로그인 UI 관리 클래스. 로그인 요청을 처리하고 결과를 출력.
class LoginUI {
private:
    Login& login;  // Login 객체의 참조자

public:
    void startInterface();
    LoginUI(Login& login); // 생성자
    void submitLogin();  // 로그인 요청 처리
    void showLoginResult(bool success, const std::string& id, const std::string& pw);  // 로그인 결과 출력
};
