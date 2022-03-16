#ifndef H_Pla
#define H_Pla

// create a parent player for all players
class Player {
public:

    Player();

    virtual char makeMove() = 0;

private:


};


#endif