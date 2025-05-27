#include "Register.h"

Register::Register(MemberRepository& repo) : repo(repo), validator(repo) {}


// �Լ��̸� : RegisterMember
// ��� : ȸ������ ���
// �������� : const std::string& id, const std::string& pw, const std::string& phoneNumber
// ��ȯ�� : bool
bool Register::RegisterMember(const std::string& id, const std::string& pw, const std::string& phoneNumber) {
	if (!validator.validateRegistration(id)) return false;
	repo.createMember(id, pw, phoneNumber);
	return true;
}