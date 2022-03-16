// inherits from computer but makes a random move

#include "Computer.h"
#include "RandomComputer.h"
#include <stdlib.h>
#include <time.h>

RandomComputer::RandomComputer(){

}

char RandomComputer::makeMove() {

    //s eed
    srand (time(NULL));

    // get a random number 0, 1, 2
    randNum = rand() % 3;

    // convert to letters and return
    if (randNum == 0) {
        return 'R';
    } else if (randNum == 1) {
        return 'P';
    } else if (randNum == 2) {
        return 'S';
    } else {
        return 'F';
    }
}

