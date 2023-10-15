#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#pragma once

using namespace std;

#include "Account.h"

class CheckingAccount : public Account
{
private:
public:
    CheckingAccount();
    virtual ~CheckingAccount();
    
    void addInterest();
};

#endif