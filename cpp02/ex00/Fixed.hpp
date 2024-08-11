#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int tmp;
    static const int fraction = 8;

public:
    Fixed();                             
    Fixed(const Fixed &obj);             
    ~Fixed();                            
    Fixed& operator=(const Fixed &obj);  
    int getRawBits() const;              
    void setRawBits(int const raw);      
};

#endif
