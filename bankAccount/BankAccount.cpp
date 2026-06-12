#include <iostream>
#include "BankAccount.h"
using namespace std;

// TODO: Define public member functions

//BankAccount::BankAccount() : customerName(""), checkingBalance(0.0), savingBalance(0.0); 

BankAccount::BankAccount(string newName, double chBalance, double sBalance) : customerName(newName), checkingBalance(chBalance), savingBalance(sBalance){}


//setters 

void BankAccount::SetName(string newName){
   customerName = newName;
}

void BankAccount::SetChkBalance(double balance){
   checkingBalance = balance;
}

void BankAccount::SetSavBalance(double balance){
   savingBalance = balance;
}

//getters 

string BankAccount::GetName() const {
   return customerName;
}

double BankAccount::GetChkBalance() const {
   return checkingBalance;
}

double BankAccount::GetSavBalance() const {
   return savingBalance;
}

//functions

void BankAccount::DepositChecking(double amt){
   if(amt > 0.0){
      checkingBalance += amt;
   }
}

void BankAccount::DepositSavings(double amt){
   if(amt > 0.0){
      savingBalance += amt;
   }
}

void BankAccount::WithdrawChecking(double amt){
   if(amt > 0.0){
      checkingBalance -= amt;
   }
}

void BankAccount::WithdrawSavings(double amt){
   if(amt > 0.0){
      savingBalance -= amt;
   }
}

void BankAccount::TransferToChecking(double amt){
   if(amt > 0.0){
      savingBalance -= amt;
      checkingBalance += amt;
   }
}