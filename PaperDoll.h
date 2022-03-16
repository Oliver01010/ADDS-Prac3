#ifndef H_Pap
#define H_Pap

#include "Computer.h"


class PaperDoll : public Computer {
public:
    PaperDoll();

    // this make move will have a variable which is the count of how many turns it has had, mod that to 3 then convert it to the pattern of P S R
    char makeMove();

private:
    int totalTurns;

};


#endif