#include "Die.h"

#include <string>
using namespace std;
Die::Die(int sides) : sides(sides), faceValue(1) {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
}

void Die::roll() {
    faceValue = std::rand() % sides + 1;
}

int Die::getFaceValue() const {
    return faceValue;
}

void Die::setFaceValue(int value) {
    if (value >= 1 && value <= sides)
        faceValue = value;
}



