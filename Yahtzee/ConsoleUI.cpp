#include "ConsoleUI.h"
using namespace std;
void ConsoleUI::displayWelcomeMessage() const
{
	cout << " Welcome to Yahtzee!" << endl;
	cout << " Get ready to roll some dice!!!!! " << endl;
}
void ConsoleUI::displayScoreCard(vector<int>& scores)const
{
	cout << " This is the score card " << endl;
	for (size_t i = 0; i < scores.size(); i++) {
		cout << " Category " << i << ": " << scores[i] << endl;
	}
}
void ConsoleUI::displayDiceRoll(vector<int>& dice)const {
	cout << "Your current Dice" << endl;
	for (int value : dice)
		cout << "[ " << value << "]" << endl;
	
}
void ConsoleUI::proptReroll(vector<bool>& rerollChoices) const
{
	cout << "Please select Y to reroll each dice, or press N to keep your roll" << endl;
	for (size_t i = 0; i < rerollChoices.size(); i++) {
		char input;
		cout << "Dice " << i + 1 << "; ";
		cin >> input;
	}
}
void ConsoleUI:: promptCategoryChoice(int& category)const {
	cout << "Pleas select a category to score (0-12): ";
	cin >> category;
}
void ConsoleUI::showFinalScore(vector<int>& scores)const
{
	cout << "The final scores are: " << endl;
	displayScoreCard(scores);
	cout << "Thanks for playing Yahtzee!!!" << endl;
}
void ConsoleUI:: displayMessage(const string& msg) const
{
	cout << msg << endl;
}
