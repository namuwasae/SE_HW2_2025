#include "MemberRepository.h"

// �Լ��̸� : isDuplicated
// ��� : �ߺ� ���̵� �ִ� �� �˻�
// �������� : const std::string& id
// ��ȯ�� : bool
bool MemberRepository::isDuplicated(const std::string& id) {
    for (const auto& member : members) {
        if (member.getId() == id) return true;
    }
    return false;
}

// �Լ��̸� : createMember
// ��� : ȸ�� ���� ����. ȸ������ �� ������ members ���Ϳ� ȸ�� ������ ����.
// �������� : const std::string& id, const std::string& pw, const std::string& phoneNumber
// ��ȯ�� : void
void MemberRepository::createMember(const std::string& id, const std::string& pw, const std::string& phoneNumber) {
    members.push_back(Member(id, pw, phoneNumber));
}

