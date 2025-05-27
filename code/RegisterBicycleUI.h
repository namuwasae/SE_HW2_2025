#pragma once
#include "RegisterBicycle.h"
#include "LoginSession.h"

// 클래스 이름 : RegisterBicycleUI
// 설명 : 자전거 등록 UI 관리 클래스. 자전거 등록 요청을 처리하고 결과를 출력. bicycleID와 productName을 입력받아 RegisterBicycle 객체의 registerBicycle 함수 호출하고 등록 결과를 출력.
class RegisterBicycleUI {
private:
    RegisterBicycle& reg;
    LoginSession& session;

public:
    void startInterface();
    RegisterBicycleUI(RegisterBicycle& reg, LoginSession& session);
    void submitBicycleRegistration();
    void showRegisterBicycle(const std::string& bikeID, const std::string& productName);
};
