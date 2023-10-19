/**
 * @file Customer.cpp
 * @author Sathyajit Loganathan
 * @brief Contains the implementation for the Customer class.
 * @date Oct 10 02:16:41 2023
 */

#include <iostream>

#include "Customer.h"

int customerCount = 0;

Customer::Customer(string name, string address, int age, long long telephoneNumber)
{
    this->customerNumber = customerCount;
    this->name = name;
    this->address = address;
    this->age = age;
    this->telephoneNumber = telephoneNumber;
    customerCount += 1;
};

Customer::Customer(){};

string Customer::getName() const
{
    return this->name;
};

string Customer::getAddress() const
{
    return this->address;
};

int Customer::getAge() const
{
    return this->age;
};

long long Customer::getTelephoneNumber() const
{
    return this->telephoneNumber;
};

string Customer::getCustomerType()
{
    return this->customerType;
};

// Modifiers
void Customer::setCustomerNumber(int number)
{
    this->customerNumber = customerNumber;
}
void Customer::setName(const string &name)
{
    this->name = name;
}
void Customer::setAddress(const string &address)
{
    this->address = address;
}
void Customer::setAge(int age)
{
    this->age = age;
}
void Customer::setTelephoneNumber(long long telephoneNumber)
{
    this->telephoneNumber = telephoneNumber;
}

// Customer::~Customer(){};