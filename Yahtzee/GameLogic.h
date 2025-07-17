#ifndef GAMELOGIC
#define GAMELOGIC
#include <iostream>
#include <vector>
#include "Die.h"
class GameLogic
{
public:
    GameLogic();
    void playTurn();
    bool isGameOver() const;
    int getTotalScore() const;

    void displayDice() const;
    void rerollDice(const bool keepFlags[5]);
    void markCategoryUsed(int category);
    bool isCategoryUsed(int category) const;
    int calculateScore(int category) const;

private:
    Die dice[5];
    bool categoriesUsed[6];
    int totalScore;




};
#endif

