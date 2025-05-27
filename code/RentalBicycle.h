#pragma once
#include <string>
#include "BicycleRepository.h"
#include "ReportRental.h"
#include "LoginSession.h"

// 클래스 이름 : RentalBicycle
// 설명 : 자전거 대여 관리 클래스. 자전거 대여 요청을 처리하고 결과를 반환.
class RentalBicycle {
private:
    BicycleRepository& bicycleRepository;
    ReportRental& reportRental;
    LoginSession& loginSession;

public:
    RentalBicycle(BicycleRepository& bicycleRepository, ReportRental& reportRental, LoginSession& loginSession);
    bool rentalBicycle(const std::string& bikeID);
    const Bicycle* getBicycleInfo(const std::string& bikeID) { return bicycleRepository.getBicycleInfo(bikeID); }
};

