#ifndef CONSOLEUI
#define CONSOLEUI 
#include <iostream>
#include <vector>
using namespace std;
class ConsoleUI
{
public:
    void displayWelcome() const;
    void displayDicePrompt(const int values[5]) const;
    void getRerollFlags(bool flags[5]) const;
    int getCategoryChoice() const;
    void showFinalScore(int score) const;
    bool promptPlayAgain() const;






};
#endif







