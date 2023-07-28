#include "Computer.h"

Computer::Computer() {}

char Computer::makeMove() {
    // Computer is always R
    return 'R';
}

std::string Computer::getName() const {
    return "Computer";
}
