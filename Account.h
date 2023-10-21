#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
#include "date.h"
#include "accumulator.h"
#include <string>

class Account { //�˻���

private:
	std::string id;	//�ʺ�
	double balance;	//���
	static double total; //�����˻����ܽ��

protected:
	//����������õĹ��캯����idΪ�˻�
	Account(const Date& date, const std::string& id);
	//��¼һ���ʣ�dateΪ���ڣ�amountΪ��descΪ˵��
	void record(const Date& date, double amount, const std::string& desc);
	//���������Ϣ
	void error(const std::string& msg) const;

public:
	const std::string& getId() const { return id; }
	double getBalance() const { return balance; }
	static double getTotal() { return total; }
	//�����ֽ�dateΪ���ڣ�amountΪ��descΪ����˵��
	virtual void deposit(const Date& date, double amount, const std::string& desc) = 0;
	//ȡ���ֽ�dateΪ���ڣ�amountΪ��descΪ����˵��
	virtual void withdraw(const Date& date, double amount, const std::string& desc) = 0;
	//���㣨������Ϣ����ѵȣ���ÿ�½���һ�Σ�dateΪ��������
	virtual void settle(const Date& date) = 0;
	//��ʾ�˻���Ϣ
	virtual void show() const;
};



#endif //__ACCOUNT_H__