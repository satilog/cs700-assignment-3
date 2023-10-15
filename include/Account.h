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
    string accountType;

public:
    // Constructor
    Account(Customer* customer);
    virtual ~Account();

    // Member Variables
    void createAccount(Customer* customer);
    int getAccounNumber();

    double getBalance();
    Customer* getCustomer();
    string getAccountType();

    void setBalance(double newBalance);
    void setCustomer(Customer* customer);

    void deductCheckCharge();

    // void deposit(double amount, Date date);
    // void withdraw(double amount, Date date);
    // void addInterest();
    virtual void deposit(double amount, Date date) = 0;
    virtual void withdraw(double amount, Date date) = 0;
    virtual void addInterest() = 0;



    string toString();

};

#endif