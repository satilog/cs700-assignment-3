#include <iostream>

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(Customer* customer): Account(customer)
{
}

void SavingsAccount::deposit(double amount, Date date)
{
    Transaction *newDeposit = new Transaction("deposit", amount, this->getBalance(), date);
    this->transactions.push_back(newDeposit);
    this->setBalance(this->getBalance() + amount);

    cout << "SavingsAccount->deposit(): Got here" << endl;

    // After deposit add interest
    this->addInterest();
};

void SavingsAccount::withdraw(double amount, Date date)
{
    // Before withdrawal add interest
    this->addInterest();

    Transaction *newWithdrawal = new Transaction("withdraw", amount, this->getBalance(), date);
    this->transactions.push_back(newWithdrawal);
    this->setBalance(this->getBalance() - amount);
};

void SavingsAccount::addInterest()
{
    cout << "CheckingAccount->addInterest(): Got here" << endl;
    if (this->getBalance() > 0)
    {
        Date interestStartDate = this->transactions[0]->getDate();
        
        cout << "CheckingAccount->addInterest(): Got here" << endl;

        for (int index = 0; index < this->transactions.size(); index++)
        {
            if (this->transactions[index]->getTransactionType() == "interest")
            {
                interestStartDate = this->transactions[index]->getDate();
            }
        }
        // Transaction *lastInterestTransactionPtr = nullptr;
        // for (Transaction *currentTransactionPtr : this->transactions)
        // {
        //     if (currentTransactionPtr->getTransactionType() == "interest")
        //     {
        //         interestStartDate = currentTransactionPtr->getDate();
        //     }
        // }

        cout << "CheckingAccount->addInterest(): Got here" << endl;

        Date currentDate(time(0));
        int dateDifferenceInDays = currentDate - interestStartDate;
        double interest = this->getBalance() * dateDifferenceInDays / 365 * this->getCustomer()->getSavingsInterest();

        cout << "CheckingAccount->addInterest(): Got here" << endl;
        cout << interest << endl;
        cout << this->getBalance() << endl;
        Transaction *newInterest = new Transaction("interest", interest, this->getBalance(), currentDate);
        this->transactions.push_back(newInterest);
        this->setBalance(this->getBalance() + interest);
    }


    if (this->getBalance() > 0)
    {
        Date interestStartDate = this->transactions[0]->getDate();

        // Transaction *lastInterestTransactionPtr = nullptr;
        for (Transaction *currentTransactionPtr : this->transactions)
        {
            if (currentTransactionPtr->getTransactionType() == "interest")
            {
                interestStartDate = currentTransactionPtr->getDate();
            }
        }

        Date currentDate(time(0));
        int dateDifferenceInDays = currentDate - interestStartDate;
        double interest = this->getBalance() * dateDifferenceInDays / 365 * this->getCustomer()->getSavingsInterest();

        Transaction *newInterest = new Transaction("interest", interest, this->getBalance(), currentDate);
        this->transactions.push_back(newInterest);
        this->setBalance(this->getBalance() + interest);
    }
};

SavingsAccount::~SavingsAccount()
{
}