#include "RegisterBicycle.h"

RegisterBicycle::RegisterBicycle(BicycleRepository& repo, LoginSession& session)
    : repo(repo), validator(repo), session(session) {}

// �Լ��̸� : registerBicycle
// ��� : �����Ÿ� ����ϴ� ����� admin���� Ȯ���ϰ�, valid ���� �˻� �� ������ ��� 
// �������� : const std::string& bikeID, const std::string& productName
// ��ȯ�� : bool
bool RegisterBicycle::registerBicycle(const std::string& bikeID, const std::string& productName) {
    // ���� �α��ε� ����ڰ� admin���� Ȯ��
    std::string currentUser = session.getCurrentLoggedInUser();
    if (currentUser != "admin") {
        return false;
    }

    // admin�� ��쿡�� ��ȿ�� �˻� �� ��� ����
    if (!validator.validateRegistration(bikeID)) return false;
    repo.createBicycle(bikeID, productName);
    return true;
}
