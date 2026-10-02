#include <iostream>
#include <iomanip>
#include "BankAccount.h"
using namespace std;

int main() {
   BankAccount account("Mickey", 500.00, 1000.00);
   account.SetChkBalance(500);
   account.SetSavBalance(500);
   account.WithdrawSavings(100);
   account.WithdrawChecking(100);
   account.TransferToChecking(300);

   cout << "Name: " << account.GetName() << endl;
   cout << fixed << setprecision(2);
   cout << "Checking account Balance: " << account.GetChkBalance() << endl;
   cout << "Savinging account Balance: " << account.GetSavBalance() << endl;

   return 0;
}