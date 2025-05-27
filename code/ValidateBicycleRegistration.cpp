#include "ValidateBicycleRegistration.h"

ValidateBicycleRegistration::ValidateBicycleRegistration(BicycleRepository& repo) : repo(repo) {}

// �Լ��̸� : checkFormat
// ��� : bikeID ���� �˻�
// �������� : const std::string& bikeID
// ��ȯ�� : bool
// Ư�̻��� : �̹� ���������� bikeID ���� �˻�� �׻� ����ϵ��� ����
bool ValidateBicycleRegistration::checkFormat(const std::string& bikeID) {
    return true;
}

// �Լ��̸� : isDuplicated
// ��� : repo���� bikeID �ߺ� �˻�
// �������� : const std::string& bikeID
// ��ȯ�� : bool
bool ValidateBicycleRegistration::isDuplicated(const std::string& bikeID) {
    return repo.isDuplicatedBikeID(bikeID);
}

// �Լ��̸� : validateRegistration
// ��� : bikeID ���� �˻�� �ߺ� �˻縦 ����
// �������� : const std::string& bikeID
// ��ȯ�� : bool
bool ValidateBicycleRegistration::validateRegistration(const std::string& bikeID) {
    if (!checkFormat(bikeID)) return false;
    if (isDuplicated(bikeID)) return false;
    return true;
}