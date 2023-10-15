#include <iostream>

#include "Helpers/Date.h"
#include "Account.h"
#include "Customer.h"

int accountCount = 0;

// Constructor
Account::Account(Customer* customer)
{
    this->customer = customer;
    balance = 0;
    this->accountNumber = accountCount;
    accountCount += 1;
};

void Account::createAccount(Customer* customer)
{
}

int Account::getAccounNumber()
{
    return this->accountNumber;
};

double Account::getBalance(){
    return this->balance;
};

void Account::setBalance(double newBalance){
    this->balance = newBalance;
};

Customer* Account::getCustomer()
{
    return this->customer;
};

void Account::setCustomer(Customer* customer)
{
    this->customer = customer;
};

string Account::toString()
{
    string accountString = "";

    accountString.append("Account: " + this->getAccounNumber() + '\n');
    accountString.append("Owner: " + this->getCustomer()->getName() + '\n');
    accountString.append("Type of Customer: " + this->getAccounNumber() + '\n');
    accountString.append("Balance: $" + to_string(this->getBalance()) + '\n' + '\n');

    for (Transaction* transactionPtr: this->transactions) {
        accountString.append(transactionPtr->toString());
        accountString.append("\n");
    }
    return accountString;
};

Account::~Account(){};
