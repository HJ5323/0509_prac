#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Bank {
private:
    string branchID; // 지점 ID
    string address; // 주소
    vector<Customer> customers; // 고객 ID, 고객 수
    int activeAccountsNum = 0; // 활성 계좌 수

public:

    // 신규계좌 개설
    void NewAccount() {

    }

    // 지점 추가, 삭제
    void managementBranchID() {

    }

    // 지점 정보 확인
    void CheckBankInfo() {

    }

};