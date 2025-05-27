#pragma once
#include <vector>
#include <string>
#include "ReportRental.h"
#include "LoginSession.h"

// Ŭ���� �̸� : ReferRental
// ���� : ������ �뿩 ����Ʈ ��ȸ Ŭ����.
class ReferRental {
private:
    ReportRental& reportRental;
    LoginSession& loginSession;

public:
    ReferRental(ReportRental& reportRental, LoginSession& loginSession);
    std::vector<RentalInfo> referRental();
};