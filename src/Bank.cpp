#include <iostream>

#include "Bank.h"

Bank::Bank(){};

void Bank::addAccount(Account *account)
{
    this->accounts.push_back(account);
}

Transaction Bank::makeDeposit(long long accountNumber, double amount, string dateString)
{
    int year = stoi(dateString.substr(0, 4));
    int month = stoi(dateString.substr(5, 6));
    int day = stoi(dateString.substr(8, 9));
    Date date(day, month, year);

    Account *accPtr = this->getAccount(accountNumber);
    accPtr->deposit(amount, date);
}

Transaction Bank::makeWithdrawal(long long accountNumber, double amount, string dateString)
{
    int year = stoi(dateString.substr(0, 4));
    int month = stoi(dateString.substr(5, 6));
    int day = stoi(dateString.substr(8, 9));
    Date date(day, month, year);

    Account *accPtr = this->getAccount(accountNumber);
    accPtr->withdraw(amount, date);
}

Account *Bank::getAccount(long long accountNumber)
{
    for (Account *accPtr : this->accounts)
    {
        if (accPtr->getAccounNumber() == accountNumber)
        {
            return accPtr;
        }
    }
    return nullptr;
}

// Bank::~Bank()
// {
// };