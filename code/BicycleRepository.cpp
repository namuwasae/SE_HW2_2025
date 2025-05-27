#include "BicycleRepository.h"

// 함수이름 : isDuplicatedBikeID
// 기능 : 중복 bikeID가 있는지 검사
// 전달인자 : const std::string& bikeID
// 반환값 : bool
bool BicycleRepository::isDuplicatedBikeID(const std::string& bikeID) {
    for (const auto& bicycle : bicycles) {
        if (bicycle.getBikeID() == bikeID) return true;
    }
    return false;
}

// 함수이름 : createBicycle
// 기능 : 자전거 정보 생성. 자전거 등록될 때마다 bicycles 벡터에 자전거 정보를 저장.
// 전달인자 : const std::string& bikeID, const std::string& productName
// 반환값 : void
void BicycleRepository::createBicycle(const std::string& bikeID, const std::string& productName) {
    bicycles.push_back(Bicycle(bikeID, productName));
}

// 함수이름 : getBicycleInfo
// 기능 : 특정 자전거 정보 조회
// 전달인자 : const std::string& bikeID
// 반환값 : const Bicycle*
const Bicycle* BicycleRepository::getBicycleInfo(const std::string& bikeID) {
    for (const auto& bicycle : bicycles) {
        if (bicycle.getBikeID() == bikeID) {
            return &bicycle;
        }
    }
    return nullptr;
}
