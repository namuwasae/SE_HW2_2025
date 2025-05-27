#pragma once
#include <string>
#include <unordered_map>

// Ŭ���� �̸� : LoginSession
// ���� : �α��� ���� ���� Ŭ����. �ٸ� �Լ���κ��� �α��� ���³� �α��ε� ������� id�� �����ϱ� ���� ���.
class LoginSession {
private:
    std::unordered_map<std::string, bool> loginStates;  // id�� Ű��, �α��� ���¸� ������ ����

public:

    // �Լ��̸� : setLoginState
    // ��� : �α��� ���� ����
    // �������� : const std::string& id, bool state
    // ��ȯ�� : ����
    void setLoginState(const std::string& id, bool state) {
        loginStates[id] = state;
    }

    // �Լ��̸� : setLogoutState
    // ��� : �α׾ƿ� ���� ����
    // �������� : const std::string& id
    // ��ȯ�� : ����
    void setLogoutState(const std::string& id) {
        loginStates[id] = false;
    }

    // �Լ��̸� : isLoggedIn
    // ��� : �α��� ���� Ȯ��
    // �������� : const std::string& id
    // ��ȯ�� : bool
    bool isLoggedIn(const std::string& id) const {
        auto it = loginStates.find(id);                 // ã���� �ϴ� id�� Ű�� �Ͽ� �α��� ���¸� ã��.
        return it != loginStates.end() && it->second;   // ã�� ����� �ְ�, �α��� ���°� true���� Ȯ��.
    }

    // �Լ��̸� : getCurrentLoggedInUser
    // ��� : ���� �α��ε� ������� ID ��ȯ
    // �������� : ����
    // ��ȯ�� : std::string (���� �α��ε� ������� ID, ������ �� ���ڿ�)
    std::string getCurrentLoggedInUser() const {
        for (const auto& [id, isLoggedIn] : loginStates) { // �α��� ���°� true�� id�� ã��. (�� ������ �ϳ��� ȸ���� �α��εǾ� �ִٰ� ����)
            if (isLoggedIn) {
                return id;
            }
        }
        return "";  // �α��ε� ����ڰ� ���� ���
    }

};