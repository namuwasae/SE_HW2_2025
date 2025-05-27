#pragma once
#include <string>
#include "BicycleRepository.h"
#include "ValidateBicycleRegistration.h"
#include "LoginSession.h"

// 클래스 이름 : RegisterBicycle
// 설명 : 자전거 등록 기능을 처리하는 클래스.
class RegisterBicycle {
private:
    BicycleRepository& repo;
    ValidateBicycleRegistration validator{ repo }; // validator
    LoginSession& session;

public:
    RegisterBicycle(BicycleRepository& repo, LoginSession& session);
    bool registerBicycle(const std::string& bikeID, const std::string& productName);
};
