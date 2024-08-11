#include "Fixed.hpp"

Fixed::Fixed(void) : tmp(0)
{
    std::cout << "Default constructor called" << std::endl; // Optional debug
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl; // Optional debug
    *this = obj;
}

Fixed::Fixed(int n) : tmp(n << fraccion)
{
    std::cout << "Integer constructor called" << std::endl; // Optional debug
}

Fixed::Fixed(float n) : tmp(static_cast<int>(roundf(n * (1 << fraccion))))
{
    std::cout << "Float constructor called" << std::endl; // Optional debug
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl; // Optional debug
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl; // Optional debug
    if (this != &obj)
    {
        this->tmp = obj.tmp;
    }
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits called" << std::endl; // Optional debug
    return this->tmp;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits called" << std::endl; // Optional debug
    this->tmp = raw;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->tmp) / (1 << fraccion);
}

int Fixed::toInt(void) const
{
    return this->tmp >> fraccion;
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return os;
}
