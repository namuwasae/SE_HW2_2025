#include "ReferRentalUI.h"
#include <iostream>
#include <fstream>

extern std::ofstream out_fp;

ReferRentalUI::ReferRentalUI(ReferRental& referRental)
    : referRental(referRental) {}

void ReferRentalUI::startInterface() {}

// �Լ��̸� : startReferRental
// ��� : ������ �뿩 ����Ʈ ���. referRental ��ü�� referRental �Լ��� ���� ������ �뿩 ����Ʈ�� ��ȸ�ϰ�, showRentalList �Լ��� ���� ���.
// �������� : ����
// ��ȯ�� : ����
void ReferRentalUI::startReferRental() {
    std::vector<RentalInfo> rentalList = referRental.referRental(); // ������ �뿩 ����Ʈ ��ȸ
    showRentalList(rentalList);
}

// �Լ��̸� : showRentalList
// ��� : ������ �뿩 ����Ʈ ���. rentalList�� ���.
// �������� : const std::vector<RentalInfo>& rentalList
// ��ȯ�� : ����
void ReferRentalUI::showRentalList(const std::vector<RentalInfo>& rentalList) {
    out_fp << "5.1. ������ �뿩 ����Ʈ\n";
    for (const auto& info : rentalList) { // �ش��ϴ� ��� �뿩 ������ ���
        out_fp << "> " << info.bikeID << " " << info.productName << "\n";
    }
    out_fp.flush();
}