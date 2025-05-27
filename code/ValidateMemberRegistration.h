#pragma once
#include <string>
#include "MemberRepository.h"

// Ŭ���� �̸� : ValidateMemberRegistration
// ���� : ȸ�� ���� �˻� ����� ó���ϴ� Ŭ����.
class ValidateMemberRegistration {
private:
	MemberRepository& repo;
public:
	ValidateMemberRegistration(MemberRepository& repo);
	bool checkFormat(const std::string& id);
	bool isDuplicated(const std::string& id);
	bool validateRegistration(const std::string& id);
};
