#include <iostream>
#include <string>
#include "Ninja.h"

using namespace std;

string Ninja::getName() {
    return name;
}; 

void Ninja::setName(string na) {
    this->name = na;
};

int win_against(string name) {
    string array[2] = {"Zombie", "Pirate"};

    for (int i = 0; i < 2; i++) {
        if (name == array[i]) {
            return true;
        }
    }

    return false;
};