#pragma once
#include <string>
#include <vector>
#include "BicycleRepository.h"
#include "LoginSession.h"

// ����ü �̸� : RentalInfo
// ���� : ������ �뿩 ������ �����ϴ� ����ü. ����� ID, ������ ID, ������ ��ǰ���� ����.
struct RentalInfo {
    std::string userID;
    std::string bikeID;
    std::string productName;
};

// Ŭ���� �̸� : ReportRental
// ���� : ������ �뿩 ���� ���� Ŭ����. ������ �뿩 ������ �����ϰ� ��ȸ.
class ReportRental {
private:
    BicycleRepository& bicycleRepository;
    LoginSession& loginSession;
    std::vector<RentalInfo> rentalRecords;

public:
    ReportRental(BicycleRepository& bicycleRepository, LoginSession& loginSession);
    bool reportBicycle(const std::string& userID, const std::string& bikeID, const std::string& productName);
    std::vector<RentalInfo> getRentalInfo(const std::string& userID);
};


