#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
Dog();
~Dog() override;

void callout() const override; // ylikirjoitus
};

#endif

