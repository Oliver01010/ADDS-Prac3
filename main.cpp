#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "PaperDoll.h"
#include "RandomComputer.h"
#include "Toolbox.h"

#include "Tournament.h"



#include <iostream>
using namespace std;


int main() {
    Player* competitors = new Player[8];

    // make the tornament
    Tournament tournament = Tournament();

    Player* tournament.run(competitors)
    

    return 0;
}