#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#pragma once

#include "Account.h"

/**
 * @file SavingsAccount.h
 * @author Sathyajit Loganathan
 * @brief This file contains the SavingsAccount class declaration.
 */

/**
 * @class SavingsAccount
 * @brief A class to represent a savings account derived from Account class.
 */
class SavingsAccount : public Account
{
private:

public:
    /**
     * @brief Construct a new Savings Account object.
     * 
     * @param customer Pointer to the Customer object associated with this account.
     */
    SavingsAccount(Customer* customer);

    /**
     * @brief Destroy the Savings Account object.
     */
    virtual ~SavingsAccount();

    /**
     * @brief Perform deposit operation.
     * 
     * @param amount The amount of money to deposit.
     * @param date The date of deposit.
     */
    void deposit(double amount, Date date);

    /**
     * @brief Perform withdrawal operation.
     * 
     * @param amount The amount of money to withdraw.
     * @param date The date of withdrawal.
     */
    void withdraw(double amount, Date date);

    /**
     * @brief Add interest to the savings account based on the balance and time since last interest addition.
     */
    void addInterest();
};

#endif
