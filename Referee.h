#ifndef H_02
#define H_02



#include "Computer.h"
#include "Human.h"
#include "Player.h"


class Referee {
public:
    Referee();
    char refGame(Player * p1, Player * p2);
};


#endif