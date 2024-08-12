#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

using std::string;

class Animal
{
protected:
    string type;

public:
    Animal(void);
    Animal(const string &type);
    Animal(const Animal &other);
    virtual ~Animal(void);
    Animal &operator=(const Animal &other);

    const string &getType(void) const;
    virtual void makeSound(void) const = 0;
};

#endif
