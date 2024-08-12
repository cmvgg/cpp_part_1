#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain()) {
    std::cout << "Default constructor of Cat" << std::endl;
}

Cat::~Cat() {
    std::cout << "Destructor of Cat" << std::endl;
    delete brain;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Copy constructor of Cat" << std::endl;
    brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow, I am a Cat" << std::endl;
}
