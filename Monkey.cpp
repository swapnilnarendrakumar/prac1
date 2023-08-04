#include <iostream>
#include <string>
#include "Monkey.h"

using namespace std;

string Monkey::getName() {
    return name;
}; 

void Monkey::setName(string na) {
    this->name = na;
};

int win_against(string name) {
    string array[2] = {"Zombie", "Robot"};

    for (int i = 0; i < 2; i++) {
        if (name == array[i]) {
            return true;
        }
    }

    return false;
};
