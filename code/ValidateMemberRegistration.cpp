#include "ValidateMemberRegistration.h"

ValidateMemberRegistration::ValidateMemberRegistration(MemberRepository& repo) : repo(repo) {}

// �Լ��̸� : checkFormat()
// ��� : id ���� �˻�
// �������� : const std::string& id
// ��ȯ�� : bool
// Ư�̻��� : �̹� ���������� id ���� �˻�� �׻� ����ϵ��� �����ϰڽ��ϴ�.
bool ValidateMemberRegistration::checkFormat(const std::string& id) {
	return true;
}

// �Լ��̸� : isDuplicated()
// ��� : repo���� id �ߺ� �˻�
// �������� : const std::string& id
// ��ȯ�� : bool
bool ValidateMemberRegistration::isDuplicated(const std::string& id) {
	return repo.isDuplicated(id);
}

// �Լ��̸� : validateRegistration()
// ��� : id ���� �˻�� �ߺ� �˻縦 ����
// �������� : const std::string& id
// ��ȯ�� : bool
bool ValidateMemberRegistration::validateRegistration(const std::string& id) {
	if (!checkFormat(id)) return false;
	if (isDuplicated(id)) return false;
	return true;
}
