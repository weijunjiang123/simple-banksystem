#ifndef __SAVINGSACCOUNT_H__
#define __SAVINGSACCOUNT_H__
#include "account.h"

class SavingsAccount : public Account { //储蓄账户类
private:
	Accumulator acc;	//辅助计算利息的累加器
	double rate;		//存款的年利率
public:
	//构造函数
	SavingsAccount(const Date& date, const std::string& id, double rate);
	double getRate() const { return rate; }
	virtual void deposit(const Date& date, double amount, const std::string& desc);
	virtual void withdraw(const Date& date, double amount, const std::string& desc);
	virtual void settle(const Date& date);
};

#endif