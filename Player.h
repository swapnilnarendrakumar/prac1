// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

using namespace std;

class Player {
    protected:
        char move;
        string name;
    public:
        virtual char makeMove() = 0;
        virtual  string getName() = 0;
        void setMove(char M);
        void setName(string na);

        // virtual char makeMove() = 0;
        // virtual string getName() = 0;


};


#endif
