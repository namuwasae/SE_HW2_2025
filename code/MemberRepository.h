#pragma once
#include <vector>
#include <string>
#include "Member.h"

// 클래스이름 : MemberRepository
// 설명 : 회원 정보를 저장하는 클래스. 회원 정보를 조회, 회원 정보를 생성, 회원 정보를 중복 검사하는 기능
class MemberRepository {
private:
	std::vector<Member> members;

public:
	bool isDuplicated(const std::string& id); // id 중복 검사
	void createMember(const std::string& id, const std::string& pw, const std::string& phoneNumber); // 회원 정보 생성
	const std::vector<Member>& getMemberList() const { return members; } // 회원 정보 조회
};