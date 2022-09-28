#include<iostream>
#include<string>
#include "BankAccount.h"
#include "Checking.h"
using namespace std;
void CheckingAccount::check_for_fee()
{
    transactions++;

    const int FREE_TRANSACTIONS = 3;
    const int TRANSACTIONS_FEE = 1;

    if (transactions > FREE_TRANSACTIONS)
    {
        BankAccount::withdraw(TRANSACTIONS_FEE);
        cout << "Number of transactions: " << transactions << " is over free number of transactions of: " << FREE_TRANSACTIONS << endl;
        cout << "DEDUCT $ " << TRANSACTIONS_FEE << " from account\n";

        transactions = 0;
    }
}
CheckingAccount::CheckingAccount()
{
    transactions = 0;
}
CheckingAccount::CheckingAccount(string acctNum, double b) : BankAccount(acctNum, b)
{
    transactions = 0;
}
void CheckingAccount::withdraw(double amount)
{
    BankAccount::withdraw(amount);
    check_for_fee();
}
void CheckingAccount::deposit(double amount)
{
    BankAccount::deposit(amount);
    check_for_fee();
}

void CheckingAccount::month_end()
{
    transactions = 0;
}