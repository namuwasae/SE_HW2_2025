#include "ValidateMemberRegistration.h"

ValidateMemberRegistration::ValidateMemberRegistration(MemberRepository& repo) : repo(repo) {}

// 함수이름 : checkFormat()
// 기능 : id 형식 검사
// 전달인자 : const std::string& id
// 반환값 : bool
// 특이사항 : 이번 과제에서는 id 형식 검사는 항상 통과하도록 구현하겠습니다.
bool ValidateMemberRegistration::checkFormat(const std::string& id) {
	return true;
}

// 함수이름 : isDuplicated()
// 기능 : repo에서 id 중복 검사
// 전달인자 : const std::string& id
// 반환값 : bool
bool ValidateMemberRegistration::isDuplicated(const std::string& id) {
	return repo.isDuplicated(id);
}

// 함수이름 : validateRegistration()
// 기능 : id 형식 검사와 중복 검사를 수행
// 전달인자 : const std::string& id
// 반환값 : bool
bool ValidateMemberRegistration::validateRegistration(const std::string& id) {
	if (!checkFormat(id)) return false;
	if (isDuplicated(id)) return false;
	return true;
}
