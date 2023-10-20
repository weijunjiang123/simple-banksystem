#include "Account.h"

Account::Account(string i, double b, double t)
{
	id = i;
	balance = b;
	total = t;
}

void Account::record(Date date, double desc)
{

}

string Account::getId()
{
	return id;
}

double Account::getBalance()
{
	return balance;
}

double Account::getTotal()
{
	return total;
}
