/* �ǽ� 0. Ŭ���� ���� �����
1. ���࿡�� �ٷ�� ������ �Ʒ��� ���� ��, Ŭ������ �����ϰ� ��� � �κ��� �Լ���,
� �κ��� ������, Ŭ���� �̸��� �������� ������ ���ؼ� �ҽ��ڵ�� �ۼ�
���������� �� ID, �̸�, ���¹�ȣ, ��ȭ��ȣ, ���� ���� ID�� �ִ�.
������������ ���� ID, �ּ�, �� ID, �� ��, Ȱ�� ���� ���� �ִ�.
��ɿ��� �ű԰��� ����, ����Ȯ��, ������ü, �� ��� �� ����, ���� �߰� �� ����, �� ���� Ȯ��, ���� ���� Ȯ���� �ִ�. */

#include <iostream>
#include "Bank.h"
#include "Customer.h"

int main()
{
	Bank bank;
	Customer customer;

    // �� ���, ����
    customer.managementCustomer();

    // ���� Ȯ��
    customer.checkAccount();

    // ������ü
    customer.transfer();

    // �� ���� Ȯ��
    customer.CheckCustomerInfo();

    // �ű԰��� ����
    bank.NewAccount();

    // ���� �߰�, ����
    bank.managementBranchID();

    // ���� ���� Ȯ��
    bank.CheckBankInfo(); 
}
