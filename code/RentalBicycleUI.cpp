#include "RentalBicycleUI.h"
#include <iostream>
#include <fstream>


extern std::ofstream out_fp;
extern std::ifstream in_fp;

RentalBicycleUI::RentalBicycleUI(RentalBicycle& rentalBicycle)
    : rentalBicycle(rentalBicycle) {}


// 함수이름 : submitBikeID
// 기능 : 자전거 ID를 입력받아 자전거 대여 처리
// 전달인자 : 없음
// 반환값 : 없음
void RentalBicycleUI::submitBikeID() {
    std::string bikeID;
    in_fp >> bikeID;

    if (rentalBicycle.rentalBicycle(bikeID)) {
        showRental(bikeID, rentalBicycle.getBicycleInfo(bikeID)->getProductName());
    }
}


// 함수이름 : showRental
// 기능 : 자전거 대여 결과 출력
// 전달인자 : const std::string& bikeID, const std::string& productName
// 반환값 : 없음
void RentalBicycleUI::showRental(const std::string& bikeID, const std::string& productName) {
    out_fp << "4.1. 자전거 대여\n";
    out_fp << "> " << bikeID << " " << productName << "\n";
    out_fp.flush();
}


// 함수이름 : startInterface
// 기능 : 자전거 대여 UI 출력(이번 과제에서는 출력 x)
// 전달인자 : 없음
// 반환값 : 없음
void RentalBicycleUI::startInterface() {}