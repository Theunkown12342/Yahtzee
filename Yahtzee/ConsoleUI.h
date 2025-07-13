#ifndef CONSOLEUI
#define CONSOLEUI 
#include <iostream>
#include <vector>
using namespace std;
class ConsoleUI
{
private:
	void clearConsole()const;
public:
	void displayWelcomeMessage() const;
	void displayScoreCard( vector<int>& scores)const;
	void displayDiceRoll(vector<int>& dice)const;
	void proptReroll(vector<bool>& rerollChoices) const;
	void promptCategoryChoice(int& category)const;
	void showFinalScore( vector<int>& scores)const;
	void displayMessage(const string&msg ) const;

};
#endif

