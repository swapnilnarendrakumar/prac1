#include <iostream>
#include <string>
#include "Robot.h"

using namespace std;

string Robot::getName() {
    return name;
}; 

void Robot::setName(string na) {
    this->name = na;
};

int win_against(string name) {
    string array[2] = {"Zombie", "Ninja"};

    for (int i = 0; i < 2; i++) {
        if (name == array[i]) {
            return true;
        }
    }

    return false;
};