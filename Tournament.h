#ifndef H_Tour
#define H_Tour

#include "Player.h"
#include <string>
#include <array>

class Tournament {
public:
    Tournament();

    Player * Tournament::run(std::array<Player *, 8>  competitors);

private:


};

#endif