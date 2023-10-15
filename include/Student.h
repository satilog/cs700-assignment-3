#ifndef STUDENT_H
#define STUDENT_H

#pragma once

using namespace std;

#include "Customer.h"

class Student : public Customer
{
public:
    static const double SAVINGS_INTEREST;
    static const double CHECK_INTEREST;
    static const double CHECK_CHARGE;
    static const double OVERDRAFT_PENALTY;
    static const string customerType;

    Student(string name, string address, int age, long long telephoneNumber);

    double getSavingsInterest();
    double getCheckingInterest();
    double getCheckingCharge();
    double getOverdraftPenalty();
};

#endif