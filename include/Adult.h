#ifndef ADULT_H
#define ADULT_H

#pragma once

#include <string>

using namespace std;

#include "Customer.h"

class Adult : public Customer
{
public:
    static const double SAVINGS_INTEREST;
    static const double CHECK_INTEREST;
    static const double CHECK_CHARGE;
    static const double OVERDRAFT_PENALTY;

    Adult(string name, string address, int age, long long telephoneNumber);

    double getSavingsInterest();
    double getCheckingInterest();
    double getCheckingCharge();
    double getOverdraftPenalty();
};

#endif