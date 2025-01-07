#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class WrongAnimal {
    private:
        string type;

    public:
        WrongAnimal();
        WrongAnimal(const string& _type);
        WrongAnimal(const WrongAnimal& other);
        virtual ~WrongAnimal();

        WrongAnimal& operator=(const WrongAnimal& other);

        virtual void makeSound() const;
};

#endif
