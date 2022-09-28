#ifndef CHECKING_H
#define CHECKING_H

#include<iostream>
#include<string>
#include "BankAccount.h"
using namespace std;

class CheckingAccount : public BankAccount
{
    private:
        int transactions;

        void check_for_fee();

    public:
        CheckingAccount();
        CheckingAccount(string acctNum, double b);
        void withdraw(double amount);
        void deposit(double amount);

        void month_end();
};
#endif