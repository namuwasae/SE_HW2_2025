#pragma once

#include "Register.h"

// Ŭ���� �̸� : RegisterUI
// ���� : ȸ�� ���� UI ���� Ŭ����. ȸ�� ���� ��û�� ó���ϰ� ����� ���.
class RegisterUI {
private:
	Register& reg; // RegisterMember �Լ� ȣ�⿡ ����� Register ��ü�� ������

public:

	void startInterface();
	RegisterUI(Register& reg);
	void submitMemberRegistration();
	void showRegister(const std::string& id, const std::string& pw, const std::string& phoneNumber);
};