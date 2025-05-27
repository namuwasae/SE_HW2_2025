#pragma once
#include <string>

// Ŭ���� �̸� : Bicycle
// ���� : ������ ������ �����ϴ� Ŭ����. getter �޼������ ���� ������ ������ ������ �� ����.
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