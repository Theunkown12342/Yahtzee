#ifndef DIE
#define DIE
#include <iostream>
class Die
{
private:
	int numberOfSides;
	int faceValue;
public:
	Die();
	void setNumofSides(int s);
	void setfaceValue(int v);
	int getNumofSides() const;
	int getfaceValue() const;
	void roll();
	std::string displayDice() const;
};
#endif

