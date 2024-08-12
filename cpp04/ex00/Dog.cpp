#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    cout << "Default Dog constructor called" << endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    cout << "Dog copy constructor called" << endl;
}

Dog::~Dog() {
    cout << "Dog destructor called" << endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

void Dog::makeSound() const {
    cout << "Guau" << endl;
}
