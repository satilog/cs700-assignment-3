#include <iostream>
#include <uuid/uuid.h>

using namespace std;

#include "Helpers/cliHelper.h"
#include "Bank.h"
#include "Helpers/Date.h"

int main()
{
    Bank *bank = new Bank();

    while (true)
    {
        showActionOptions();
        string actionOptionChoice;
        cin >> actionOptionChoice;

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
    // const account = new Account();
};