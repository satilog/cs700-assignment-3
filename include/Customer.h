#ifndef CUSTOMER_H
#define CUSTOMER_H

#pragma once

#include <string>

using namespace std;

class Customer
{

private:
    int customerNumber;
    string name;
    string address;
    int age;
    long long telephoneNumber;

protected:
    string customerType;

public:
    Customer();
    Customer(string name, string address, int age, long long telephoneNumber);

    // Accessors
    string getName() const;
    string getAddress() const;
    int getAge() const;
    long long getTelephoneNumber() const;
    string getCustomerType();

    // Modifiers
    void setCustomerNumber(int number);
    void setName(const string &name);
    void setAddress(const string &address);
    void setAge(int age);
    void setTelephoneNumber(long telephoneNumber);


    // virtual methods
    virtual double getSavingsInterest() = 0;
    virtual double getCheckingInterest() = 0;
    virtual double getCheckingCharge() = 0;
    virtual double getOverdraftPenalty() = 0;

};

#endif