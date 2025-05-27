#pragma once
#include <string>
#include "BicycleRepository.h"
#include "ValidateBicycleRegistration.h"
#include "LoginSession.h"

// Ŭ���� �̸� : RegisterBicycle
// ���� : ������ ��� ����� ó���ϴ� Ŭ����.
class RegisterBicycle {
private:
    BicycleRepository& repo;
    ValidateBicycleRegistration validator{ repo }; // validator
    LoginSession& session;

public:
    RegisterBicycle(BicycleRepository& repo, LoginSession& session);
    bool registerBicycle(const std::string& bikeID, const std::string& productName);
};
