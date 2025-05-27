#pragma once
#include "RentalBicycle.h"

RentalBicycle::RentalBicycle(BicycleRepository& bicycleRepository, ReportRental& reportRental, LoginSession& loginSession)
    : bicycleRepository(bicycleRepository), reportRental(reportRental), loginSession(loginSession) {}

bool RentalBicycle::rentalBicycle(const std::string& bikeID) {
    // 1. ������ ���� ��ȸ
    const Bicycle* bicycle = bicycleRepository.getBicycleInfo(bikeID);
    if (!bicycle) {
        return false; // �����Ű� ������ ����
    }

    // 2. ���� �α����� ����� ID ��ȸ
    std::string userID = loginSession.getCurrentLoggedInUser();
    if (userID.empty()) {
        return false; // �α��ε� ����ڰ� ������ ����
    }

    // 3. �뿩 ��� ����
    return reportRental.reportBicycle(userID, bicycle->getBikeID(), bicycle->getProductName());
}