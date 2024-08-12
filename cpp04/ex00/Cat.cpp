#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    cout << "Default Cat constructor called" << endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    cout << "Cat copy constructor called" << endl;
}

Cat::~Cat() {
    cout << "Cat destructor called" << endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

void Cat::makeSound() const {
    cout << "Meow" << endl;
}
