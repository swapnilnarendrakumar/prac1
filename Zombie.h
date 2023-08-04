// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>
#include "Move.h"

using namespace std;

class Zombie: public Move {
    protected:

    public:
        string getName(); 
        void setName(string na);

        int win_against(string name);

};


#endif