/**
 * @file Customer.h
 * @author Sathyajit Loganathan
 * @brief Defines the interface for the Customer class.
 * @date Oct 10 02:16:41 2023
 */

#ifndef CUSTOMER_H
#define CUSTOMER_H

#pragma once

#include <string>

using namespace std;

/**
 * @class Customer
 * @brief Represents a bank customer.
 * 
 * This class provides the basic attributes and operations for a bank customer.
 */
class Customer
{

private:
    int customerNumber; ///< Unique customer ID.
    string name; ///< Customer's name.
    string address; ///< Customer's address.
    int age; ///< Customer's age.
    long long telephoneNumber; ///< Customer's telephone number.

protected:
    string customerType; ///< Type of the customer (e.g., regular, premium).

public:
    /**
     * @brief Default constructor.
     */
    Customer();

    /**
     * @brief Parameterized constructor.
     * 
     * @param name Customer's name.
     * @param address Customer's address.
     * @param age Customer's age.
     * @param telephoneNumber Customer's telephone number.
     */
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
    void setTelephoneNumber(long long telephoneNumber);

    // virtual methods
    virtual double getSavingsInterest() = 0;
    virtual double getCheckingInterest() = 0;
    virtual double getCheckingCharge() = 0;
    virtual double getOverdraftPenalty() = 0;

};

#endif
