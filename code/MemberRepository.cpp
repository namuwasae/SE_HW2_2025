#include "MemberRepository.h"

// 함수이름 : isDuplicated
// 기능 : 중복 아이디가 있는 지 검사
// 전달인자 : const std::string& id
// 반환값 : bool
bool MemberRepository::isDuplicated(const std::string& id) {
    for (const auto& member : members) {
        if (member.getId() == id) return true;
    }
    return false;
}

// 함수이름 : createMember
// 기능 : 회원 정보 생성. 회원가입 될 때마다 members 벡터에 회원 정보를 저장.
// 전달인자 : const std::string& id, const std::string& pw, const std::string& phoneNumber
// 반환값 : void
void MemberRepository::createMember(const std::string& id, const std::string& pw, const std::string& phoneNumber) {
    members.push_back(Member(id, pw, phoneNumber));
}

