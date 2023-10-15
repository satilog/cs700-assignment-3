#include <iostream>

#include "Student.h"

const double Student::SAVINGS_INTEREST = 0.04;
const double Student::CHECK_INTEREST = 0.01;
const double Student::CHECK_CHARGE = 0.02;
const double Student::OVERDRAFT_PENALTY = 25;
// const string Student::customerType = "STUDENT";

Student::Student(string name, string address, int age, long long telephoneNumber): Customer(name, address, age, telephoneNumber)
{
    this->customerType = "Student";
}

double Student::getSavingsInterest()
{
    return this->SAVINGS_INTEREST;
};

double Student::getCheckingInterest()
{
    return this->CHECK_INTEREST;
};

double Student::getCheckingCharge()
{
    return this->CHECK_CHARGE;
};

double Student::getOverdraftPenalty()
{
    return this->OVERDRAFT_PENALTY;
};

// Student::~Student()
// {
// };