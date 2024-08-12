#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) 
{
    std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : type(type) 
{
    std::cout << "WrongAnimal constructor with type" << std::endl;
}

WrongAnimal::~WrongAnimal(void) 
{
    std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) 
{
    std::cout << "WrongAnimal copy constructor" << std::endl;
    *this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) 
{
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

void WrongAnimal::makeSound(void) const 
{
    std::cout << "WrongAnimal sound" << std::endl;
}
