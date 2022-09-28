#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;


BankAccount::BankAccount()
{
    balance = 0;
    accountNum = "NA";
}


BankAccount::BankAccount(string acct, double a)
{
    accountNum = acct;
    balance = a;
}

//adds money to account
void BankAccount::deposit(double amount)
{
    balance += amount;
}

void BankAccount::withdraw(double amount)
{
    if (balance >= amount)
    {
        balance -= amount;
    }
    else
    {
        cout << "** Not enouh fund in account " << accountNum << " : Current balance : " << balance << " Withdraw " << amount << endl;
    }
}

double BankAccount::get_balance()
{
    return balance;
}

void BankAccount::display_balance()
{
    cout << "\nAccount  " << accountNum << " balance is " << balance << endl;
    ;
}

void BankAccount::set_account_number(string n)
{
    this->accountNum = n;
}
string BankAccount::get_account_number()
{
    return this->accountNum;
}