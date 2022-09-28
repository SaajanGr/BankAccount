#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "BankAccount.h"
#include<string>
using namespace std;
class SavingsAccount : public BankAccount
{
    private:
        double interest_rate;
        double min_balance;

    public:
        SavingsAccount();
        SavingsAccount(string acctNum, double b, double i);
        void withdraw(double amount);
        void set_interest_rate(double i);
        double get_interest_rate();
        void display_balance();
        void month_end();
};
#endif