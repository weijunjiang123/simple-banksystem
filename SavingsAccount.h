#ifndef __SAVINGSACCOUNT_H__
#define __SAVINGSACCOUNT_H__
#include "account.h"

class SavingsAccount : public Account { //�����˻���
private:
	Accumulator acc;	//����������Ϣ���ۼ���
	double rate;		//����������
public:
	//���캯��
	SavingsAccount(const Date& date, const std::string& id, double rate);
	double getRate() const { return rate; }
	virtual void deposit(const Date& date, double amount, const std::string& desc);
	virtual void withdraw(const Date& date, double amount, const std::string& desc);
	virtual void settle(const Date& date);
};

#endif