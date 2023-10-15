#ifndef CLI_H
#define CLI_H

#pragma once

#include <iostream>

using namespace std;

#include "Account.h"
#include "Bank.h"

void showActionOptions();
void showCustomerTypeOptions();
void showAccountTypeOptions();
bool isValidOptionSelection(string choice, int  maxOptions);

void handleAddAccountChoice(Bank* bank);

#endif