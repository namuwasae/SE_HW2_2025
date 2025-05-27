#pragma once
#include <string>
#include <unordered_map>

// 클래스 이름 : LoginSession
// 설명 : 로그인 세션 관리 클래스. 다른 함수들로부터 로그인 상태나 로그인된 사용자의 id를 참조하기 위해 사용.
class LoginSession {
private:
    std::unordered_map<std::string, bool> loginStates;  // id를 키로, 로그인 상태를 값으로 저장

public:

    // 함수이름 : setLoginState
    // 기능 : 로그인 상태 설정
    // 전달인자 : const std::string& id, bool state
    // 반환값 : 없음
    void setLoginState(const std::string& id, bool state) {
        loginStates[id] = state;
    }

    // 함수이름 : setLogoutState
    // 기능 : 로그아웃 상태 설정
    // 전달인자 : const std::string& id
    // 반환값 : 없음
    void setLogoutState(const std::string& id) {
        loginStates[id] = false;
    }

    // 함수이름 : isLoggedIn
    // 기능 : 로그인 상태 확인
    // 전달인자 : const std::string& id
    // 반환값 : bool
    bool isLoggedIn(const std::string& id) const {
        auto it = loginStates.find(id);                 // 찾고자 하는 id를 키로 하여 로그인 상태를 찾음.
        return it != loginStates.end() && it->second;   // 찾은 결과가 있고, 로그인 상태가 true인지 확인.
    }

    // 함수이름 : getCurrentLoggedInUser
    // 기능 : 현재 로그인된 사용자의 ID 반환
    // 전달인자 : 없음
    // 반환값 : std::string (현재 로그인된 사용자의 ID, 없으면 빈 문자열)
    std::string getCurrentLoggedInUser() const {
        for (const auto& [id, isLoggedIn] : loginStates) { // 로그인 상태가 true인 id를 찾음. (한 시점에 하나의 회원만 로그인되어 있다고 가정)
            if (isLoggedIn) {
                return id;
            }
        }
        return "";  // 로그인된 사용자가 없는 경우
    }

};