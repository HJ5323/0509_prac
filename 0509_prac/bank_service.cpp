/* 실습 0. 클래스 구조 만들기
1. 은행에서 다루는 정보가 아래와 같을 때, 클래스로 적절하게 묶어서 어떤 부분을 함수로,
어떤 부분을 변수로, 클래스 이름은 무엇으로 만들지 정해서 소스코드로 작성
고객정보에는 고객 ID, 이름, 계좌번호, 전화번호, 관리 지점 ID가 있다.
은행정보에는 지점 ID, 주소, 고객 ID, 고객 수, 활성 계좌 수가 있다.
기능에는 신규계좌 개설, 계좌확인, 계좌이체, 고객 등록 및 삭제, 지점 추가 및 삭제, 고객 정보 확인, 지점 정보 확인이 있다. */

#include <iostream>
#include "Bank.h"
#include "Customer.h"

int main()
{
	Bank bank;
	Customer customer;

    // 고객 등록, 삭제
    customer.managementCustomer();

    // 계좌 확인
    customer.checkAccount();

    // 계좌이체
    customer.transfer();

    // 고객 정보 확인
    customer.CheckCustomerInfo();

    // 신규계좌 개설
    bank.NewAccount();

    // 지점 추가, 삭제
    bank.managementBranchID();

    // 지점 정보 확인
    bank.CheckBankInfo(); 
}
