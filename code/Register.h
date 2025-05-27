#pragma once
#include <string>
#include "MemberRepository.h"
#include "ValidateMemberRegistration.h"

// 클래스 이름 : Register
// 설명 : 회원 가입 기능을 처리하는 클래스.
class Register {
private:
	MemberRepository& repo; // id 중복 검사와 회원 가입 기능에 사용할 MemberRepository 객체 참조
	ValidateMemberRegistration validator; // id 형식 검사와 중복 검사에 사용할 ValidateMemberRegistration 객체 참조


public:
	Register(MemberRepository& repo); // 생성자
	bool RegisterMember(const std::string& id, const std::string& pw, const std::string& phoneNumber); // 회원가입 기능
};