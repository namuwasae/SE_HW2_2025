#include "ReferRental.h"

ReferRental::ReferRental(ReportRental& reportRental, LoginSession& loginSession)
    : reportRental(reportRental), loginSession(loginSession) {}

// �Լ��̸� : referRental
// ��� : ������ �뿩 ����Ʈ ��ȸ. loginSession ��ü�� getCurrentLoggedInUser �Լ��� ���� ���� �α����� ������� ID�� ��ȸ�ϰ�, 
//       reportRental ��ü�� getRentalInfo �Լ��� ���� ������ �뿩 ����Ʈ�� ��ȸ.
// �������� : ����
// ��ȯ�� : std::vector<RentalInfo>
std::vector<RentalInfo> ReferRental::referRental() {
    std::string userID = loginSession.getCurrentLoggedInUser();
    return reportRental.getRentalInfo(userID);
}