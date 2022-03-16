#include "Computer.h"
#include "Human.h"
#include "Referee.h"

#include "RandomComputer.h"


#include <iostream>
using namespace std;


int main() {
    Human player = Human();
    Computer bot = Computer();
    Referee ref = Referee();

    RandomComputer randComp = RandomComputer();
    cout << randComp.makeMove() << endl;




    return 0;
}