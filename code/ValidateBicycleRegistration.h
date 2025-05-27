#pragma once
#include <string>
#include "BicycleRepository.h"

// Ŭ���� �̸� : ValidateBicycleRegistration
// ���� : ������ ��� �˻� ����� ó���ϴ� Ŭ����.
class ValidateBicycleRegistration {
private:
    BicycleRepository& repo;
public:
    ValidateBicycleRegistration(BicycleRepository& repo);
    bool checkFormat(const std::string& bikeID);
    bool isDuplicated(const std::string& bikeID);
    bool validateRegistration(const std::string& bikeID);
};