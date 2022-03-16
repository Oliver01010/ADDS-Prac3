
#include "Tournament.h"
#include "Player.h"
#include "Referee.h"


#include <string>
#include <array>
#include <iostream>
using namespace std;


Tournament::Tournament() {

}

// my tournament function
// each game is 5 rounds who ever wins the most moves on
// if its a draw return the lower index player
// refresh player memorys between rounds

Player * Tournament::run(array<Player *, 8>  competitors) {

    Referee ref = Referee();

    int p1Wins = 0;
    int p2Wins = 0;
    char res;

    // for the arrays size
    int round2Size = 0;
    int round3Size = 0;

    Player** round2Competitors = new Player*[4];
    Player** round3Competitors = new Player*[2];


    // first round go through all of the matches one at a time
    for (int i = 0; i < 8; i += 2) {
        
        
        // reset these variables for each game that is played
        p1Wins = 0;
        p2Wins = 0;

        // Play the games of 5 rounds
        for (int game = 0; game < 5; game++) {
            res = ref.refGame(competitors[i], competitors[i+1]);

            // see who wins
            if (res == 'W') {
                p1Wins += 1;
            } else if (res == 'L'){
                p2Wins += 1;
            } else if (res == 'T'){
                continue;
            }
        }

        // end of the game see who advances
        if (p1Wins > p2Wins || p1Wins == p2Wins) {
            // p1 advances ebcause they win or draw and theyll have the lower index
            round2Competitors[round2Size] = competitors[i];
        } else if (p2Wins > p1Wins) {
            // p2 advances
            round2Competitors[round2Size] = competitors[i+1];
        }
        // increase my array counter for the size
        round2Size++;
        
    }

    cout << "Finished Round 1" << endl;



    // second round (basically the same code)
    for (int i = 0; i < 4; i += 2) {
        
        
        // reset these variables for each game that is played
        p1Wins = 0;
        p2Wins = 0;

        // Play the games of 5 rounds
        for (int game = 0; game < 5; game++) {
            res = ref.refGame(round2Competitors[i], round2Competitors[i+1]);

            // see who wins
            if (res == 'W') {
                p1Wins += 1;
            } else if (res == 'L'){
                p2Wins += 1;
            } else if (res == 'T'){
                continue;
            }
        }

        // end of the game see who advances
        if (p1Wins > p2Wins || p1Wins == p2Wins) {
            // p1 advances ebcause they win or draw and theyll have the lower index
            round3Competitors[round3Size] = round2Competitors[i];
        } else if (p2Wins > p1Wins) {
            // p2 advances
            round3Competitors[round3Size] = round2Competitors[i+1];
        }
        // increase my array counter for the size
        round3Size++;
        
    }

    cout << "Finished Round 2" << endl;

    // final round 

    // reset these variables for each game that is played
    p1Wins = 0;
    p2Wins = 0;

    // Play the games of 5 rounds
    for (int game = 0; game < 5; game++) {
        res = ref.refGame(round3Competitors[0], round3Competitors[1]);

        // see who wins
        if (res == 'W') {
            p1Wins += 1;
        } else if (res == 'L'){
            p2Wins += 1;
        } else if (res == 'T'){
            continue;
        }

        // return the winner
        // end of the game see who advances
        if (p1Wins > p2Wins || p1Wins == p2Wins) {
            // p1 Wins
            return round3Competitors[0];
        } else if (p2Wins > p1Wins) {
            // p2 Wins
            return round3Competitors[1];
        }
    }



    

    

    // there would definetly be a faster way to make this so you can add as many players as you like and itll keep playing the games until someone wins but i couldnt think of it at the time
}
