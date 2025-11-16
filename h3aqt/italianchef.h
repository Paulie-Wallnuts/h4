#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"
#include <string>

class ItalianChef : public Chef {
public:
ItalianChef(std::string name);
~ItalianChef();

std::string getName();
void makePasta();
};

#endif
