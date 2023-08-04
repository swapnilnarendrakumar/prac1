// Dai(a1837470), Dil(a1825200), Swapnil(a1848855)
#ifndef MOVE_H
#define MOVE_H
#include <iostream>
#include <string>

using namespace std;

class Move {
    protected:
        string name;

    public:
        virtual string getName() = 0; 
        virtual void setName(string na) = 0;

};

#endif