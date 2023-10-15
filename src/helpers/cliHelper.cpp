#include <iostream>
#include <exception>

#include "Bank.h"
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "Student.h"
#include "Senior.h"
#include "Adult.h"
#include "Helpers/cliHelper.h"

void showActionOptions()
{
    cout << "Choose an option from below:" << endl;
    cout << "0: Add an account" << endl;
    cout << "1: Deposit money" << endl;
    cout << "2: Withdraw money" << endl;
    cout << "3: Show Account Summary" << endl;
    cout << "4: Exit" << endl;
    cout << endl;
};

void showCustomerTypeOptions()
{
    cout << "Select :" << endl;
    cout << "0: Senior" << endl;
    cout << "1: Adult" << endl;
    cout << "2: Student" << endl;
    cout << endl;
};

void showAccountTypeOptions()
{
    cout << "Select :" << endl;
    cout << "0: Chequing" << endl;
    cout << "1: Savings" << endl;
    cout << endl;
};

bool isValidOptionSelection(string choice, int maxOptions)
{
    try
    {
        int selectedOption = stoi(choice);
        if (selectedOption >= 0 && selectedOption < maxOptions)
        {
            return true;
        }
        return false;
    }
    catch (const exception &e)
    {
        return false;
    }
};

void handleAddAccountChoice(Bank* bank)
{
    string name, address;
    int age;
    long int number;

    cout << "Enter Customer Name: ";
    cin >> name;

    cout << "Enter Customer Address: ";
    cin >> address;

    cout << "Enter Customer Age: ";
    cin >> age;

    cout << "Enter Customer Phone Number: ";
    cin >> number;

    // Collect Customer type choice
    showCustomerTypeOptions();
    Customer *newCustomer = nullptr;

    while (true)
    {
        string customerTypeChoice;
        cin >> customerTypeChoice;

        bool isValidChoice = isValidOptionSelection(customerTypeChoice, 3);
        if (!isValidChoice)
        {
            cout << "Please enter a valid input" << endl;
            continue;
        }

        int selectedCustomerTypeOption = stoi(customerTypeChoice);

        switch (selectedCustomerTypeOption)
        {
        case 0:
            newCustomer = new Senior(name, address, age, number);
            break;
        case 1:
            newCustomer = new Adult(name, address, age, number);
            break;
        case 2:
            newCustomer = new Student(name, address, age, number);
            break;
        }
        break;
    };

    // Collect Account type choice
    showAccountTypeOptions();
    Account *newAccount = nullptr;

    while (true)
    {
        string accountTypeChoice;
        cin >> accountTypeChoice;

        bool isValidChoice = isValidOptionSelection(accountTypeChoice, 2);
        if (!isValidChoice)
        {
            cout << "Please enter a valid input" << endl;
            continue;
        }

        int selectedAccountTypeOption = stoi(accountTypeChoice);

        switch (selectedAccountTypeOption)
        {
        case 0:
            newAccount = new CheckingAccount();
            break;
        case 1:
            newAccount = new SavingsAccount();
            break;
        }
        break;
    };

    bank->addAccount(newAccount);
    cout << "Account :" << newAccount->getAccounNumber() << " added" << endl;

    return;
}
