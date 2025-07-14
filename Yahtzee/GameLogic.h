#ifndef GAMELOGIC
#define GAMELOGIC
#include <iostream>
#include <vector>
class GameLogic
{
	GameLogic();
private:
	int countOccurrences(vector<int>& dice, int value);
	bool isFullHouse(vector<int>& dice);
	bool isSmallStraight(vector<int>& dice);
	bool isLargestStraight(vector<int>& dice);
	bool isYahtzee(vector<int>& dice);

public:
	void rollDice(vector<int>& dice);
	void reRollDice(vector<int>& dice, vector<bool>& reroll);

	int calculatedScore(vector<int>& dice);
	bool isCategoryUsed(int category) const;
	void markCategoryUsed(int c);

	bool isGameOver() const;
	void resetGame();
};
#endif

