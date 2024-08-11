#include "Weapon.hpp"

Weapon::Weapon(const std::string& str) : type(str) {
    std::cout << "Constructor Weapon" << std::endl;
}

Weapon::~Weapon() {
    std::cout << "Destructor Weapon" << std::endl;
}

std::string Weapon::getType() const {
    return this->type;
}

void Weapon::setType(const std::string& str) {
    this->type = str;
}
