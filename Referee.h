#ifndef REFEREE_H
#define REFEREE_H
#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"

using namespace std;

class Referee {
    private:

    public:
        Referee();
        Player* refGame(Player* player1, Player* player2);

};

#endif
