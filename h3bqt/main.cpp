#include <iostream>
#include "Animal.h"
#include "Dog.h"

int main()
{
std::cout << "--- Suorat oliot ---" << std::endl;
Animal a;
Dog d;

a.callout();
d.callout();

std::cout << "--- Polymorfinen esimerkki osoittimella ---" << std::endl;
Animal* pa = new Dog();
pa->callout();
delete pa;

return 0;
}

