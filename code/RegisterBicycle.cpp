#include "RegisterBicycle.h"

RegisterBicycle::RegisterBicycle(BicycleRepository& repo, LoginSession& session)
    : repo(repo), validator(repo), session(session) {}

// 함수이름 : registerBicycle
// 기능 : 자전거를 등록하는 사람이 admin인지 확인하고, valid 한지 검사 후 자전거 등록 
// 전달인자 : const std::string& bikeID, const std::string& productName
// 반환값 : bool
bool RegisterBicycle::registerBicycle(const std::string& bikeID, const std::string& productName) {
    // 현재 로그인된 사용자가 admin인지 확인
    std::string currentUser = session.getCurrentLoggedInUser();
    if (currentUser != "admin") {
        return false;
    }

    // admin인 경우에만 유효성 검사 및 등록 진행
    if (!validator.validateRegistration(bikeID)) return false;
    repo.createBicycle(bikeID, productName);
    return true;
}
