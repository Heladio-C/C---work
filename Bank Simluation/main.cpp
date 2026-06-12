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

   cout << endl;
   cout << account.GetName() << endl;
   cout << fixed << setprecision(2);
   cout << account.GetChkBalance() << endl;
   cout << account.GetSavBalance() << endl;


   MyBankAccount myAccount("Heladio", 500.00, 1000.0, 5.00);
   myAccount.SetChkBalance(500);
   myAccount.SetSavBalance(500);
   myAccount.WithdrawSavings(100);
   myAccount.WithdrawChecking(100);
   myAccount.TransferToChecking(300);
   cout << endl;


   cout << "Modififed by: Heladio Climaco" << endl << endl;
   cout << myAccount.GetName() << endl;
   cout << fixed << setprecision(2);
   cout << myAccount.GetChkBalance() << endl;
   cout << myAccount.GetSavBalance() << endl;

   return 0;
}