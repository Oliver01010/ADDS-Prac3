#ifndef H_Cre
#define H_Cre

#include "Computer.h"


class Crescendo : public Computer {
public:
    Crescendo();

    // this make move will have a variable which is the count of how many turns it has had, mod that to 3 then convert it to the pattern of P S R
    char makeMove();

private:
    int totalTurns;

};


#endif