#include "Computer.h"
#include "FistfullODollars.h"


FistfullODollars::FistfullODollars() {
    totalTurns = 0;
}

char FistfullODollars::makeMove() {
    totalTurns = totalTurns % 3;

    if (totalTurns == 0) {
        // increment the amount of turns it has had
        totalTurns += 1;
        return 'R';
    } else if (totalTurns == 1) {
        totalTurns += 1;
        return 'P';
    } else if (totalTurns == 2) {
        totalTurns += 1;
        return 'P';
    } else {
        // else if it failed itll return f for failed
        return 'F';
    }
}