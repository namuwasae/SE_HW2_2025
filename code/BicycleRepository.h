#pragma once
#include <vector>
#include <string>
#include "Bicycle.h"

// 클래스 이름 : BicycleRepository
// 설명 : 자전거 정보를 저장하는 클래스. 자전거 정보를 조회, 자전거 정보를 생성, 자전거 정보를 중복 검사하는 기능
class BicycleRepository {
private:
    std::vector<Bicycle> bicycles;

public:
    BicycleRepository() = default;
    bool isDuplicatedBikeID(const std::string& bikeID); // bikeID 중복 검사
    void createBicycle(const std::string& bikeID, const std::string& productName); // 자전거 정보 생성
    const Bicycle* getBicycleInfo(const std::string& bikeID);  // 자전거 정보를 Bicycle 객체 포인터로 반환
};
