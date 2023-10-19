/**
 * @file SavingsAccount.cpp
 * @author Sathyajit Loganathan
 * @brief This file contains the definitions of the SavingsAccount class methods.
 * @date Oct 10 02:16:41 2023
 */

#include <iostream>

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(Customer* customer): Account(customer)
{
    this->accountType = "Savings";
}

void SavingsAccount::deposit(double amount, Date date)
{
    Transaction *newDeposit = new Transaction("deposit", amount, this->getBalance(), date);
    this->transactions.push_back(newDeposit);
    this->setBalance(this->getBalance() + amount);

    // After deposit add interest
    this->addInterest();
};

void SavingsAccount::withdraw(double amount, Date date)
{
    // Before withdrawal add interest
    this->addInterest();

    // Charge overdraft penalty if amount is lower than 0 after withdrawal
    if (this->getBalance() - amount < 0) {
        Transaction *overdraftPenalty = new Transaction("overdraftPenalty", this->customer->getOverdraftPenalty(), this->getBalance(), date);
        this->transactions.push_back(overdraftPenalty);
        this->setBalance(this->getBalance() - this->customer->getOverdraftPenalty());
    }

    Transaction *newWithdrawal = new Transaction("withdraw", amount, this->getBalance(), date);
    this->transactions.push_back(newWithdrawal);
    this->setBalance(this->getBalance() - amount);
};

void SavingsAccount::addInterest()
{
    if (this->getBalance() > 0)
    {
        Date interestStartDate = this->transactions[0]->getDate();

        // for (int index = 0; index < this->transactions.size(); index++)
        // {
        //     if (this->transactions[index]->getTransactionType() == "interest")
        //     {
        //         interestStartDate = this->transactions[index]->getDate();
        //     }
        // }

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