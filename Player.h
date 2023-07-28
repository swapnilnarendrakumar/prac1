#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

using namespace std;

class Player {
    protected:
        char move;
        string name;
    public:
        char makeMove();
        string getName();
        // virtual char makeMove() = 0;
        // virtual string getName() = 0;


};


#endif