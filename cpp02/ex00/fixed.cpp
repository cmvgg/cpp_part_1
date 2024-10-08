#include "Fixed.hpp"

Fixed::Fixed() : tmp(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) : tmp(obj.tmp) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj) {
        this->tmp = obj.tmp;
    }
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->tmp;
}

void Fixed::setRawBits(int const raw) {
    this->tmp = raw;
}
