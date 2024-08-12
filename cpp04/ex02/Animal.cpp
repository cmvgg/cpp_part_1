#include "Animal.hpp"

Animal::Animal(void) : type("default") 
{
    std::cout << "Default Animal constructor" << std::endl;
}

Animal::Animal(const string &type) : type(type) 
{
    std::cout << "Parameterized Animal constructor" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) 
{
    std::cout << "Copy Animal constructor" << std::endl;
}

Animal::~Animal(void) 
{
    std::cout << "Animal destructor" << std::endl;
}

Animal &Animal::operator=(const Animal &other) 
{
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

const string &Animal::getType(void) const 
{
    return type;
}
