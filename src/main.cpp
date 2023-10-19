/**
 * @file main.cpp
 * @author Sathyajit Loganathan
 * @brief Main program to manage bank operations.
 *
 * This file contains the main program, which is used for creating and managing bank accounts,
 * as well as performing transactions like deposit, withdraw, and check account status.
 */

#include <iostream>
#include <uuid/uuid.h>

using namespace std;

#include "Helpers/cliHelper.h"
#include "Bank.h"
#include "Helpers/Date.h"

/**
 * @brief Main function.
 *
 * Initiates the bank management program and handles user input for various operations.
 *
 * @return int Execution status.
 */
int main()
{
    Bank *bank = new Bank(); // Creating an instance of the Bank class.

    // Infinite loop to keep the menu running until the user decides to exit.
    while (true)
    {
        showActionOptions();
        string actionOptionChoice;
        cin >> actionOptionChoice;

        // Validating the user's choice.
        bool isValidChoice = isValidOptionSelection(actionOptionChoice, 5);
        if (!isValidChoice)
        {
            cout << "Please enter a valid input" << endl;
            cout << endl;
            continue;
        }
        int selectedActionOption = stoi(actionOptionChoice);

        if (selectedActionOption == 4)
        {
            break;
        }

        // Switch case to handle different options selected by the user.
        switch (selectedActionOption)
        {
        case 0:
            handleAddAccountChoice(bank);
            break;
        case 1:
            handleMakeDepositChoice(bank);
            break;
        case 2:
            handleMakeWithdrawChoice(bank);
            break;
        case 3:
            handleCheckAccountChoice(bank);
            break;
        default:
            break;
        }
    }
    return;
};
