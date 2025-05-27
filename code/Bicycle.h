#pragma once
#include <string>

// 클래스 이름 : Bicycle
// 설명 : 자전거 정보를 저장하는 클래스. getter 메서드들을 통해 자전거 정보를 참조할 수 있음.
class Bicycle {
private:
    std::string bikeID;
    std::string productName;

public:
    Bicycle(const std::string& bikeID, const std::string& productName)
        : bikeID(bikeID), productName(productName) {}

    // getter methods
    const std::string& getBikeID() const { return bikeID; }
    const std::string& getProductName() const { return productName; }
};