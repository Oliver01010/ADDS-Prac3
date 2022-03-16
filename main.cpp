#include "Computer.h"
#include "Human.h"
#include "Referee.h"

#include <iostream>
using namespace std;


int main() {
    Human player = Human();
    Computer bot = Computer();
    Referee ref = Referee();

    // play the game
    char result = ref.refGame(player, bot);
    cout << result << endl;

    return 0;
}