#pragma once
#include <string>
#include "BicycleRepository.h"

// 클래스 이름 : ValidateBicycleRegistration
// 설명 : 자전거 등록 검사 기능을 처리하는 클래스.
class ValidateBicycleRegistration {
private:
    BicycleRepository& repo;
public:
    ValidateBicycleRegistration(BicycleRepository& repo);
    bool checkFormat(const std::string& bikeID);
    bool isDuplicated(const std::string& bikeID);
    bool validateRegistration(const std::string& bikeID);
};