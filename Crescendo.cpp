#include "Computer.h"
#include "Crescendo.h"


Crescendo::Crescendo() {
    totalTurns = 0;
}

char Crescendo::makeMove() {
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
        return 'R';
    } else {
        // else if it failed itll return f for failed
        return 'F';
    }
}