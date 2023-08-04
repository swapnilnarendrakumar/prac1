// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#ifndef PIRATE_H
#define PIRATE_H
#include <iostream>
#include <string>
#include "Move.h"

using namespace std;

class Pirate: public Move {
    protected:

    public:
        string getName(); 
        void setName(string na);

        int win_against(string name);

};


#endif