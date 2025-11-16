#include "Dog.h"
#include <iostream>

Dog::Dog() {
std::cout << "Dog konstruktori" << std::endl;
}

Dog::~Dog() {
std::cout << "Dog destruktori" << std::endl;
}

void Dog::callout() const {
std::cout << "Koira haukkuu" << std::endl;
}
