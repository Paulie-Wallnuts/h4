#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
public:
    Animal();
    virtual ~Animal();            // virtuaalinen destruktori

    virtual void callout() const; // virtuaalinen metodi
};

#endif
