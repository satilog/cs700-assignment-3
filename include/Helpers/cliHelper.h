/**
 * @file cliHelper.h
 * @brief Header file containing the declarations for the helper functions for the CLI interface.
 * @author Sathyajit Loganathan
 * @date Oct 10 02:16:41 2023
 */

#ifndef CLI_H
#define CLI_H

#pragma once

#include <iostream>
#include "Account.h"
#include "Bank.h"

using namespace std;

/**
 * @brief Displays the available actions to the user.
 */
void showActionOptions();

/**
 * @brief Displays the customer type options to the user.
 */
void showCustomerTypeOptions();

/**
 * @brief Displays the account type options to the user.
 */
void showAccountTypeOptions();

/**
 * @brief Validates the user's option selection.
 * @param choice The user's choice as a string.
 * @param maxOptions The maximum number of available options.
 * @return true if the selection is valid, false otherwise.
 */
bool isValidOptionSelection(string choice, int maxOptions);

/**
 * @brief Handles the user's choice to add an account.
 * @param bank A pointer to the Bank object.
 */
void handleAddAccountChoice(Bank* bank);

/**
 * @brief Handles the user's choice to make a deposit.
 * @param bank A pointer to the Bank object.
 */
void handleMakeDepositChoice(Bank* bank);

/**
 * @brief Handles the user's choice to make a withdrawal.
 * @param bank A pointer to the Bank object.
 */
void handleMakeWithdrawChoice(Bank* bank);

/**
 * @brief Handles the user's choice to check an account.
 * @param bank A pointer to the Bank object.
 */
void handleCheckAccountChoice(Bank* bank);

#endif
