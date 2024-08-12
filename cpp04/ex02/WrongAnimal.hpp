#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>
#include <ostream>

class WrongAnimal
{
private:
    std::string type;

public:
    WrongAnimal(void);
    WrongAnimal(const std::string &type);
    ~WrongAnimal(void);
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal &operator=(const WrongAnimal &other);

    void makeSound(void) const;
};

#endif
