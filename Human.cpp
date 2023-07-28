#include <iostream>
#include <string>
#include "Player.h"
#include "Human.h"

using namespace std;

// Human::Human(): name("Human"), move('R') {};
Human::Human() {
    name = "Human";
    move = 'R';
}

Human::Human(string name) {
    this->name = name;
    move = 'R';
}

char Human::makeMove() {
    return move;
}

string Human::getName() {
    return name;
}
