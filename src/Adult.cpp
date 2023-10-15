#include <iostream>

#include "Adult.h"

const double Adult::SAVINGS_INTEREST = 0.03;
const double Adult::CHECK_INTEREST = 0.01;
const double Adult::CHECK_CHARGE = 0.03;
const double Adult::OVERDRAFT_PENALTY = 25;
const string Adult::customerType = "ADULT";

Adult::Adult(string name, string address, int age, long long telephoneNumber) : Customer(name, address, age, telephoneNumber)
{
}

double Adult::getSavingsInterest()
{
    return this->SAVINGS_INTEREST;
};

double Adult::getCheckingInterest()
{
    return this->CHECK_INTEREST;
};

double Adult::getCheckingCharge()
{
    return this->CHECK_CHARGE;
};

double Adult::getOverdraftPenalty()
{
    return this->OVERDRAFT_PENALTY;
};

// Adult::~Adult()
// {
// };