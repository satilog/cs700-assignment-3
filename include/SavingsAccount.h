#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#pragma once

using namespace std;

#include "Account.h"

class SavingsAccount : public Account
{
private:
public:
    SavingsAccount();
    virtual ~SavingsAccount();
    
    void addInterest();
};

#endif