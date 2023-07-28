#include<iostream>
#include<string>
using namespace std;

#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player {
public:
    Computer();
    char makeMove() ;
    string getName() const ;
};

#endif
