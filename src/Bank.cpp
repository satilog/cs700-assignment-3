#include <iostream>

#include "Bank.h"

Bank::Bank(){};

void Bank::addAccount(Account *account)
{
    this->accounts.push_back(account);
}

void Bank::makeDeposit(long long accountNumber, double amount, string dateString)
{
    int year = stoi(dateString.substr(0, 4));
    int month = stoi(dateString.substr(5, 6));
    int day = stoi(dateString.substr(8, 9));
    Date date(day, month, year);

    cout << year << "-" << month << "-" << day << endl;

    Account *accPtr = this->getAccount(accountNumber);
    
    cout << "Bank->makeDeposit(): Got here" << endl;

    accPtr->deposit(amount, date);
}

void Bank::makeWithdrawal(long long accountNumber, double amount, string dateString)
{
    int year = stoi(dateString.substr(0, 4));
    int month = stoi(dateString.substr(5, 6));
    int day = stoi(dateString.substr(8, 9));
    Date date(day, month, year);

    cout << year << "-" << month << "-" << day << endl;

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