#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
    if (name.empty()) {
        std::cout << "Zombie name is empty" << std::endl;
        this->_name = "Zombie";
    }
}

Zombie::~Zombie(void) {
    std::cout << this->_name << " Zombie cleaned" << std::endl;
}

void Zombie::announce(void) const {
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
