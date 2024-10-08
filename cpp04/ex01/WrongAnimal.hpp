#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
    private:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(const std::string& _type);
        WrongAnimal(const WrongAnimal& other);
        virtual ~WrongAnimal();

        WrongAnimal& operator=(const WrongAnimal& other);

        virtual void makeSound() const;
};

#endif
