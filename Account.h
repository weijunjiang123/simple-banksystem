#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

#pragma once
class Account
{
protected:
	string id;
	double balance;
	double total;

public:
	Account(string i, double b, double t);
	void record(Date date, double desc);
	void error(string msg);
	string getId();
	double getBalance();
	double getTotal();
	virtual void show();
};

