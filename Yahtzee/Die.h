#ifndef DIE
#define DIE
#include <iostream>
class Die
{

    public:
        Die(int sides = 6);
        void roll();
        int getFaceValue() const;
        void setFaceValue(int value);
    private:
        int sides;
        int faceValue;
    };


#endif

