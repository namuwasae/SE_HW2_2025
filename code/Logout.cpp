#include "Logout.h"

Logout::Logout(LoginSession& session) : session(session) {}

// 함수이름 : logout
// 기능 : 로그아웃 처리
// 전달인자 : 없음
// 반환값 : std::string (로그아웃된 사용자의 ID)
std::string Logout::logout() {
    std::string currentUserId = session.getCurrentLoggedInUser(); // 먼저 현재 로그인 되어있는 id를 반환받음.
    if (!currentUserId.empty()) { // 반환받은 id가 비어있지 않다면(로그인 되어있다면)
        session.setLogoutState(currentUserId); // 로그아웃 상태로 설정
    }
    return currentUserId; // 로그아웃된 사용자의 id 반환
}
