#include "ReferRentalUI.h"
#include <iostream>
#include <fstream>

extern std::ofstream out_fp;

ReferRentalUI::ReferRentalUI(ReferRental& referRental)
    : referRental(referRental) {}

void ReferRentalUI::startInterface() {}

// 함수이름 : startReferRental
// 기능 : 자전거 대여 리스트 출력. referRental 객체의 referRental 함수를 통해 자전거 대여 리스트를 조회하고, showRentalList 함수를 통해 출력.
// 전달인자 : 없음
// 반환값 : 없음
void ReferRentalUI::startReferRental() {
    std::vector<RentalInfo> rentalList = referRental.referRental(); // 자전거 대여 리스트 조회
    showRentalList(rentalList);
}

// 함수이름 : showRentalList
// 기능 : 자전거 대여 리스트 출력. rentalList를 출력.
// 전달인자 : const std::vector<RentalInfo>& rentalList
// 반환값 : 없음
void ReferRentalUI::showRentalList(const std::vector<RentalInfo>& rentalList) {
    out_fp << "5.1. 자전거 대여 리스트\n";
    for (const auto& info : rentalList) { // 해당하는 모든 대여 정보를 출력
        out_fp << "> " << info.bikeID << " " << info.productName << "\n";
    }
    out_fp.flush();
}