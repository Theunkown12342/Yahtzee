#include "GameLogic.h"
#include "ConsoleUI.h"
#include <iostream>
using namespace std;
int main() {
    ConsoleUI ui;
    bool playAgain;

    ui.displayWelcome();

    do {
        GameLogic game;

        while (!game.isGameOver()) {
            std::cout << "\n New Turn!\n";

            
            game.playTurn();
            game.displayDice();

            
            for (int i = 1; i <= 2; ++i) {
                bool keep[5];
                ui.getRerollFlags(keep);
                game.rerollDice(keep);
                std::cout << "After reroll " << i << ":\n";
                game.displayDice();
            }

            
            int category = ui.getCategoryChoice();

            while (game.isCategoryUsed(category)) {
                std::cout << " Category already used. Try another.\n";
                category = ui.getCategoryChoice();
            }

            int score = game.calculateScore(category);
            game.markCategoryUsed(category);

            std::cout << " Scored " << score << " points in that category!\n";
        }

        ui.showFinalScore(game.getTotalScore());
        playAgain = ui.promptPlayAgain();
    } while (playAgain);

    std::cout << " Thanks for playing Yahtzee!\n";
    return 0;
}

