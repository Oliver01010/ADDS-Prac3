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


#include <array>
#include <iostream>
using namespace std;


int main() {
    Avalanche* a = new Avalanche();
    Bureaucrat* b = new Bureaucrat();
    Crescendo* c = new Crescendo();
    FistfullODollars* f = new FistfullODollars();
    PaperDoll* p = new PaperDoll();
    RandomComputer* r = new RandomComputer();
    Toolbox* t = new Toolbox();
    PaperDoll* p1 = new PaperDoll();


    array<Player*, 8> competitors = {a, b, c, f, p, r, t, p1};

    // make the tornament
    Tournament tournament = Tournament();

    Player* winner = tournament.run(competitors);
    

    return 0;
}