#include "header.h"

/**< CLASS ANIMAL >******************************************************/
Animal::Animal() {}

Animal::~Animal() {}

void Animal::eat() const { std::cout << "Animal eats" << std::endl; }

void Animal::display() const { std::cout << "I'm an animal ! " << std::endl; }
/************************************************************************/


/**< CLASS LION >********************************************************/
Lion::Lion() : Animal() {}

Lion::~Lion() {}

void Lion::display() const { std::cout << "I'm an lion ! " << std::endl; }
/************************************************************************/


/**< CLASS LION >********************************************************/
Bird::Bird() : Animal() {}

Bird::~Bird() {}

void Bird::display() const { std::cout << "I'm an bird ! " << std::endl; }
/************************************************************************/
