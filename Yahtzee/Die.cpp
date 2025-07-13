#include "Die.h"

#include <string>
using namespace std;
Die::Die() { numberOfSides = 6; faceValue = 1; };
void Die::setNumofSides(int s) {
	numberOfSides = s;
}
void Die::setfaceValue(int v) {
	faceValue = v;
}
int Die::getNumofSides() const {
	return numberOfSides;
}
int Die::getfaceValue()const {
	return faceValue;
}
void Die::roll() {
	faceValue = rand() % numberOfSides + 1;
}
string Die::displayDice() const
{
	return "Dice with " + to_string(numberOfSides) +
		" sides showing " + to_string(faceValue);

