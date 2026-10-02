#include <iostream>



int main(){

    double taxRate;
    int grossIncome;
    double taxAmount;

    std::cout << "Please input your gross income: ";
    std::cin >> grossIncome;

    if(grossIncome <= 23200){
        taxRate = 0.1;
        taxAmount = grossIncome * 0.1;

        std::cout << "tax amount of $" << taxAmount << " and effecitveTaxRate of 10.00%" << std::endl;
    } else if (grossIncome <= 94300){

        taxRate = 0.12;
        taxAmount = 2320 + (grossIncome * taxRate);

    } else if(grossIncome <= 201050){


        
    }



    return 0;
}