#include <iostream>

#include "Helpers/Date.h"
#include "Account.h"
#include "Customer.h"

int accountCount = 0;

// Constructor
Account::Account()
{
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

void Account::deposit(double amount, Date date)
{
    Transaction *newDeposit = new Transaction("deposit", amount, this->getBalance(), date);
    this->transactions.push_back(newDeposit);
    this->setBalance(this->getBalance() + amount);

    // After deposit add interest
    this->addInterest();
};

void Account::withdraw(double amount, Date date)
{
    // Before withdrawal add interest
    this->addInterest();

    Transaction *newWithdrawal = new Transaction("withdraw", amount, this->getBalance(), date);
    this->transactions.push_back(newWithdrawal);
    this->setBalance(this->getBalance() - amount);
};

string Account::toString()
{
    string accountString = "";

    for (Transaction* transactionPtr: this->transactions) {
        accountString.append(transactionPtr->toString());
        accountString.append("\n");
    }
    return accountString;
};

Account::~Account(){};
