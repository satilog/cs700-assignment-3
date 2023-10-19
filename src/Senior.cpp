/**
 * @file Senior.cpp
 * @author Sathyajit Loganathan
 * @brief Implementation of the Bank class.
 * @date Oct 10 02:16:41 2023
 *
 * This file provides the definitions for the functions declared in Senior.h.
 */

#include <iostream>

#include "Senior.h"

const double Senior::SAVINGS_INTEREST = 0.04;
const double Senior::CHECK_INTEREST = 0.01;
const double Senior::CHECK_CHARGE = 0.01;
const double Senior::OVERDRAFT_PENALTY = 25;
// const string Senior::customerType = "SENIOR";

Senior::Senior(string name, string address, int age, long long telephoneNumber): Customer(name, address, age, telephoneNumber)
{
    this->customerType = "Senior";
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

