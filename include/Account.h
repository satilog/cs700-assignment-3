#ifndef ACCOUNT_H
#define ACCOUNT_H

#pragma once

#include <string>
#include <vector>

using namespace std;

#include "Helpers/Date.h"
#include "Customer.h"
#include "Transaction.h"

class Account
{
protected:
    Customer* customer;
    int accountNumber;
    double balance;
    vector<Transaction*> transactions;

public:
    // Constructor
    Account(Customer* customer);
    virtual ~Account();

    // Member Variables
    void createAccount(Customer* customer);
    int getAccounNumber();

    double getBalance();
    void setBalance(double newBalance);

    Customer* getCustomer();
    void setCustomer(Customer* customer);

    // void deposit(double amount, Date date);
    // void withdraw(double amount, Date date);
    // void addInterest();
    virtual void deposit(double amount, Date date) = 0;
    virtual void withdraw(double amount, Date date) = 0;
    virtual void addInterest() = 0;

    string toString();

};

#endif