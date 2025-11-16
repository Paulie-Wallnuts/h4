#include "Animal.h"
#include <iostream>

Animal::Animal() {
std::cout << "Animal konstruktori" << std::endl;
}

Animal::~Animal() {
std::cout << "Animal destruktori" << std::endl;
}

void Animal::callout() const {
std::cout << "Eläin ääntelee." << std::endl;
}
