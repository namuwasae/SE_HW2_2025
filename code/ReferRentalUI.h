#pragma once
#include <vector>
#include "ReferRental.h"

// Ŭ���� �̸� : ReferRentalUI
// ���� : ������ �뿩 ����Ʈ ��ȸ UI ���� Ŭ����. ������ �뿩 ����Ʈ ��ȸ ��û�� ó���ϰ� ����� ���.
class ReferRentalUI {
private:
    ReferRental& referRental;

public:
    void startInterface();
    ReferRentalUI(ReferRental& referRental);
    void startReferRental();
    void showRentalList(const std::vector<RentalInfo>& rentalList);
};