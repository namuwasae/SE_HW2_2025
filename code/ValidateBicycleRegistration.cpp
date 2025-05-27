#include "ValidateBicycleRegistration.h"

ValidateBicycleRegistration::ValidateBicycleRegistration(BicycleRepository& repo) : repo(repo) {}

// 함수이름 : checkFormat
// 기능 : bikeID 형식 검사
// 전달인자 : const std::string& bikeID
// 반환값 : bool
// 특이사항 : 이번 과제에서는 bikeID 형식 검사는 항상 통과하도록 구현
bool ValidateBicycleRegistration::checkFormat(const std::string& bikeID) {
    return true;
}

// 함수이름 : isDuplicated
// 기능 : repo에서 bikeID 중복 검사
// 전달인자 : const std::string& bikeID
// 반환값 : bool
bool ValidateBicycleRegistration::isDuplicated(const std::string& bikeID) {
    return repo.isDuplicatedBikeID(bikeID);
}

// 함수이름 : validateRegistration
// 기능 : bikeID 형식 검사와 중복 검사를 수행
// 전달인자 : const std::string& bikeID
// 반환값 : bool
bool ValidateBicycleRegistration::validateRegistration(const std::string& bikeID) {
    if (!checkFormat(bikeID)) return false;
    if (isDuplicated(bikeID)) return false;
    return true;
}