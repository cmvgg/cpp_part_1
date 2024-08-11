#include "zombie.hpp"

Zombie::Zombie(void) : name("") { // Initialization list to initialize name
}

Zombie::~Zombie(void) {
    std::cout << this->name << " destroyed Zombie" << std::endl;
}

void Zombie::setName(const std::string& _name) {
    this->name = _name;
}

void Zombie::announce(void) const {
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
