#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    cout << "Default WrongCat constructor called" << endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    cout << "WrongCat copy constructor called" << endl;
}

WrongCat::~WrongCat() {
    cout << "WrongCat destructor called" << endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other) {
        WrongAnimal::operator=(other);
    }
    return *this;
}

void WrongCat::makeSound() const {
    cout << "WrongCat sound" << endl;
}
