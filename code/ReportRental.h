#pragma once
#include <string>
#include <vector>
#include "BicycleRepository.h"
#include "LoginSession.h"

// 구조체 이름 : RentalInfo
// 설명 : 자전거 대여 정보를 저장하는 구조체. 사용자 ID, 자전거 ID, 자전거 제품명을 저장.
struct RentalInfo {
    std::string userID;
    std::string bikeID;
    std::string productName;
};

// 클래스 이름 : ReportRental
// 설명 : 자전거 대여 정보 저장 클래스. 자전거 대여 정보를 저장하고 조회.
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


