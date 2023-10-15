#include <iostream>

#include "Senior.h"

const double Senior::SAVINGS_INTEREST = 0.04;
const double Senior::CHECK_INTEREST = 0.01;
const double Senior::CHECK_CHARGE = 0.01;
const double Senior::OVERDRAFT_PENALTY = 25;
const string Senior::customerType = "SENIOR";

Senior::Senior(string name, string address, int age, long long telephoneNumber): Customer(name, address, age, telephoneNumber)
{

}

double Senior::getSavingsInterest()
{
    return this->SAVINGS_INTEREST;
};

double Senior::getCheckingInterest()
{
    return this->CHECK_INTEREST;
};

double Senior::getCheckingCharge()
{
    return this->CHECK_CHARGE;
};

double Senior::getOverdraftPenalty()
{
    return this->OVERDRAFT_PENALTY;
};

// Senior::~Senior()
// {
// };

