#pragma once
#include <iostream>
#include <string>
#include "Account.h"
#include "Accumulator.h"

using namespace std;

class SavingsAccount :
    public Account
{
protected:
    Accumulator acc;
    double rate;
public:
    SavingsAccount(Accumulator a, double r);
    double getRate();
    void deposit(Date date, double amount, string desc);
    void withdraw(Date date, double amount, string desc);
    void settle(Date date);
};

