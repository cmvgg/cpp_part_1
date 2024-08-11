#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int tmp;
    static const int fraccion = 8;

public:
    Fixed(void);
    Fixed(const Fixed &obj);
    Fixed(int n);
    Fixed(float n);

    ~Fixed(void);

    Fixed &operator=(const Fixed &obj);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif
