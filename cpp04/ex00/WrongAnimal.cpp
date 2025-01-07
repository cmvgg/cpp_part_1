#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Unknown") {
    cout << "Default WrongAnimal constructor called" << endl;
}

WrongAnimal::WrongAnimal(const string& _type) : type(_type) {
    cout << "WrongAnimal constructor with type called" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    cout << "WrongAnimal copy constructor called" << endl;
}

WrongAnimal::~WrongAnimal() {
    cout << "WrongAnimal destructor called" << endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

void WrongAnimal::makeSound() const {
    cout << "WrongAnimal sound" << endl;
}
