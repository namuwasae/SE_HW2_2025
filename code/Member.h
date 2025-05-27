#pragma once
#include <string>

class Login;  // 전방 선언

// 클래스 이름 : Member
// 설명 : 회원 정보를 저장하는 클래스. getter 메서드들을 통해 회원 정보를 참조할 수 있음.
class Member {
private:
    std::string id;
    std::string pw;
    std::string phoneNumber;

    // 함수이름 : matchCredentials
    // 기능 : 입력받은 pw와 멤버의 pw가 일치하는지 확인
    // 전달인자 : const std::string& inputPw
    // 반환값 : bool
    bool matchCredentials(const std::string& inputPw) const {
        return pw == inputPw;
    }

    friend class Login;  // Login 클래스만 matchCredentials에 접근 가능

public:
    Member(const std::string& id, const std::string& pw, const std::string& phoneNumber)
        : id(id), pw(pw), phoneNumber(phoneNumber) {}

    // getter 메서드들
    const std::string& getId() const { return id; }
    const std::string& getPhoneNumber() const { return phoneNumber; }
};