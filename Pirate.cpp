#include <iostream>
#include <string>
#include "Pirate.h"

using namespace std;

string Pirate::getName() {
    return name;
}; 

void Pirate::setName(string na) {
    this->name = na;
};

int win_against(string name) {
    string array[2] = {"Monkey", "Robot"};

    for (int i = 0; i < 2; i++) {
        if (name == array[i]) {
            return true;
        }
    }

    return false;
};