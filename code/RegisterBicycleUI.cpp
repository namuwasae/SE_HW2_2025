#include "RegisterBicycleUI.h"
#include <iostream>
#include <fstream>

extern std::ifstream in_fp;
extern std::ofstream out_fp;

RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle& reg, LoginSession& session) : reg(reg), session(session) {}

// 함수이름 : submitBicycleRegistration
// 기능 : bikeID, productName을 받아 RegisterBicycle 객체의 registerBicycle 함수 호출하고 등록 결과를 출력.
// 전달인자 : 없음
// 반환값 : 없음
void RegisterBicycleUI::submitBicycleRegistration() {
    std::string bikeID, productName;
    in_fp >> bikeID >> productName;

    bool success = reg.registerBicycle(bikeID, productName);
    if (success) {
        showRegisterBicycle(bikeID, productName);
    }
    else {
        out_fp << "3.1. 자전거 등록\n";
        out_fp << "> 자전거 등록 실패\n";
        out_fp.flush();
    }
}

// 함수이름 : startInterface
// 기능 : 자전거 등록 UI 출력(이번 과제에서는 출력 x)
// 전달인자 : 없음
// 반환값 : 없음
void RegisterBicycleUI::startInterface() {}

// 함수이름 : showRegisterBicycle
// 기능 : 자전거 등록 결과 출력
// 전달인자 : const std::string& bikeID, const std::string& productName
// 반환값 : 없음
void RegisterBicycleUI::showRegisterBicycle(const std::string& bikeID, const std::string& productName) {
    out_fp << "3.1. 자전거 등록\n";
    out_fp << "> " << bikeID << " " << productName << "\n";
    out_fp.flush();
}
