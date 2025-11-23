#ifndef CAR_H
#define CAR_H

#include <string>
#include "Engine.h"
#include "Wheel.h"
using namespace std;

class Car {
private:
string brand;
string model;
Engine engine;
Wheel wheels[4];

public:
Car(string b, string m);

void setBrand(string b);
string getBrand();

void setModel(string m);
string getModel();

void setEngine();
void setWheels();

void printDetails();
};

#endif
