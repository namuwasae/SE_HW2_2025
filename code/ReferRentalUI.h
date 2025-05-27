#pragma once
#include <vector>
#include "ReferRental.h"

// 클래스 이름 : ReferRentalUI
// 설명 : 자전거 대여 리스트 조회 UI 관리 클래스. 자전거 대여 리스트 조회 요청을 처리하고 결과를 출력.
class ReferRentalUI {
private:
    ReferRental& referRental;

public:
    void startInterface();
    ReferRentalUI(ReferRental& referRental);
    void startReferRental();
    void showRentalList(const std::vector<RentalInfo>& rentalList);
};