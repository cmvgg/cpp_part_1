#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Cat") 
{
    std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::~WrongCat(void) 
{
    std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) 
{
    std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) 
{
    if (this != &other)
    {
        WrongAnimal::operator=(other);
    }
    return *this;
}

void WrongCat::makeSound(void) const 
{
    std::cout << "WrongCat sound" << std::endl;
}
