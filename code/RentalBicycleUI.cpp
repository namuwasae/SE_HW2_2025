#include "RentalBicycleUI.h"
#include <iostream>
#include <fstream>


extern std::ofstream out_fp;
extern std::ifstream in_fp;

RentalBicycleUI::RentalBicycleUI(RentalBicycle& rentalBicycle)
    : rentalBicycle(rentalBicycle) {}


// �Լ��̸� : submitBikeID
// ��� : ������ ID�� �Է¹޾� ������ �뿩 ó��
// �������� : ����
// ��ȯ�� : ����
void RentalBicycleUI::submitBikeID() {
    std::string bikeID;
    in_fp >> bikeID;

    if (rentalBicycle.rentalBicycle(bikeID)) {
        showRental(bikeID, rentalBicycle.getBicycleInfo(bikeID)->getProductName());
    }
}


// �Լ��̸� : showRental
// ��� : ������ �뿩 ��� ���
// �������� : const std::string& bikeID, const std::string& productName
// ��ȯ�� : ����
void RentalBicycleUI::showRental(const std::string& bikeID, const std::string& productName) {
    out_fp << "4.1. ������ �뿩\n";
    out_fp << "> " << bikeID << " " << productName << "\n";
    out_fp.flush();
}


// �Լ��̸� : startInterface
// ��� : ������ �뿩 UI ���(�̹� ���������� ��� x)
// �������� : ����
// ��ȯ�� : ����
void RentalBicycleUI::startInterface() {}