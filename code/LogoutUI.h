#pragma once
#include "Logout.h"

// 클래스 이름 : LogoutUI
// 설명 : 로그아웃 UI 관리 클래스. 로그아웃 요청을 처리하고 결과를 출력.
class LogoutUI {
private:
    Logout& logout;  // Logout 객체의 참조자

public:
    void showInterface();  // 로그아웃 UI 출력
    LogoutUI(Logout& logout);  // 생성자
    void callLogout();  // 로그아웃 확인 및 처리
    void showLogoutResult(const std::string& id);  // 로그아웃 결과 출력
};
