#ifndef FONCTIONS_HPP
# define FONCTIONS_HPP

#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"
#include "Base.hpp"

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

#endif