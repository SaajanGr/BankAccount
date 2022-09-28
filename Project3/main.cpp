#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "BankAccount.cpp"
#include "SavingsAccount.cpp"
#include "Checking.cpp"
using namespace std;


int main()
{
    vector<BankAccount> myAccount;
    double amount;
    BankAccount acc1;
    BankAccount acc2("S1002", 3000);
    CheckingAccount myChecking;
    SavingsAccount mySaving("S1001", 2500, 1.25);
    cout << fixed << setprecision(2);
    mySaving.set_account_number("S1001");
    mySaving.display_balance();
    acc1.set_account_number("S1000");
    acc2.set_account_number("S1002");
    acc1.deposit(2000);
    myAccount.push_back(acc1);
    myAccount.push_back(acc2);
    for (unsigned int n = 0; n < myAccount.size(); n++)
    {
        myAccount[n].display_balance();
    }
    string acctNum = "S1002";
    double withdrawAmt = 200;
    for (unsigned int n = 0; n < myAccount.size(); n++)
    {
        if (myAccount[n].get_account_number() == acctNum)
        {
            cout << "Withdraw $" << withdrawAmt << " from account " << acctNum << endl;
            myAccount[n].withdraw(withdrawAmt);
            myAccount[n].display_balance();
        }
    }
    myChecking.set_account_number("C1001");
    amount = 4500;
    cout << "Account " << myChecking.get_account_number() << " Deposit " << amount << endl;
    myChecking.deposit(amount);
    myChecking.display_balance();

    amount = 150;
    cout << "Account " << myChecking.get_account_number() << " Deposit " << amount << endl;
    myChecking.deposit(amount);
    myChecking.display_balance();

    amount = 100;
    cout << "Account " << myChecking.get_account_number() << " Deposit " << amount << endl;
    myChecking.withdraw(amount);
    myChecking.display_balance();

    amount = 550;
    cout << "Account " << myChecking.get_account_number() << " Deposit " << amount << endl;
    myChecking.withdraw(amount);
    myChecking.display_balance();

    cout << "\n Saving account month end \n";
    mySaving.display_balance();
    mySaving.month_end();
    mySaving.display_balance();
    amount = 4000;
    cout << "Account " << mySaving.get_account_number() << " Withdraw " << amount << endl;
    mySaving.withdraw(4000);
    mySaving.display_balance();
    return 0;
}