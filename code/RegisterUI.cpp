#include "RegisterUI.h"
#include <iostream>
#include <fstream>


extern std::ifstream in_fp;
extern std::ofstream out_fp;

RegisterUI::RegisterUI(Register& reg) : reg(reg) {}

// 함수이름 : startInterface()
// 기능 : 회원가입 화면 출력(output.txt의 형식에 맞추기 위해 startInterface()를 따로 구현하지 않았음).
// 전달인자 : 없음
// 반환값 : 없음
void RegisterUI::startInterface() {}

// 함수이름 : submitMemberRegistration()
// 기능 : id, pw, phoneNumber를 받아 Register 객체의 RegisterMember 함수 호출하고 회원가입 결과를 출력.
// 전달인자 : const std::string& id, const std::string& pw, const std::string& phoneNumber
// 반환값 : 없음
void RegisterUI::submitMemberRegistration() {
	std::string id, pw, phoneNumber;
	in_fp >> id >> pw >> phoneNumber;
	reg.RegisterMember(id, pw, phoneNumber); // Register의 RegisterMember 호출
	showRegister(id, pw, phoneNumber);
}

// 함수이름 : showRegister()
// 기능 : id, pw, phoneNumber를 출력
// 전달인자 : const std::string& id, const std::string& pw, const std::string& phoneNumber
// 반환값 : 없음
void RegisterUI::showRegister(const std::string& id, const std::string& pw, const std::string& phoneNumber) {
	out_fp << "1.1. 회원가입\n";
	out_fp << "> " << id << " " << pw << " " << phoneNumber << "\n";
	out_fp.flush();
}

