/**
 * @file Account.h
 * @brief Contains the Account class declaration.
 * @author Sathyajit Loganathan
 * @date Oct 10 02:16:41 2023
 */

#ifndef ACCOUNT_H
#define ACCOUNT_H

#pragma once

#include <string>
#include <vector>
#include "Helpers/Date.h"
#include "Customer.h"
#include "Transaction.h"

using namespace std;

/**
 * @class Account
 * @brief Represents a bank account.
 */
class Account
{
protected:
    Customer* customer; ///< Pointer to the customer who owns the account.
    int accountNumber; ///< Account number.
    double balance; ///< Account balance.
    vector<Transaction*> transactions; ///< List of transactions.
    string accountType; ///< Type of the account.

public:
    /**
     * @brief Constructor initializing the account with a customer.
     * @param customer Pointer to the customer.
     */
    Account(Customer* customer);
    
    /**
     * @brief Destructor to cleanup the allocated resources.
     */
    virtual ~Account();

    /**
     * @brief Creates an account for a customer.
     * @param customer Pointer to the customer.
     */
    void createAccount(Customer* customer);

    /**
     * @brief Retrieves the account number.
     * @return Account number.
     */
    int getAccounNumber();

    /**
     * @brief Retrieves the account balance.
     * @return Account balance.
     */
    double getBalance();

    /**
     * @brief Retrieves the pointer to the customer who owns the account.
     * @return Pointer to the customer.
     */
    Customer* getCustomer();

    /**
     * @brief Retrieves the type of the account.
     * @return Account type as a string.
     */
    string getAccountType();

    /**
     * @brief Sets a new balance for the account.
     * @param newBalance New balance to be set.
     */
    void setBalance(double newBalance);

    /**
     * @brief Sets a new customer for the account.
     * @param customer Pointer to the new customer.
     */
    void setCustomer(Customer* customer);

    /**
     * @brief Deducts the check charge from the account.
     */
    void deductCheckCharge();

    /**
     * @brief Retrieves the date of the last transaction.
     * @return Date of the last transaction.
     */
    Date getLastTransactionDate();
    
    /**
     * @brief A virtual function to deposit money into the account.
     * @param amount The amount of money to be deposited.
     * @param date The date of the transaction.
     */
    virtual void deposit(double amount, Date date) = 0;

    /**
     * @brief A virtual function to withdraw money from the account.
     * @param amount The amount of money to be withdrawn.
     * @param date The date of the transaction.
     */
    virtual void withdraw(double amount, Date date) = 0;

    /**
     * @brief A virtual function to add interest to the account.
     */
    virtual void addInterest() = 0;

    /**
     * @brief Converts the account details into a string format.
     * @return A string representation of the account.
     */
    string toString();
};

#endif
