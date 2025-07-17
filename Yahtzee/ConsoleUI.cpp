#include "ConsoleUI.h"
using namespace std;


void ConsoleUI::displayWelcome() const {
    std::cout << " Welcome to Yahtzee!\n";
}

void ConsoleUI::displayDicePrompt(const int values[5]) const {
    std::cout << "Dice: ";
    for (int i = 0; i < 5; ++i)
        std::cout << "[" << values[i] << "] ";
    std::cout << "\n";
}

void ConsoleUI::getRerollFlags(bool flags[5]) const {
    std::cout << "Enter 1 to keep or 0 to reroll each die:\n";
    for (int i = 0; i < 5; ++i) {
        int input;
        std::cout << "Die " << i + 1 << ": ";
        std::cin >> input;
        flags[i] = (input == 1);
    }
}

int ConsoleUI::getCategoryChoice() const {
    std::cout << "Choose a scoring category:\n";
    std::cout << "0. Aces\n1. Twos\n2. Threes\n3. Fours\n4. Fives\n5. Sixes\n";
    int choice;
    std::cin >> choice;
    return choice;
}

void ConsoleUI::showFinalScore(int score) const {
    std::cout << " Final Score: " << score << "\n";
}

bool ConsoleUI::promptPlayAgain() const {
    char response;
    std::cout << "Play again? (y/n): ";
    std::cin >> response;
    return (response == 'y' || response == 'Y');
}

