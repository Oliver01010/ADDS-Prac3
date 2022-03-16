#ifndef H_Tour
#define H_Tour

#include "Player.h"
#include <string>


class Tournament {
public:
    Tournament();

    std::string run(Player * p1, Player * p2, Player * p3, Player * p4, Player * p5, Player * p6, Player * p7, Player * p8);

    Player * run(array<Player *, 8>  competitors)

private:


};

#endif