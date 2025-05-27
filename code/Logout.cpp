#include "Logout.h"

Logout::Logout(LoginSession& session) : session(session) {}

// �Լ��̸� : logout
// ��� : �α׾ƿ� ó��
// �������� : ����
// ��ȯ�� : std::string (�α׾ƿ��� ������� ID)
std::string Logout::logout() {
    std::string currentUserId = session.getCurrentLoggedInUser(); // ���� ���� �α��� �Ǿ��ִ� id�� ��ȯ����.
    if (!currentUserId.empty()) { // ��ȯ���� id�� ������� �ʴٸ�(�α��� �Ǿ��ִٸ�)
        session.setLogoutState(currentUserId); // �α׾ƿ� ���·� ����
    }
    return currentUserId; // �α׾ƿ��� ������� id ��ȯ
}
