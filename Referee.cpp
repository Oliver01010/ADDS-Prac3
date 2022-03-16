#include "Referee.h"



Referee::Referee() {

}

char Referee::refGame(Human p1, Computer p2){
    char p1Choice = p1.makeMove();
    char p2Choice = p2.makeMove();

    // check who wins and return the winner
    if ((p1Choice == 'R' && p2Choice == 'S') || 
        (p1Choice == 'P' && p2Choice == 'R') ||
        (p1Choice == 'S' && p2Choice == 'P')) {
            // Player 1 wins so return 'W'
            return 'W';
    } else 
    if ((p1Choice == 'R' && p2Choice == 'R') || 
        (p1Choice == 'P' && p2Choice == 'P') ||
        (p1Choice == 'S' && p2Choice == 'S')) {
            // Both chose the same so it is a draw return 'D'
            return 'T';
    } else
    if ((p1Choice == 'R' && p2Choice == 'P') || 
        (p1Choice == 'P' && p2Choice == 'S') ||
        (p1Choice == 'S' && p2Choice == 'R')) {
            // Player 1 Loses so return 'L'
            return 'L';
    }
    else {
        // if something goes wrong then ill return 'F' for failed
        return 'F';
    }

}