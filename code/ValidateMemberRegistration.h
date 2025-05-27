#pragma once
#include <string>
#include "MemberRepository.h"

// 클래스 이름 : ValidateMemberRegistration
// 설명 : 회원 가입 검사 기능을 처리하는 클래스.
class ValidateMemberRegistration {
private:
	MemberRepository& repo;
public:
	ValidateMemberRegistration(MemberRepository& repo);
	bool checkFormat(const std::string& id);
	bool isDuplicated(const std::string& id);
	bool validateRegistration(const std::string& id);
};
