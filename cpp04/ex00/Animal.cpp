#include "Animal.hpp"

Animal::Animal() : type("Unknown") {
    cout << "Default Animal constructor called" << endl;
}

Animal::Animal(const string& _type) : type(_type) {
    cout << "Animal constructor with type called" << endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    cout << "Animal copy constructor called" << endl;
}

Animal::~Animal() {
    cout << "Animal destructor called" << endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

const string& Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    cout << "Animal sound" << endl;
}
