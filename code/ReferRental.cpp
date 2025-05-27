#include "ReferRental.h"

ReferRental::ReferRental(ReportRental& reportRental, LoginSession& loginSession)
    : reportRental(reportRental), loginSession(loginSession) {}

// 함수이름 : referRental
// 기능 : 자전거 대여 리스트 조회. loginSession 객체의 getCurrentLoggedInUser 함수를 통해 현재 로그인한 사용자의 ID를 조회하고, 
//       reportRental 객체의 getRentalInfo 함수를 통해 자전거 대여 리스트를 조회.
// 전달인자 : 없음
// 반환값 : std::vector<RentalInfo>
std::vector<RentalInfo> ReferRental::referRental() {
    std::string userID = loginSession.getCurrentLoggedInUser();
    return reportRental.getRentalInfo(userID);
}