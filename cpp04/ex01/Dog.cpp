#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain()) {
    std::cout << "Default constructor of Dog" << std::endl;
}

Dog::~Dog() {
    std::cout << "Destructor of Dog" << std::endl;
    delete brain;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "Copy constructor of Dog" << std::endl;
    brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Guau, I am a Dog" << std::endl;
}
