#include "savingsAccount.h"
#include <iostream>
#include <string>

using namespace std;

//SavingsAccount����س�Ա������ʵ��
SavingsAccount::SavingsAccount(const Date& date, const string& id, double rate)
	: Account(date, id), rate(rate), acc(date, 0) { }

void SavingsAccount::deposit(const Date& date, double amount, const string& desc) {
	record(date, amount, desc);
	acc.change(date, getBalance());
}

void SavingsAccount::withdraw(const Date& date, double amount, const string& desc) {
	if (amount > getBalance()) {
		error("not enough money");
	}
	else {
		record(date, -amount, desc);
		acc.change(date, getBalance());
	}
}

void SavingsAccount::settle(const Date& date) {
	if (date.getMonth() == 1) {	//ÿ���һ�¼���һ����Ϣ
		double interest = acc.getSum(date) * rate
			/ (date - Date(date.getYear() - 1, 1, 1));
		if (interest != 0)
			record(date, interest, "interest");
		acc.reset(date, getBalance());
	}
}