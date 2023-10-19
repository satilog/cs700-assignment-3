/**
 * @file Transaction.h
 * @brief Defines the Transaction class
 * @author Sathyajit Loganathan
 * @date Created on current date
 * 
 * This file contains the Transaction class definition which is used to
 * represent and process various types of transactions.
 */

#ifndef TRANSACTION_H
#define TRANSACTION_H

#pragma once

#include "Helpers/Date.h"

using namespace std;

/**
 * @class Transaction
 * @brief Represents a financial transaction.
 *
 * This class is responsible for storing details about specific transactions,
 * including the type, amount, resulting balance, and the date of transaction.
 */
class Transaction
{
private:
    string transactionType; ///< The type of the transaction (e.g., deposit, withdraw).
    double amount;          ///< The amount of money involved in the transaction.
    double balance;         ///< The balance after the transaction has been processed.
    Date date;              ///< The date when the transaction occurred.

public:
    /**
     * @brief Constructs a new Transaction object.
     *
     * This constructor initializes a Transaction with the provided parameters.
     * It also calculates and sets the new balance based on the transaction type.
     *
     * @param transactionType The type of the transaction.
     * @param amount The amount involved in the transaction.
     * @param previousBalance The balance before the transaction.
     * @param date The date of the transaction.
     */
    Transaction(string transactionType, double amount, double previousBalance, Date date);
    
    /**
     * @brief Gets the transaction type.
     * 
     * @return The transaction type as a string.
     */
    string getTransactionType();

    /**
     * @brief Gets the date of the transaction.
     * 
     * @return The date of the transaction.
     */
    Date getDate();

    /**
     * @brief Converts the transaction details to a string format.
     * 
     * This method is used for easy display of the transaction details.
     *
     * @return A string containing the formatted transaction details.
     */
    string toString();
};

#endif
