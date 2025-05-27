#include "BicycleRepository.h"

// �Լ��̸� : isDuplicatedBikeID
// ��� : �ߺ� bikeID�� �ִ��� �˻�
// �������� : const std::string& bikeID
// ��ȯ�� : bool
bool BicycleRepository::isDuplicatedBikeID(const std::string& bikeID) {
    for (const auto& bicycle : bicycles) {
        if (bicycle.getBikeID() == bikeID) return true;
    }
    return false;
}

// �Լ��̸� : createBicycle
// ��� : ������ ���� ����. ������ ��ϵ� ������ bicycles ���Ϳ� ������ ������ ����.
// �������� : const std::string& bikeID, const std::string& productName
// ��ȯ�� : void
void BicycleRepository::createBicycle(const std::string& bikeID, const std::string& productName) {
    bicycles.push_back(Bicycle(bikeID, productName));
}

// �Լ��̸� : getBicycleInfo
// ��� : Ư�� ������ ���� ��ȸ
// �������� : const std::string& bikeID
// ��ȯ�� : const Bicycle*
const Bicycle* BicycleRepository::getBicycleInfo(const std::string& bikeID) {
    for (const auto& bicycle : bicycles) {
        if (bicycle.getBikeID() == bikeID) {
            return &bicycle;
        }
    }
    return nullptr;
}
