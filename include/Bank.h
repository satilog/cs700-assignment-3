/**
 * @file Bank.h
 * @author Sathyajit Loganathan
 * @brief Declaration of the Bank class.
 * @date Oct 10 02:16:41 2023
 *
 * This file contains the Bank class, which handles operations
 * related to bank accounts such as adding accounts, making deposits,
 * and making withdrawals.
 */

#ifndef BANK_H
#define BANK_H

#pragma once

#include <vector>

using namespace std;

#include "Account.h"

/**
 * @class Bank
 * @brief A class that represents a bank with multiple accounts.
 *
 * The Bank class provides functionality for adding accounts,
 * making deposits, making withdrawals, and retrieving accounts by number.
 */
class Bank
{
private:
    vector<Account *> accounts; ///< A list of pointers to Account objects.

public:
    /**
     * @brief Default constructor for the Bank class.
     */
    Bank();

    /**
     * @brief Adds an account to the bank's list of accounts.
     * @param account Pointer to the account to be added.
     */
    void addAccount(Account *account);

    /**
     * @brief Deposits a given amount to a specified account.
     * @param accountNumber The number of the account to deposit to.
     * @param amount The amount to deposit.
     * @param date The date of the deposit.
     */
    void makeDeposit(long long accountNumber, double amount, Date date);

    /**
     * @brief Withdraws a given amount from a specified account.
     * @param accountNumber The number of the account to withdraw from.
     * @param amount The amount to withdraw.
     * @param date The date of the withdrawal.
     */
    void makeWithdrawal(long long accountNumber, double amount, Date date);

    /**
     * @brief Retrieves a pointer to an account based on its number.
     * @param accountNumber The number of the account to retrieve.
     * @return Pointer to the Account object, or nullptr if not found.
     */
    Account *getAccount(long long accountNumber);
};

#endif
