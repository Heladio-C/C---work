#include <iostream>
#include <string>

void revPrintString(const std::string& name);
void revPrintInt(size_t i);
void revPrintSentence(const std::string& sentence);


int main() {

    std::string word = "";
    std::string sentence = "";
    int number;

    std::cout << "Enter a word to reverse: ";
    std::cin >> word;

    std::cout << "This is your word in reverse: ";
    revPrintString(word);
    std::cout << std::endl;

    std::cout << "Enter a number to reverse: ";
    std::cin >> number;
    std::cout << "This is your number in reverse: ";
    revPrintInt(number);
    std::cout << std::endl;

    std:: cout << "Enter a sentence to reverse";
    std::cin.ignore();
    std::getline(std::cin, sentence);
    

    return 0;


}


void revPrintString(const std::string& name) {

    if(name.length() == 0) return;
     
    else {
        std::cout << name[name.length() - 1];
        revPrintString(name.substr(0, name.length() - 1));
    }   

}

void revPrintInt(size_t i) {
    if(i == 0){
        std::cout << "0";
        return ;
    } 

    else{
        std::cout << i % 10;
        revPrintInt(i / 10);
    }
    
}


 void revPrintSentence(const std::string& sentence) {
    if (sentence.length() == 0) return;

    else {
        //this prints out a single character starting at the very end
        std::cout << sentence[sentence.length() - 1];
        //next call the method again this time with the substring in the parameter staring at 0 and ending with a letter short 
        revPrintSentence(sentence.substr(0, sentence.length() - 1));
    }
 }