// inherits from computer but makes a random move
#ifndef H_RandComp
#define H_RandComp

#include "Computer.h"

class RandomComputer : public Computer {

public:
    RandomComputer();

    char makeMove();

private:
    int randNum;

};


#endif