#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#pragma once

using namespace std;

#include "Account.h"

class SavingsAccount : public Account
{
private:
public:
    SavingsAccount(Customer* customer);
    virtual ~SavingsAccount();
    
    void deposit(double amount, Date date);
    void withdraw(double amount, Date date);
    void addInterest();
};

#endif