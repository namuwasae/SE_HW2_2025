#include "RegisterUI.h"
#include <iostream>
#include <fstream>


extern std::ifstream in_fp;
extern std::ofstream out_fp;

RegisterUI::RegisterUI(Register& reg) : reg(reg) {}

// �Լ��̸� : startInterface()
// ��� : ȸ������ ȭ�� ���(output.txt�� ���Ŀ� ���߱� ���� startInterface()�� ���� �������� �ʾ���).
// �������� : ����
// ��ȯ�� : ����
void RegisterUI::startInterface() {}

// �Լ��̸� : submitMemberRegistration()
// ��� : id, pw, phoneNumber�� �޾� Register ��ü�� RegisterMember �Լ� ȣ���ϰ� ȸ������ ����� ���.
// �������� : const std::string& id, const std::string& pw, const std::string& phoneNumber
// ��ȯ�� : ����
void RegisterUI::submitMemberRegistration() {
	std::string id, pw, phoneNumber;
	in_fp >> id >> pw >> phoneNumber;
	reg.RegisterMember(id, pw, phoneNumber); // Register�� RegisterMember ȣ��
	showRegister(id, pw, phoneNumber);
}

// �Լ��̸� : showRegister()
// ��� : id, pw, phoneNumber�� ���
// �������� : const std::string& id, const std::string& pw, const std::string& phoneNumber
// ��ȯ�� : ����
void RegisterUI::showRegister(const std::string& id, const std::string& pw, const std::string& phoneNumber) {
	out_fp << "1.1. ȸ������\n";
	out_fp << "> " << id << " " << pw << " " << phoneNumber << "\n";
	out_fp.flush();
}

