#include "Human.h"
#include <iostream>
using namespace std;

Human::Human() {

}

char Human::makeMove() {
    // get input from the user of RPS
    char playerChoice;
    cout << "Enter move: ";
    cin >> playerChoice;
    return playerChoice;
}   