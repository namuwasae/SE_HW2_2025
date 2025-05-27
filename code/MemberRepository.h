#pragma once
#include <vector>
#include <string>
#include "Member.h"

// Ŭ�����̸� : MemberRepository
// ���� : ȸ�� ������ �����ϴ� Ŭ����. ȸ�� ������ ��ȸ, ȸ�� ������ ����, ȸ�� ������ �ߺ� �˻��ϴ� ���
class MemberRepository {
private:
	std::vector<Member> members;

public:
	bool isDuplicated(const std::string& id); // id �ߺ� �˻�
	void createMember(const std::string& id, const std::string& pw, const std::string& phoneNumber); // ȸ�� ���� ����
	const std::vector<Member>& getMemberList() const { return members; } // ȸ�� ���� ��ȸ
};