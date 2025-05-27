#pragma once
#include "ReportRental.h"

ReportRental::ReportRental(BicycleRepository& bicycleRepository, LoginSession& loginSession)
    : bicycleRepository(bicycleRepository), loginSession(loginSession) {}

// 함수이름 : reportBicycle
// 기능 : 자전거 대여 정보 저장. bicycleRepository와 loginSession에서 get함수들을 통해 정보를 가져와서 저장.
// 전달인자 : const std::string& bikeID
// 반환값 : bool
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