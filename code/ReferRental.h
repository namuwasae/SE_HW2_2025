#pragma once
#include <vector>
#include <string>
#include "ReportRental.h"
#include "LoginSession.h"

// 클래스 이름 : ReferRental
// 설명 : 자전거 대여 리스트 조회 클래스.
class ReferRental {
private:
    ReportRental& reportRental;
    LoginSession& loginSession;

public:
    ReferRental(ReportRental& reportRental, LoginSession& loginSession);
    std::vector<RentalInfo> referRental();
};