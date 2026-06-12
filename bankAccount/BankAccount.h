#ifndef BANKACCOUNTH
#define BANKACCOUNTH

#include <string>
using namespace std;

class BankAccount {
   public:
      // TODO: Declare public member functions
      //BankAccount();
      BankAccount(string newName, double chBalance, double sBalance);

      //setters
      void SetName(string newName);
      void SetChkBalance(double balance);
      void SetSavBalance(double balance);

      //getters
      string GetName() const;
      double GetChkBalance() const;
      double GetSavBalance() const;
      
      //
      void DepositChecking(double amt);
      void DepositSavings(double amt);
      
      void WithdrawChecking(double amt);
      void WithdrawSavings(double amt);
      void TransferToChecking(double amt);
      
   
   private:
      // TODO: Declare private data members
      string customerName;
      double savingBalance;
      double checkingBalance;
};

#endif