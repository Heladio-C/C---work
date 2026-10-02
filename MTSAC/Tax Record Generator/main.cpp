#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;
// Calculate AGI and repair any negative values
int CalcAGI(int wages, int interest, int unemployment) {
   wages = abs(wages);
   interest = abs(interest);
   unemployment = abs(unemployment);

   return wages + interest + unemployment;
}

// Calculate deduction depending on single, dependent or married
int GetDeduction(int status) {
   if(status == 1){
      return 12000;
   } else if (status == 2){
      return 24000;
   }

   return 6000;
}

// Calculate taxable but not allow negative results
int CalcTaxable(int agi, int deduction) {
   int taxable = agi - deduction;
   if(taxable < 0){
      return 0;
   }

   return taxable;
}

// Calculate tax for single or dependent
int CalcTax(int status, int taxable) {
   double tax = 0.0;
    
    if (status == 0 || status == 1) {
        if (taxable <= 10000) {
            tax = taxable * 0.10;
        } else if (taxable <= 40000) {
            tax = 1000 + (taxable - 10000) * 0.12;
        } else if (taxable <= 85000) {
            tax = 4600 + (taxable - 40000) * 0.22;
        } else {
            tax = 14500 + (taxable - 85000) * 0.24;
        }
    } 
    
    else if (status == 2) {
        if (taxable <= 20000) {
            tax = taxable * 0.10;
        } else if (taxable <= 80000) {
            tax = 2000 + (taxable - 20000) * 0.12;
        } else {
            tax = 9200 + (taxable - 80000) * 0.22;
        }
    }

    return static_cast<int>(round(tax));
}

// Calculate tax due and check for negative withheld
int CalcTaxDue(int tax, int withheld) {
   if(withheld < 0){
      withheld = 0;
   }

   return tax - withheld;
}
int main() {

    ifstream File("taxData.txt");

    if(!File.is_open()){
        cout << "Cant open the file." << endl;
        return -1;
    }




   int wages, interest, unemployment,status, withheld;
   int tax, agi, due, deduction, taxable;
   string name;

   // Step #1: Input information
   //cin >> wages >> interest >> unemployment >> status >> withheld;


   cout << "Modified by: Heladio Cliamco" << endl << endl;


    while(File >> name >> wages >> interest >> unemployment >> status >> withheld){

    
   cout << "Tax record for " << name << endl; 

   // Step #2: Calculate AGI
   agi = CalcAGI(wages, interest, unemployment);
   cout << "AGI: $" << agi << endl;

   deduction = GetDeduction(status);
   cout << "Deduction: $" << deduction << endl;

   taxable = CalcTaxable(agi, deduction);
   cout << "Taxable income: $" << taxable << endl;

   tax = CalcTax(status, taxable);
   cout << "Federal tax: $" << tax << endl;

   due = CalcTaxDue(tax, withheld);
   cout << "Tax due: $" << due << endl << endl;
    }
   return 0;
}