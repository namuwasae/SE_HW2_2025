#pragma once
#include <string>
#include "BicycleRepository.h"
#include "ReportRental.h"
#include "LoginSession.h"

// Ŭ���� �̸� : RentalBicycle
// ���� : ������ �뿩 ���� Ŭ����. ������ �뿩 ��û�� ó���ϰ� ����� ��ȯ.
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

