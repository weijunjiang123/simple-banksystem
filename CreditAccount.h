#ifndef __CREDITACCOUNT_H__
#define __CREDITACCOUNT_H__
#include "Account.h"



class CreditAccount : public Account { //�����˻���
private:
	Accumulator acc;	//����������Ϣ���ۼ���
	double credit;		//���ö��
	double rate;		//Ƿ���������
	double fee;			//���ÿ����

	double getDebt() const {	//���Ƿ���
		double balance = getBalance();
		return (balance < 0 ? balance : 0);
	}
public:
	//���캯��
	CreditAccount(const Date& date, const std::string& id, double credit, double rate, double fee);
	double getCredit() const { return credit; }
	double getRate() const { return rate; }
	double getFee() const { return fee; }
	double getAvailableCredit() const {	//��ÿ�������
		if (getBalance() < 0)
			return credit + getBalance();
		else
			return credit;
	}
	virtual void deposit(const Date& date, double amount, const std::string& desc);
	virtual void withdraw(const Date& date, double amount, const std::string& desc);
	virtual void settle(const Date& date);
	virtual void show() const;
};

#endif