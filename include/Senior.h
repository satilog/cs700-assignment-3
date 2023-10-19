/**
 * @class Senior
 * @brief A derived class from Customer representing a senior customer.
 *
 * This class holds information specific to senior customers, including
 * their savings and checking account interests, check charges, and overdraft penalties.
 *
 * @author Sathyajit Loganathan
 */

#ifndef SENIOR_H
#define SENIOR_H

#pragma once

#include <string>

using namespace std;

#include "Customer.h"

class Senior : public Customer
{
public:
    static const double SAVINGS_INTEREST;  ///< The interest rate for the savings account.
    static const double CHECK_INTEREST;    ///< The interest rate for the checking account.
    static const double CHECK_CHARGE;      ///< The charge applied on the checking account.
    static const double OVERDRAFT_PENALTY; ///< The penalty incurred due to an overdraft.

    /**
     * @brief Constructs a Senior customer object.
     *
     * Initializes the Senior customer with a name, address, age, and telephone number.
     *
     * @param name The name of the senior customer.
     * @param address The address of the senior customer.
     * @param age The age of the senior customer.
     * @param telephoneNumber The telephone number of the senior customer.
     */
    Senior(string name, string address, int age, long long telephoneNumber);

    /**
     * @brief Retrieves the interest rate for the savings account.
     *
     * @return The savings interest rate.
     */
    double getSavingsInterest();

    /**
     * @brief Retrieves the interest rate for the checking account.
     *
     * @return The checking interest rate.
     */
    double getCheckingInterest();

    /**
     * @brief Retrieves the charge applied on the checking account.
     *
     * @return The checking charge.
     */
    double getCheckingCharge();

    /**
     * @brief Retrieves the penalty incurred due to an overdraft.
     *
     * @return The overdraft penalty.
     */
    double getOverdraftPenalty();
};

#endif
