#include "Login.h"

Login::Login(MemberRepository& repo, LoginSession& session) : repo(repo), session(session) {}


// �Լ��̸� : authenticate
// ��� : �α��� ����
// �������� : const std::string& id, const std::string& pw
// ��ȯ�� : bool
bool Login::authenticate(const std::string& id, const std::string& pw) {
    const auto& members = repo.getMemberList();

    for (const auto& member : members) {
        if (member.getId() == id && member.matchCredentials(pw)) { // id, pw ��ġ�ϸ�
            session.setLoginState(id, true);                     // �α��� ���¸� true�� ����
            return true;
        }
    }
    return false;
}
