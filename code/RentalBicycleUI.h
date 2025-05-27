#pragma once
#include <string>
#include "RentalBicycle.h"

// Ŭ���� �̸� : RentalBicycleUI
// ���� : ������ �뿩 UI ���� Ŭ����. ������ �뿩 ��û�� ó���ϰ� ����� ���.
class RentalBicycleUI {
private:
    RentalBicycle& rentalBicycle;

public:
    void startInterface();
    RentalBicycleUI(RentalBicycle& rentalBicycle);
    void submitBikeID();
    void showRental(const std::string& bikeID, const std::string& productName);
};