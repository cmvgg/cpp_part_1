#include "Fixed.hpp"

Fixed::Fixed(void) : tmp(0) {}

Fixed::Fixed(const Fixed &obj) : tmp(obj.tmp) {}

Fixed::Fixed(int n) : tmp(n << fraccion) {}

Fixed::Fixed(float n) : tmp(static_cast<int>(roundf(n * (1 << fraccion)))) {}

Fixed::~Fixed(void) {}

Fixed &Fixed::operator=(const Fixed &obj)
{
    if (this != &obj)
    {
        this->tmp = obj.tmp;
    }
    return *this;
}

int Fixed::getRawBits(void) const
{
    return this->tmp;
}

void Fixed::setRawBits(int const raw)
{
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

bool Fixed::operator>(const Fixed &obj) const
{
    return this->tmp > obj.tmp;
}

bool Fixed::operator<(const Fixed &obj) const
{
    return this->tmp < obj.tmp;
}

bool Fixed::operator<=(const Fixed &obj) const
{
    return this->tmp <= obj.tmp;
}

bool Fixed::operator>=(const Fixed &obj) const
{
    return this->tmp >= obj.tmp;
}

bool Fixed::operator==(const Fixed &obj) const
{
    return this->tmp == obj.tmp;
}

bool Fixed::operator!=(const Fixed &obj) const
{
    return this->tmp != obj.tmp;
}

Fixed Fixed::operator+(const Fixed &obj) const
{
    return Fixed(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(const Fixed &obj) const
{
    return Fixed(this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(const Fixed &obj) const
{
    return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(const Fixed &obj) const
{
    if (obj.tmp == 0)
    {
        throw std::runtime_error("Division by zero");
    }
    return Fixed(this->toFloat() / obj.toFloat());
}

Fixed &Fixed::operator++()
{
    this->tmp++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->tmp++;
    return temp;
}

Fixed &Fixed::operator--()
{
    this->tmp--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    this->tmp--;
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return os;
}
