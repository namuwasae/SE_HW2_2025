#include "Register.h"

Register::Register(MemberRepository& repo) : repo(repo), validator(repo) {}


// 함수이름 : RegisterMember
// 기능 : 회원가입 기능
// 전달인자 : const std::string& id, const std::string& pw, const std::string& phoneNumber
// 반환값 : bool
bool Register::RegisterMember(const std::string& id, const std::string& pw, const std::string& phoneNumber) {
	if (!validator.validateRegistration(id)) return false;
	repo.createMember(id, pw, phoneNumber);
	return true;
}