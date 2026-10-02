#include <iostream>
#include <string>
#include <vector>
#include <cctype>

const int MAX_NUMBERS = 25;

bool convertOperand(const std::string& word, std::vector<int>& num) {
    if (word.size() > MAX_NUMBERS || word.empty()) {
        return false;
    }

    for (int& val : num) {
        val = 0;
    }

    int limit = static_cast<int>(word.size());

    for (int i = 0; i < limit; i++) {
        if (!isdigit(word.at(i))) {
            return false;
        }
        num.at(i) = word[limit - 1 - i] - '0';
    }
    return true;
}

bool lessThan(const std::vector<int>& op1, const std::vector<int>& op2) {
    for (int i = MAX_NUMBERS - 1; i >= 0; i--) {
        if (op1.at(i) < op2.at(i)) {
            return true;
        } else if (op1.at(i) > op2.at(i)) {
            return false;
        }
    }
    return false;
}

bool addOperands(const std::vector<int>& number1, const std::vector<int>& number2, std::vector<int>& result) {
    int carry = 0;

    for (int& val : result) {
        val = 0;
    }

    for (int i = 0; i < MAX_NUMBERS; i++) {
        int sum = number1.at(i) + number2.at(i) + carry;
        result.at(i) = sum % 10;
        carry = sum / 10;
    }

    if (carry > 0) {
        return false;
    }
    return true;
}

bool subOperands(const std::vector<int>& number1, const std::vector<int>& number2, std::vector<int>& result) {
    if (lessThan(number1, number2)) {
        return false;
    }

    int borrow = 0;
    for (int& val : result) {
        val = 0;
    }

    for (int i = 0; i < MAX_NUMBERS; i++) {
        int diff = number1.at(i) - number2.at(i) - borrow;
        
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result.at(i) = diff;
    }

    return true;
}

void outputResult(const std::vector<int>& result) {
    bool leadingZero = true;

    for (int i = MAX_NUMBERS - 1; i >= 0; i--) {
        if (result.at(i) != 0) {
            leadingZero = false;
        }

        if (!leadingZero) {
            std::cout << result.at(i);
        }
    }
    if (leadingZero) {
        std::cout << 0;
    }
}

int main() {
    std::string number1;
    std::string signOperator;
    std::string number2;

    while (true) {
        std::cout << "Enter an expression -->  ";
        std::cin >> number1 >> signOperator >> number2;

        if (number1 == "0" && signOperator == "%" && number2 == "0") {
            std::cout << "Thank you for using my program." << std::endl;
            break;
        }

        if (signOperator != "+" && signOperator != "-") {
            std::cout << "Invalid operator." << std::endl << std::endl;
            continue;
        }

        std::vector<int> number1Vector(MAX_NUMBERS, 0);
        std::vector<int> number2Vector(MAX_NUMBERS, 0);
        std::vector<int> resultVector(MAX_NUMBERS, 0);

        bool number1Valid = convertOperand(number1, number1Vector);
        bool number2Valid = convertOperand(number2, number2Vector);

        if (!number1Valid || !number2Valid) {
            std::cout << "Invalid operand(s).\n\n";
            continue;
        }

        if (signOperator == "+") {
            bool success = addOperands(number1Vector, number2Vector, resultVector);
            if (success) {
                std::cout << number1 << " + " << number2 << " = ";
                outputResult(resultVector);
                std::cout << std::endl;
            } else {
                std::cout << number1 << " + " << number2 << " = overflow\n";
            }
        } 
        else if (signOperator == "-") {
            bool success = subOperands(number1Vector, number2Vector, resultVector);
            if (success) {
                std::cout << number1 << " - " << number2 << " = ";
                outputResult(resultVector);
                std::cout << std::endl;
            } else {
                std::cout << number1 << " - " << number2 << " = result is negative\n";
            }
        }

        if (lessThan(number1Vector, number2Vector)) {
            std::cout << "First operand is less than second operand.\n\n";
        } else {
            std::cout << "First operand is not less than second operand.\n\n";
        }
    }

    return 0;
}