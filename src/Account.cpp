#include <iostream>

#include "Helpers/Date.h"
#include "Account.h"
#include "Customer.h"

int accountCount = 0;

// Constructor
Account::Account(Customer *customer)
{
    this->customer = customer;
    balance = 0;
    this->accountNumber = accountCount;
    accountCount += 1;
};

void Account::createAccount(Customer *customer)
{
}

int Account::getAccounNumber()
{
    return this->accountNumber;
};

double Account::getBalance()
{
    return this->balance;
};

string Account::getAccountType()
{
    return this->accountType;
};

void Account::setBalance(double newBalance)
{
    this->balance = newBalance;
};

Customer *Account::getCustomer()
{
    return this->customer;
};

void Account::setCustomer(Customer *customer)
{
    this->customer = customer;
};

void Account::deductCheckCharge() {
    Date currentDate(time(0));
    double amount = this->getCustomer()->getCheckingCharge();
    Transaction *newWithdrawal = new Transaction("checkCharge", amount, this->getBalance(), currentDate);
    this->transactions.push_back(newWithdrawal);
    this->setBalance(this->getBalance() - amount);
}

string Account::toString()
{
    string accountString = "";

    accountString.append("Account: " + to_string(this->getAccounNumber()) + "\n");
    accountString.append("Account type: " + this->getAccountType() + "\n");

    accountString.append("Owner: " + this->getCustomer()->getName() + "\n");
    accountString.append("Type of Customer: " + to_string(this->getAccounNumber()) + "\n");
    accountString.append("Balance: $" + to_string(this->getBalance()) + "\n" + "\n");

    accountString.append("|---------|------------|--------------|------------|\n");
    accountString.append("| Type    | Date       | Amount       | Balance    |\n");
    accountString.append("|---------|------------|--------------|------------|\n");

    // Assuming transactions is the name of the member storing the list of transaction pointers
    for (Transaction *t : transactions)
    {
        accountString.append(t->toString() + "\n");
        accountString.append("|---------|------------|--------------|------------|\n");
    }

    // for (Transaction* transactionPtr: this->transactions) {
    //     accountString.append(transactionPtr->toString());
    //     accountString.append("\n");
    // }
    return accountString;
};

Account::~Account(){};
