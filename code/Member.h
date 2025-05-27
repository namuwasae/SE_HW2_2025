#pragma once
#include <string>

class Login;  // ���� ����

// Ŭ���� �̸� : Member
// ���� : ȸ�� ������ �����ϴ� Ŭ����. getter �޼������ ���� ȸ�� ������ ������ �� ����.
class Member {
private:
    std::string id;
    std::string pw;
    std::string phoneNumber;

    // �Լ��̸� : matchCredentials
    // ��� : �Է¹��� pw�� ����� pw�� ��ġ�ϴ��� Ȯ��
    // �������� : const std::string& inputPw
    // ��ȯ�� : bool
    bool matchCredentials(const std::string& inputPw) const {
        return pw == inputPw;
    }

    friend class Login;  // Login Ŭ������ matchCredentials�� ���� ����

public:
    Member(const std::string& id, const std::string& pw, const std::string& phoneNumber)
        : id(id), pw(pw), phoneNumber(phoneNumber) {}

    // getter �޼����
    const std::string& getId() const { return id; }
    const std::string& getPhoneNumber() const { return phoneNumber; }
};