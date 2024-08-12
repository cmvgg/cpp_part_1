#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("default") {
    std::cout << "Default constructor of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& _type) : type(_type) {
    std::cout << "Parameterized constructor of WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Destructor of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << "Copy constructor of WrongAnimal" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "This is a wrong animal sound" << std::endl;
}
