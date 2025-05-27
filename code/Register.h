#pragma once
#include <string>
#include "MemberRepository.h"
#include "ValidateMemberRegistration.h"

// Ŭ���� �̸� : Register
// ���� : ȸ�� ���� ����� ó���ϴ� Ŭ����.
class Register {
private:
	MemberRepository& repo; // id �ߺ� �˻�� ȸ�� ���� ��ɿ� ����� MemberRepository ��ü ����
	ValidateMemberRegistration validator; // id ���� �˻�� �ߺ� �˻翡 ����� ValidateMemberRegistration ��ü ����


public:
	Register(MemberRepository& repo); // ������
	bool RegisterMember(const std::string& id, const std::string& pw, const std::string& phoneNumber); // ȸ������ ���
};