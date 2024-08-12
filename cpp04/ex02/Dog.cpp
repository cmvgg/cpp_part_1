#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), brain(new Brain) 
{
    std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog(void) 
{
    std::cout << "Dog destructor" << std::endl;
    delete brain;
}

Dog::Dog(const Dog &other) : Animal(other) 
{
    std::cout << "Dog copy constructor" << std::endl;
    brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other) 
{
    if (this != &other)
    {
        delete brain;
        brain = new Brain(*other.brain);
        Animal::operator=(other);
    }
    return *this;
}

void Dog::makeSound(void) const 
{
    std::cout << "Guau, I am a Dog" << std::endl;
}
