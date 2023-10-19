/**
 * @file CheckingAccount.h
 * @brief This file contains the CheckingAccount class declaration.
 * @author Sathyajit Loganathan
 * @date Oct 10 02:16:41 2023
 */

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#pragma once

using namespace std;

#include "Account.h"

/**
 * @class CheckingAccount
 * @brief This class represents a checking account which is a type of account.
 * @details The class handles deposits, withdrawals, and adding interests for a checking account.
 */
class CheckingAccount : public Account
{
private:
    // No private members in current implementation

public:
    /**
     * @brief Constructor that initializes a new CheckingAccount object.
     * @param customer A pointer to the Customer object associated with this account.
     */
    CheckingAccount(Customer *customer);

    /**
     * @brief Destructor that cleans up the memory to prevent memory leaks.
     */
    virtual ~CheckingAccount();

    /**
     * @brief Handles deposit transactions.
     * @param amount The amount of money to be deposited.
     * @param date The date when the deposit transaction is made.
     */
    void deposit(double amount, Date date);

    /**
     * @brief Handles withdrawal transactions.
     * @param amount The amount of money to be withdrawn.
     * @param date The date when the withdrawal transaction is made.
     */
    void withdraw(double amount, Date date);

    /**
     * @brief Adds interest to the account balance based on the balance and the customer's interest rate.
     */
    void addInterest();
};

#endif
