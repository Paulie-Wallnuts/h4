#ifndef ENGINE_H
#define ENGINE_H

class Engine {
private:
int horsepower;
double displacement;

public:
Engine();
Engine(int hp, double disp);

void setHorsepower(int hp);
int getHorsepower();

void setDisplacement(double disp);
double getDisplacement();
};

#endif
