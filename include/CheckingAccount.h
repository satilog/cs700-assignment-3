#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#pragma once

using namespace std;

#include "Account.h"

class CheckingAccount : public Account
{
private:
public:
    CheckingAccount(Customer* customer);
    virtual ~CheckingAccount();

    void deposit(double amount, Date date);
    void withdraw(double amount, Date date);
    void addInterest();
};

#endif