/**
 * @file Adult.h
 * @author Sathyajit Loganathan
 * @brief The Adult class extends the Customer class, adding specific features and attributes for adult customers.
 * @date Oct 10 02:16:41 2023
 * 
 * Adult customers have specific interest and charge rates which are different from other types of customers. 
 * The class defines constant values for savings interest, check interest, check charge, and overdraft penalty.
 */

#ifndef ADULT_H
#define ADULT_H

#pragma once

#include <string>

using namespace std;

#include "Customer.h"

class Adult : public Customer
{
public:
    static const double SAVINGS_INTEREST;  ///< Savings interest rate for adult customers.
    static const double CHECK_INTEREST;    ///< Checking interest rate for adult customers.
    static const double CHECK_CHARGE;      ///< Check charge rate for adult customers.
    static const double OVERDRAFT_PENALTY; ///< Overdraft penalty rate for adult customers.

    /**
     * @brief Constructs an adult customer object.
     * 
     * @param name The name of the adult customer.
     * @param address The address of the adult customer.
     * @param age The age of the adult customer.
     * @param telephoneNumber The telephone number of the adult customer.
     */
    Adult(string name, string address, int age, long long telephoneNumber);

    /**
     * @brief Gets the savings interest rate.
     * 
     * @return The savings interest rate for adult customers.
     */
    double getSavingsInterest();

    /**
     * @brief Gets the checking interest rate.
     * 
     * @return The checking interest rate for adult customers.
     */
    double getCheckingInterest();

    /**
     * @brief Gets the checking charge rate.
     * 
     * @return The checking charge rate for adult customers.
     */
    double getCheckingCharge();

    /**
     * @brief Gets the overdraft penalty rate.
     * 
     * @return The overdraft penalty rate for adult customers.
     */
    double getOverdraftPenalty();
};

#endif
