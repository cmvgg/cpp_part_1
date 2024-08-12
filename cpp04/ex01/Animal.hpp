#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Animal {
    protected:
        string type;

    public:
        Animal();
        Animal(const string& _type);
        Animal(const Animal& other);
        virtual ~Animal();

        Animal& operator=(const Animal& other);

        const string& getType() const;
        virtual void makeSound() const = 0; 
};

#endif 
