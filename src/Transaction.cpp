#include <iostream>
#include <ctime>

#include <sstream>
#include <iomanip>

#include "Helpers/Date.h"
#include "Transaction.h"

Transaction::Transaction(string transactionType, double amount, double previousBalance, Date date)
{
    if (transactionType == "deposit")
    {
        this->balance = previousBalance + amount;
    }
    else if (transactionType == "withdraw")
    {
        this->balance = previousBalance - amount;
    }
    else if (transactionType == "checkCharge")
    {
        this->balance = previousBalance - amount;
    }
    else if (transactionType == "interest")
    {
        this->balance = previousBalance + amount;
    }
    else if (transactionType == "overdraftPenalty")
    {
        this->balance = previousBalance - amount;
    }
    else
    {
        cout << "Invalid transaction type provided" << endl;
    }

    this->amount = amount;
    this->date = date;
};

string Transaction::getTransactionType(){
    return this->transactionType;
};

Date Transaction::getDate(){
    return this->date;
};

string Transaction::toString(){
    string shortType;
    if (transactionType == "deposit") {
        shortType = "DEP";
    } else if (transactionType == "withdraw") {
        shortType = "WD";
    } else if (transactionType == "checkCharge") {
        shortType = "CHK CHG";
    } else if (transactionType == "interest") {
        shortType = "INT CR";
    } else if (transactionType == "overdraftPenalty") {
        shortType = "OD PEN";
    }

    string dateString = date.to_string(); // Assuming the Date class has a toString method
    ostringstream oss;
    oss << shortType << "\t|\t" << dateString << "\t|\t" << amount << "\t|\t" << std::fixed << std::setprecision(2) << balance;

    return oss.str();
};

// Transaction::~Transaction()
// {
// };