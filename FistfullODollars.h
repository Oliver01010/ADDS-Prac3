#ifndef H_Ffu
#define H_Ffu

#include "Computer.h"


class FistfullODollars : public Computer {
public:
    FistfullODollars();

    // this make move will have a variable which is the count of how many turns it has had, mod that to 3 then convert it to the pattern of P S R
    char makeMove();

private:
    int totalTurns;

};


#endif