#include "project.h"


void runGame() {

    displayMenu();

    char userInput;
    std::cout << "Would you like to play(y/n): ";

    while (true)
    {
        std::cin >> userInput;
        userInput = tolower(userInput);

        if (userInput == 'y') {
            gameLogic();
            break;
        } else if (userInput == 'n') {
            std::cout << "Exiting the game. Goodbye!" << std::endl;
            break;
        } else {
            std::cout << "Invalid input.\n" 
            << "Please enter 'y' to play or 'n' to exit: ";

            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

void displayMenu() {

    std::string menuItems[] {"1", "5", "Three 1's", "Three 2's", "Three 3's", "Three 4's", "Three 5's", "Three 6's", "1-2-3-4-5-6"};
    int scoreSystem[] {2, 5, 10, 20, 30, 40, 50, 60, 300};

    std::cout << "Welcome to muster!"<< std::endl;
    std::cout << "The first player to reach 1000 and exceed the other player's score, wins." << std::endl;
    std::cout << "Scoring:\n";
   
    for (size_t i = 0; i < 9; i++) {
        std::cout << 
        std::left << std::setw(10) << menuItems[i]
        << std::right << std::setw(6) << scoreSystem[i] << " points\n";
    }

    std::cout << "Would you like to play? (y/n): ";
}

void gameLogic() {
    // Placeholder for the main game logic
    std::cout << "Game logic goes here." << std::endl;
}