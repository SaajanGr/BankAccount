#include<iostream>
#include<string>
#include "BankAccount.h"
#include "SavingsAccount.h"
using namespace std;




SavingsAccount::SavingsAccount()
{
    interest_rate = 0;
    min_balance = 0;
}
SavingsAccount::SavingsAccount(string acctNum, double b, double i) : BankAccount(acctNum, b)
{
    interest_rate = i;
    min_balance = b;
}
void SavingsAccount::withdraw(double amount)
{
    BankAccount::withdraw(amount);
    min_balance = BankAccount::get_balance();
}
void SavingsAccount::set_interest_rate(double i)
{
    interest_rate = i;
}
double SavingsAccount::get_interest_rate()
{
    return interest_rate;
}
void SavingsAccount::display_balance()
{
    cout << "Saving Account  " << BankAccount::get_account_number() << " : ";
    cout << "Interest rate " << interest_rate << endl;
    cout << "Account : " << BankAccount::get_account_number() << " Balance is " << min_balance << endl << endl;
}
void SavingsAccount::month_end()
{
    double interest_earned = min_balance * interest_rate / 100;
    BankAccount::deposit(interest_earned);
    min_balance = BankAccount::get_balance();
}