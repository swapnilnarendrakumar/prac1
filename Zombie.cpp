#include <iostream>
#include <string>
#include "Zombie.h"

using namespace std;

string Zombie::getName() {
    return name;
}; 

void Zombie::setName(string na) {
    this->name = na;
};

int win_against(string name) {
    string array[2] = {"Monkey", "Pirate"};

    for (int i = 0; i < 2; i++) {
        if (name == array[i]) {
            return true;
        }
    }

    return false;
};