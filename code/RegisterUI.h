#pragma once

#include "Register.h"

// 클래스 이름 : RegisterUI
// 설명 : 회원 가입 UI 관리 클래스. 회원 가입 요청을 처리하고 결과를 출력.
class RegisterUI {
private:
	Register& reg; // RegisterMember 함수 호출에 사용할 Register 객체의 참조자

public:

	void startInterface();
	RegisterUI(Register& reg);
	void submitMemberRegistration();
	void showRegister(const std::string& id, const std::string& pw, const std::string& phoneNumber);
};