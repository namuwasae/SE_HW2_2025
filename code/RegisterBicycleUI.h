#pragma once
#include "RegisterBicycle.h"
#include "LoginSession.h"

// Ŭ���� �̸� : RegisterBicycleUI
// ���� : ������ ��� UI ���� Ŭ����. ������ ��� ��û�� ó���ϰ� ����� ���. bicycleID�� productName�� �Է¹޾� RegisterBicycle ��ü�� registerBicycle �Լ� ȣ���ϰ� ��� ����� ���.
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
