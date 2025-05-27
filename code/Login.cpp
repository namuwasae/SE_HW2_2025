#include "Login.h"

Login::Login(MemberRepository& repo, LoginSession& session) : repo(repo), session(session) {}


// 함수이름 : authenticate
// 기능 : 로그인 인증
// 전달인자 : const std::string& id, const std::string& pw
// 반환값 : bool
bool Login::authenticate(const std::string& id, const std::string& pw) {
    const auto& members = repo.getMemberList();

    for (const auto& member : members) {
        if (member.getId() == id && member.matchCredentials(pw)) { // id, pw 일치하면
            session.setLoginState(id, true);                     // 로그인 상태를 true로 설정
            return true;
        }
    }
    return false;
}
