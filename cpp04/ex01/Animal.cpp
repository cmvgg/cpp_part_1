#include "Animal.hpp"

Animal::Animal() : type("default") {
    cout << "Default constructor of Animal" << endl;
}

Animal::Animal(const string& _type) : type(_type) {
    cout << "Parameterized constructor of Animal" << endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    cout << "Copy constructor of Animal" << endl;
}

Animal::~Animal() {
    cout << "Destructor of Animal" << endl;
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
    cout << "This is a generic animal sound" << endl;
}
