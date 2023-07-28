#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include "Player.h"

using namespace std;

class Human: public Player {
    private:

    public:
        Human();
        Human(string name);
        char makeMove();
        string getName();
};



#endif
