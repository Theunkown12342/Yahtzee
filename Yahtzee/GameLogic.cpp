#include "GameLogic.h"


#include <iostream>
using namespace std;

GameLogic::GameLogic() : totalScore(0) {
    std::fill(std::begin(categoriesUsed), std::end(categoriesUsed), false);
    for (Die& d : dice) d.roll();
}

void GameLogic::playTurn() {
    for (Die& d : dice) d.roll();
}

void GameLogic::displayDice() const {
    std::cout << "Dice: ";
    for (const Die& d : dice)
        std::cout << d.getFaceValue() << " ";
    std::cout << "\n";
}

void GameLogic::rerollDice(const bool keepFlags[5]) {
    for (int i = 0; i < 5; ++i)
        if (!keepFlags[i]) dice[i].roll();
}

bool GameLogic::isGameOver() const {
    for (bool used : categoriesUsed)
        if (!used) return false;
    return true;
}

bool GameLogic::isCategoryUsed(int category) const {
    return categoriesUsed[category];
}

void GameLogic::markCategoryUsed(int category) {
    categoriesUsed[category] = true;
}

int GameLogic::calculateScore(int category) const {
    int target = category + 1;
    int sum = 0;
    for (const Die& d : dice)
        if (d.getFaceValue() == target) sum += target;
    return sum;
}

int GameLogic::getTotalScore() const {
    return totalScore;
}



