#ifndef TRANSACTION_H
#define TRANSACTION_H

#pragma once

using namespace std;

#include "Helpers/Date.h"

class Transaction
{
private:
    string transactionType;
    double amount;
    double balance;
    Date date;

public:
    Transaction(string transactionType, double amount, double previousBalance, Date date);
    
    string getTransactionType();
    Date getDate();
    string toString();
};

#endif