#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), brain(new Brain) 
{
    std::cout << "Default Cat constructor" << std::endl;
}

Cat::~Cat(void) 
{
    std::cout << "Cat destructor" << std::endl;
    delete brain;
}

Cat::Cat(const Cat &other) : Animal(other) 
{
    std::cout << "Copy Cat constructor" << std::endl;
    brain = new Brain(*other.brain);
}

Cat &Cat::operator=(const Cat &other) 
{
    if (this != &other)
    {
        std::cout << "Cat assignment operator" << std::endl;
        delete brain;
        brain = new Brain(*other.brain);
        Animal::operator=(other);
    }
    return *this;
}

void Cat::makeSound(void) const 
{
    std::cout << "Meow, I am a Cat" << std::endl;
}
