#include "SavingsAccount.h"

SavingsAccount::SavingsAccount()
{
}

void SavingsAccount::addInterest()
{
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