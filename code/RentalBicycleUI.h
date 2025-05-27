#pragma once
#include <string>
#include "RentalBicycle.h"

// 클래스 이름 : RentalBicycleUI
// 설명 : 자전거 대여 UI 관리 클래스. 자전거 대여 요청을 처리하고 결과를 출력.
class RentalBicycleUI {
private:
    RentalBicycle& rentalBicycle;

public:
    void startInterface();
    RentalBicycleUI(RentalBicycle& rentalBicycle);
    void submitBikeID();
    void showRental(const std::string& bikeID, const std::string& productName);
};