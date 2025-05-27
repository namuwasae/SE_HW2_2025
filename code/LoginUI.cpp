#include "LoginUI.h"
#include <iostream>
#include <fstream>

extern std::ifstream in_fp;
extern std::ofstream out_fp;

// 함수이름 : startInterface()
// 기능 : 회원가입 화면 출력(output.txt의 형식에 맞추기 위해 startInterface()를 따로 구현하지 않았음).
// 전달인자 : 없음
// 반환값 : 없음
void LoginUI::startInterface() {}

LoginUI::LoginUI(Login& login) : login(login) {}

// 함수이름 : submitLogin()
// 기능 : id, pw를 받아 Login 객체의 authenticate 함수 호출하고 로그인 결과를 출력.
// 전달인자 : 없음.
// 반환값 : 없음.
void LoginUI::submitLogin() {
    std::string id, pw;
    in_fp >> id >> pw;
    bool success = login.authenticate(id, pw); // authenticate 함수 호출
    showLoginResult(success, id, pw);         // showLoginResult 함수 호출
}

// 함수이름 : showLoginResult()
// 기능 : 로그인 결과 출력
// 전달인자 : bool success, const std::string& id, const std::string& pw
// 반환값 : 없음
void LoginUI::showLoginResult(bool success, const std::string& id, const std::string& pw) {
    out_fp << "2.1. 로그인\n";
    if (success) {
        out_fp << "> " << id << " " << pw << "\n";
    }
    else {
        out_fp << "> 로그인 실패\n";
    }
    out_fp.flush();
}
