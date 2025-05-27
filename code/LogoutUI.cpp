#include "LogoutUI.h"
#include <iostream>
#include <fstream>

extern std::ifstream in_fp;
extern std::ofstream out_fp;

LogoutUI::LogoutUI(Logout& logout) : logout(logout) {}

// 함수이름 : showInterface
// 기능 : 로그아웃 UI 출력(이번 과제에서는 출력 x)
// 전달인자 : 없음
// 반환값 : 없음
void LogoutUI::showInterface() {}

// 함수이름 : callLogout
// 기능 : logout class의 logout() 함수 호출. 로그아웃 처리 후 로그아웃 결과 출력.
// 전달인자 : 없음
// 반환값 : 없음
void LogoutUI::callLogout() {
    std::string id = logout.logout();  // Logout 객체의 logout 함수 호출
    showLogoutResult(id);  // 로그아웃 결과 출력
}

// 함수이름 : showLogoutResult
// 기능 : 로그아웃 결과 출력
// 전달인자 : const std::string& id
// 반환값 : 없음
void LogoutUI::showLogoutResult(const std::string& id) {
    out_fp << "2.2. 로그아웃\n";
    if (!id.empty()) {
        out_fp << "> " << id << "\n";
    }
    else {
        out_fp << "> 로그아웃 실패: 로그인된 사용자가 없습니다\n";
    }
    out_fp.flush();
}