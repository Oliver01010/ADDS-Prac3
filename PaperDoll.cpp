#include "Computer.h"
#include "PaperDoll.h"


PaperDoll::PaperDoll() {
    totalTurns = 0;
}

char PaperDoll::makeMove() {
    totalTurns = totalTurns % 3;

    if (totalTurns == 0) {
        // increment the amount of turns it has had
        totalTurns += 1;
        return 'P';
    } else if (totalTurns == 1) {
        totalTurns += 1;
        return 'S';
    } else if (totalTurns == 2) {
        totalTurns += 1;
        return 'S';
    } else {
        // else if it failed itll return f for failed
        return 'F';
    }
}