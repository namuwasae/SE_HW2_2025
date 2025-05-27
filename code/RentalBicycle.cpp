#pragma once
#include "RentalBicycle.h"

RentalBicycle::RentalBicycle(BicycleRepository& bicycleRepository, ReportRental& reportRental, LoginSession& loginSession)
    : bicycleRepository(bicycleRepository), reportRental(reportRental), loginSession(loginSession) {}

bool RentalBicycle::rentalBicycle(const std::string& bikeID) {
    // 1. 자전거 정보 조회
    const Bicycle* bicycle = bicycleRepository.getBicycleInfo(bikeID);
    if (!bicycle) {
        return false; // 자전거가 없으면 실패
    }

    // 2. 현재 로그인한 사용자 ID 조회
    std::string userID = loginSession.getCurrentLoggedInUser();
    if (userID.empty()) {
        return false; // 로그인된 사용자가 없으면 실패
    }

    // 3. 대여 기록 저장
    return reportRental.reportBicycle(userID, bicycle->getBikeID(), bicycle->getProductName());
}