#ifndef BANK_H
#define BANK_H

#pragma once

#include <vector>

using namespace std;

#include "Account.h"

class Bank {
    private:
        vector<Account*> accounts;
    public:
        Bank();

        void addAccount(Account* account);
        void makeDeposit(long long accountNumber, double amount, Date date);
        void makeWithdrawal(long long accountNumber, double amount, Date date);
        Account* getAccount(long long accountNumber);
};

#endif