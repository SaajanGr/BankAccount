#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <iostream>
#include <string>

using namespace std;
class BankAccount
{
    private:
        double balance;

        string accountNum;

    public:
         
        BankAccount();

       
        BankAccount(string acct, double a);


        void deposit(double amount);

        void withdraw(double amount);

        double get_balance();

        void display_balance();

        void set_account_number(string n);
        string get_account_number();
};
#endif