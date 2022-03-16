#ifndef H_01
#define H_01

#include "Player.h"

class Computer : public Player {
public:
    Computer();
    char makeMove();
};


#endif