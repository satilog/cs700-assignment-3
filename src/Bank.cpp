#include <iostream>

#include "Bank.h"

Bank::Bank(){};

void Bank::addAccount(Account *account)
{
    this->accounts.push_back(account);
}

void Bank::makeDeposit(long long accountNumber, double amount, Date date)
{
    Account *accPtr = this->getAccount(accountNumber);
    accPtr->deposit(amount, date);
}

void Bank::makeWithdrawal(long long accountNumber, double amount, Date date)
{
    Account *accPtr = this->getAccount(accountNumber);
    accPtr->withdraw(amount, date);
}

Account *Bank::getAccount(long long accountNumber)
{
    for (int index = 0; index < this->accounts.size(); index++) {
        if (this->accounts[index]->getAccounNumber() == accountNumber)
        {
            return this->accounts[index];
        }
    }
    // for (Account *accPtr : this->accounts)
    // {
    // }
    return nullptr;
}

// Bank::~Bank()
// {
// };