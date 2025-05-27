#pragma once
#include "ReportRental.h"

ReportRental::ReportRental(BicycleRepository& bicycleRepository, LoginSession& loginSession)
    : bicycleRepository(bicycleRepository), loginSession(loginSession) {}

// �Լ��̸� : reportBicycle
// ��� : ������ �뿩 ���� ����. bicycleRepository�� loginSession���� get�Լ����� ���� ������ �����ͼ� ����.
// �������� : const std::string& bikeID
// ��ȯ�� : bool
bool ReportRental::reportBicycle(const std::string& userID, const std::string& bikeID, const std::string& productName) {
    RentalInfo rentalInfo = { userID, bikeID, productName };
    rentalRecords.push_back(rentalInfo);
    return true;
}

std::vector<RentalInfo> ReportRental::getRentalInfo(const std::string& userID) {
    std::vector<RentalInfo> result;
    for (const auto& info : rentalRecords) {
        if (info.userID == userID) {
            result.push_back(info);
        }
    }
    return result;
}