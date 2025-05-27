#pragma once
#include <vector>
#include <string>
#include "Bicycle.h"

// Ŭ���� �̸� : BicycleRepository
// ���� : ������ ������ �����ϴ� Ŭ����. ������ ������ ��ȸ, ������ ������ ����, ������ ������ �ߺ� �˻��ϴ� ���
class BicycleRepository {
private:
    std::vector<Bicycle> bicycles;

public:
    BicycleRepository() = default;
    bool isDuplicatedBikeID(const std::string& bikeID); // bikeID �ߺ� �˻�
    void createBicycle(const std::string& bikeID, const std::string& productName); // ������ ���� ����
    const Bicycle* getBicycleInfo(const std::string& bikeID);  // ������ ������ Bicycle ��ü �����ͷ� ��ȯ
};
